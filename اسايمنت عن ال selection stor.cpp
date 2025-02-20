// ConsoleApplication130.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
void selectoionstor(int arr[], int n) {
	int midx;
	for (int i = 0; i < n - 2; i++)
	{
		midx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[midx] > arr[j])
				midx = j;
		}
		swap(arr[i], arr[midx]);
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
	int x[5] = { 6,2,4,3,8 };
	print(x, 5);

	selectoionstor(x, 5);

	print(x, 5);

}

