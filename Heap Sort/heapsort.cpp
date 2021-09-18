#include <iostream> 
using namespace std; 

 
void heap_condition(int arr[], int n, int i) 
{ 
	int largest = i;  
	int left = 2 * i + 1; 
	int right = 2 * i + 2;  

	
	if (left < n && arr[left] > arr[largest]) 
		largest = left; 

	 
	if (right < n && arr[right] > arr[largest]) 
		largest = right; 

	 
	if (largest != i) 
	{ 
		swap(arr[i], arr[largest]); 

	
		heap_condition(arr, n, largest); 
	} 
} 

 
void heap_sort(int arr[], int n) 
{ 
	 
	for (int j = n / 2 - 1; j >= 0; j--)
	{
	 	heap_condition(arr, n, j);
    }

	 
	for (int j = n - 1; j >= 0; j--)
	{ 
	
		swap(arr[0], arr[j]);	
		heap_condition(arr, j, 0); 
	} 
} 


void print_array(int arr[], int n) 
{ 
	for (int i = 0; i < n; ++i) 
		cout << arr[i] << " "; 
	cout << "\n"; 
} 

 
int main() 
{ 
    int a;
    cout<<"enter the number of elements you want to enter :";
    cin>>a;
	int arr[a]={};
	cout<<"enter the numbers to be sorted :";
	for (int i=0;i<a;i++)
	{
	    cin>>arr[i];
	}
	int n = sizeof(arr) / sizeof(arr[0]); 

	heap_sort(arr, n); 

	cout << "Sorted array is :"; 
	print_array(arr, n); 
} 
