//
#include "stdafx.h"
//#include<iostream>
//#include<vector>
//using namespace std;
//void devide(vector<int> num, int start, int end, vector<int> &s, int index)
//{
//	if (end - start == 1)
//		s[index] = num[start] + num[end];
//	else if (end == start)
//		s[index] = num[start];
//	else
//	{
//		int mid = (start + end) / 2;
//		devide(num, start, mid, s, 2*index + 1);
//		devide(num, mid + 1, end, s, 2*index + 2);
//		s[index] = s[2*index + 1] + s[2*index + 2];
//	}
//}
//int update(vector<int> num, int start, int end, int index, int value, vector<int> *s)
//{
//	if (start == end && start == index)
//	{
//		if (value > num[start])
//			return value - num[start];
//		return num[start] - value;
//	}
//	else
//	{
//		s[index]=
//	}
//}
//int main()
//{
//	vector<int> num= { 1, 3, 5, 7, 9, 11 }, s(7);
//	devide(num, 0, num.size()-1, s, 0);
//	for (int i = 0; i < 7; i++)
//	{
//		cout << s[i];
//	}
//	return 0;
//}