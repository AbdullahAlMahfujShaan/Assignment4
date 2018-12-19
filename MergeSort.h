#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED
#include <vector>
using namespace std;
class MergeSort
{
public:
	MergeSort();
	~MergeSort();
	void MergeSortHelp(int arr[], int high, int low);
	void Merge(int arr[], int low, int high, int medium);
	void MergeSorting(int arr[], int arr_size);
};
#endif // !MERGESORT_H_INCLUDED
