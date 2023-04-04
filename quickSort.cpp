#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
	int temp;
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;

			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}

	temp = arr[i+1];
	arr[i+1] = arr[high];
	arr[high] = temp;

	return (i + 1);
}






void quickSort(int arr[], int low, int high)
{
	int pi;
	if (low < high)
	{
		pi = partition(arr, low, high);
	pi = partition(arr, low, high);
	quickSort(arr, low, pi-1); 
	quickSort(arr, pi + 1, high); 
	}

}








int main()
{
	int array[] = {5,-3,2,7};
	int s = 4;
	cout << "Array before" << endl;
	for (int i = 0;i < s;i++)
	{
		cout << array[i] << "  ";
	}
	cout << endl;

	cout << "Array after " << endl;

	quickSort(array, 0, s-1);

	for (int i = 0;i < s;i++)
	{
		cout << array[i] << "  ";
	}
}