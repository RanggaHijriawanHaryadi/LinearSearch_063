#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n; // Number of element in the array
int i; // Index of array element

void input()
{
	while (true)
	{
		cout << "Enter the number of eleents in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimu, 1 and maximum 20 elements \n\n";
	}
}