#include "MergeSort.h"
#include <iostream>
#include <vector>
using namespace std;
MergeSort::MergeSort()
{

}
MergeSort::~MergeSort()
{

}
void MergeSort::MergeSorting(int arr[], int arr_size)
{
	cout << "MergeSort: " << endl;
	MergeSortHelp(arr, 0, arr_size - 1);
}
void MergeSort::Merge(int arr[], int low, int high, int medium)
{
	int *temp = new int(high - low + 1);
	int i = low, j = medium + 1;
	int k = 0;
	while (i <= medium && j <= high)
	{
		if (arr[i] <= arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	while (i <= medium)
		temp[k++] = arr[i++];
	while (j <= high)
		temp[k++] = arr[j++];
	for (k = 0, i = low; i <= high; ++i, ++k)
		arr[i] = temp[k];
	delete[]temp;
}
void MergeSort::MergeSortHelp(int arr[], int low, int high)
{
	int middle;
	if (low < high)
	{
		middle = (low + high) / 2;
		MergeSortHelp(arr, low, middle);
		MergeSortHelp(arr, middle + 1, high);
		Merge(arr, low, middle, high);
	}
	for (int k = 0; k < high + 1; ++k)
	{
		cout << arr[k] << " ";
	}
	cout << endl;
}