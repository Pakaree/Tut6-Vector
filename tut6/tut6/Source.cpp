#include<iostream>
using namespace std;

// function template definition
template <typename T>
void sort(const T* array, int count)
{
	int tmp, i, j;
	for (int i = 0; i < count-1; i++)
		for (int j = i+1; j = count; j++)
			tmp =  array[j];
			 array[j] =  array[i];
			array[i] = tmp;

			cout << array[i] << " ";
			cout << endl;

}
int main()
{

	const int acount = 20; // size of array

	int a[acount] = { 20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2 };

	cout << "Array contains in acending order:" << endl;
	// call function-template specialization
	sort(a, acount);


}
