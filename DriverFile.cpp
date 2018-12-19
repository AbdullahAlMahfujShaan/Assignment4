#include <iostream>
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "SelectionSort.h"
#include <vector>
using namespace std;
int main()
{
	BubbleSort Bubble_Sort;
	int object[8] = { 14,33,27,10,35,19,48,44 };
	int x = sizeof(object) / sizeof(object[0]);
	Bubble_Sort.BubbleSorting(object, x);

	SelectionSort Selection_Sort;
	int object1[8] = { 14,33,27,10,35,19,48,44 };
	int y = sizeof(object1) / sizeof(object1[0]);
	Selection_Sort.SelectionSorting(object1, y);

	InsertionSort Insertion_Sort;
	int object2[8] = { 14,33,27,10,35,19,48,44 };
	int z = sizeof(object2) / sizeof(object2[0]);
	Insertion_Sort.InsertionSorting(object2, z);
	
	MergeSort Merge_Sort;
	int object3[8] = { 14,33,27,10,35,19,48,44 };
	int v = sizeof(object3) / sizeof(object3[0]);
	Merge_Sort.MergeSorting(object3, v);
}