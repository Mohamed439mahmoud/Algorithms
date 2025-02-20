// ConsoleApplication138.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int binarySearch(int arr[], int n, int key) {
	int left = 0;
	int right = n - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (arr[mid] == key)
		{
			return mid;
		}
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 2,5,6,8,10,65,87 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 6;
	int result = binarySearch(arr, n, key);
	if (result !=-1)
	{
		cout << result << "\n";
	}
	else
	{
		cout << "\n";
	}

}

