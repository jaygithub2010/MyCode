#include"stdafx.h"
//#include<map>
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	map<char,string> digitCodes { {'0',"1110111"}, {'1',"0010010" },{'2',"1011101"},{ '3',"1011011" },{'4',"0111010"},{ '5',"1101011" },{ '6',"1101111" },
//	{ '7',"1010010" },{ '8',"1111111" },{ '9',"1111011" } };
//	map<int, string> chars = { {0," _ "},{ 1,"| " },{ 2,"|" },{ 3," _ " },{ 4,"| " },{ 5,"|" },{ 6," _ " } };
//	int i = 0, state;
//	string input;
//	cin >> input;
//	while (i < 7)
//	{
//		for (auto digit : input)
//		{
//			if (digitCodes[digit][i] == '1')
//			{
//				cout << chars[i];
//
//			}
//			else
//			{
//				cout << "  ";
//			}
//			if (i == 1 || i == 4)
//			{
//				if (digitCodes[digit][i + 1] == '1')
//				{
//					cout << chars[i+1];
//				}
//				else
//				{
//					cout << " ";
//				}
//			}
//			cout << " ";
//		}
//		i = i + 1;
//		if (i == 2 || i == 5)
//			i += 1;
//		cout << '\n';
//
//	}
//}