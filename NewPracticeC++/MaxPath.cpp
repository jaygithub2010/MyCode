//
#include "stdafx.h"
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int maxValue(int i, int j, vector<vector<int>> &maxArray)
//{
//	
//	int m = maxArray.size(), n = maxArray[0].size();
//	if (i > 0 && i < m - 1 && j>0 && j < n - 1)
//	{
//		if(maxArray[i+1][j+1]==INT_MIN)
//			maxArray[i + 1][j + 1] = maxValue(i + 1, j + 1, maxArray);
//		if (maxArray[i+1][j] == INT_MIN)
//			maxArray[i + 1][j - 1] = maxValue(i + 1, j - 1, maxArray);
//		if (maxArray[i+1][j] == INT_MIN)
//			maxArray[i + 1][j] = maxValue(i + 1, j, maxArray);
//	}
//	return 0;
//}
//int main()
//{
//	vector<vector<int>> a{ { 1, 2, 3 },
//	{ 4, 8, 2 },
//	{ 1, 5, 3 } };
//	vector<vector<int>> b(3, vector<int>(3, INT_MIN));
//	return 0;
//}