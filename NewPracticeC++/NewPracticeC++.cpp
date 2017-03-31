//// NewPracticeC++.cpp : Defines the entry point for the console application.
////
//
#include "stdafx.h"

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int g, m, n, k;
//	cin >> g;
//	for (int i = 0; i < g; i++)
//	{
//		cin >> m >> n >> k;
//		vector<vector<char>> a(m, vector<char>(n));
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cin >> a[i][j];
//			}
//		}
//		int x_count=0, y_count=0, temp_xcount=1, temp_ycount=1;
//		for (int i = 0; i < m; i++)
//		{
//			temp_xcount = 1, temp_ycount = 1;
//			for (int j = 1; j < n; j++)
//			{
//				if (a[i][j] == 'X'&& a[i][j-1]=='X')
//				{
//					temp_ycount = 0;
//					temp_xcount++;
//					if (y_count < temp_ycount)
//					{
//						y_count = temp_ycount;
//
//					}
//					
//				}
//				else if(a[i][j] == 'O'&& a[i][j - 1] == 'O')
//				{
//					temp_xcount = 0;
//					temp_ycount++;
//					if (x_count < temp_xcount)
//					{
//						x_count = temp_xcount;
//				
//					}					
//				}
//			}
//		}
//		for (int i = 0; i < m; i++)
//		{
//			temp_xcount = 1, temp_ycount = 1;
//			for (int j = 1; j < n; j++)
//			{
//				if (a[j][i] == 'X'&& a[j][i - 1] == 'X')
//				{
//					temp_ycount = 0;
//					temp_xcount++;
//					if (y_count < temp_ycount)
//					{
//						y_count = temp_ycount;
//
//					}					
//				}
//				else if (a[j][i] == 'O'&& a[j][i - 1] == 'O')
//				{
//					temp_xcount = 0;
//					temp_ycount++;
//					if (x_count < temp_xcount)
//					{
//						x_count = temp_xcount;
//
//					}
//					
//				}
//			}
//		}
//		int i = 0, j = 0,x_i, y_j;
//		while (i!=m-k+1)
//		{
//			y_j = 1,x_i=i+1;
//			temp_xcount = 1, temp_ycount = 1;
//			while (y_j<j)
//			{
//				if (a[x_i][y_j] == 'X' && a[x_i-1][y_j-1]=='X')
//				{
//					temp_xcount++;
//					temp_ycount = 0;
//					if (x_count < temp_xcount)
//					{
//						x_count = temp_xcount;
//					}
//				}
//				else if (a[x_i][y_j] == 'O' && a[x_i - 1][y_j - 1] == 'O')
//				{
//					temp_ycount++;
//					temp_xcount = 0;
//					if (y_count < temp_ycount)
//					{
//						y_count = temp_ycount;
//					}
//				}
//				x_i++;
//				y_j++;
//			}
//			i++;
//			j--;
//		}
//		int i = k, j = k, x_i, y_j;
//		while (j != 0)
//		{
//			y_j = j+1, x_i =1;
//			temp_xcount = 1, temp_ycount = 1;
//			while (x_i<i)
//			{
//				if (a[x_i][y_j] == 'X' && a[x_i - 1][y_j - 1] == 'X')
//				{
//					temp_xcount++;
//					temp_ycount = 0;
//					if (x_count < temp_xcount)
//					{
//						x_count = temp_xcount;
//					}
//				}
//				else if (a[x_i][y_j] == 'O' && a[x_i - 1][y_j - 1] == 'O')
//				{
//					temp_ycount++;
//					temp_xcount = 0;
//					if (y_count < temp_ycount)
//					{
//						y_count = temp_ycount;
//					}
//				}
//				x_i++;
//				y_j++;
//			}
//			i++;
//			j--;
//		}
//	}
//    return 0;
//}
//
