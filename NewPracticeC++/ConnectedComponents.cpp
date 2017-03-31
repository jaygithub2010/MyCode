////tested
#include "stdafx.h"
//#include<iostream>
//#include<vector>
//using namespace std;
//int DFS(vector<vector<int>> matrix, int i, int j, vector<vector<bool>> &visited)
//{
//	int a;
//	int m = matrix.size(), n = matrix[0].size();
//	if (i>=0 && i<m && j>=0 && j<n)
//	{
//		if (matrix[i][j] == 1)
//		{
//			if (!visited[i][j])
//			{
//				visited[i][j] = true;
//				return 1+DFS(matrix, i + 1, j, visited) + DFS(matrix, i - 1, j, visited) + DFS(matrix, i, j + 1, visited) + DFS(matrix, i, j - 1, visited)
//					+ DFS(matrix, i + 1, j - 1, visited) + DFS(matrix, i + 1, j + 1, visited) + DFS(matrix, i - 1, j - 1, visited) + DFS(matrix, i - 1, j + 1, visited);
//			}
//			else
//			{
//				return 0;
//			}
//		}
//		else
//			return 0;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	vector<vector<int>> arr;
//	int m = 4, n = 5, max_count=0, temp_count;
//	vector< vector<bool> > visited = { { 0, 0, 0, 0, 0 },
//	{ 0, 0, 0, 0, 0 },
//	{ 0, 0, 0, 0, 0 },
//	{ 0, 0, 0, 0, 0 } };
//	arr= { { 0, 0, 1, 1, 0 },
//	{ 1, 0, 1, 1, 0 },
//	{ 0, 1, 0, 0, 0 },
//	{ 0, 0, 0, 0, 1 } };
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			temp_count = DFS(arr, i, j, visited);
//			cout << temp_count;
//			if (max_count < temp_count)
//				max_count = temp_count;
//		}
//	}
//	cout << max_count;
//	return 0;
//}