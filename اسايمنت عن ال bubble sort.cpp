// ConsoleApplication131.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
void bubblesort(int arr[], int n) {
	bool swapped;
	for (int i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (!swapped)
		{
			break;
		}
	}
}
	void print(int arr[], int n) {
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << "\n";

	}

int main()
{
	int x[5] = { 5,3,4,6,8 };
	print(x, 5);
	bubblesort(x, 5);

	print(x, 5);

}

