#include "SelectionSort.h"
#include <iostream>
using namespace std;
SelectionSort::SelectionSort()
{

}
SelectionSort::~SelectionSort()
{

}
void inline Swap(int &a, int &b)
{
	int k = a;
	a = b;
	b = k;
}
void SelectionSort::SelectionSorting(int arr[], int arr_size)
{
	cout << "SelectionSort: " << endl;
	for (int i = 0; i < arr_size - 1; ++i)
	{
		int minimum = i;
		for (int j = i + 1; j < arr_size; ++j)
		{
			if (arr[j] < arr[minimum])
				minimum = j;
		}
		Swap(arr[minimum], arr[i]);
		for (int k = 0; k < arr_size; ++k)
		{
			cout << arr[k] << " ";
		}
		cout << endl;
	}
}