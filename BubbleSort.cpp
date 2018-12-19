#include "BubbleSort.h"
#include <iostream>
using namespace std;
BubbleSort::BubbleSort()
{

}
BubbleSort::~BubbleSort()
{

}
void BubbleSort::BubbleSorting(int *arr, int n)
{
	cout << "BubbleSort: " << endl;
	bool swapped = true;
	int j = 0;
	int temp;
	while (swapped)
	{
		swapped = false;
		j++;
		for (int index = 0; index < n - j; ++i;)
		{
			if (arr[index] > arr[index+1])
			{
				temp = arr[i];
				arr[index] = arr[index + 1];
				arr[index + 1] = temp;
				swapped = true;
				for (int k = 0; k < n; ++k;)
				{
					cout << arr[k] << " ";
				}
				cout << endl;
			}
		}
	}
}