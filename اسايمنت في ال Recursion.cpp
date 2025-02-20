#include <iostream>
#include<string>
using namespace std;
void selectionsort(int arr[], int n) {
	int midx;
	for (int i = 0; i < n - 1; i++)
	{
		midx = i;

		for (int j = i + 1; j < n; j++)
		{
			if (arr[midx] > arr[j]) {
				midx = j;
			}
		}

		swap(arr[i], arr[midx]);
	}
}
void print(int arr[], int n)

{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int main()
{
	int x[10] = { 5,2,3,4,8,9,6,7,10,22 };
	print(x, 10);

	selectionsort(x, 10);
	print(x, 10);

}