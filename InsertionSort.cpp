#include "InsertionSort.h"
#include <iostream>
#include <vector>
using namespace std;
InsertionSort::InsertionSort()
{

}
InsertionSort::~InsertionSort()
{

}
void InsertionSort::InsertionSorting(int arr[], int arr_size)
{
	cout << "InsertionSort: " << endl;
	if (arr_size > 1)
	{
		int size = arr_size;
		for (int i = 1; i < size; ++i)
		{
			int j = i - 1;
			int key = arr[i];
			while (j >= 0 && arr[j] > key)
			{
				arr[j + 1] = arr[j];
				--j;
			}
			arr[j + 1] = key;
			for (int k = 0; k < arr_size; ++k)
			{
				cout << arr[k] << " ";
			}
			cout << endl;
		}
	}
}