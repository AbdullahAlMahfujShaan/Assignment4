#ifndef INSERTION_H_INCLUDED
#define INSERTION_H_INCLUDED
#include <vector>
using namespace std;
class InsertionSort
{
public:
	InsertionSort();
	~InsertionSort();
	void InsertionSorting(int arr[], int arr_size);
	void InsertionSorting(vector<int>, int size);
};
#endif // !INSERTION_H_INCLUDED
