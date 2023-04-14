#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n; // Number of element in the array
int i; // Index of array element

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimu, 1 and maximum 20 elements. \n\n";
	}
	//Accept array elements
	cout << "===================\n";
	cout << "Enter array element\n";
	cout << "===================\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}

}


void linearSearch()
{
	char ch;
	int comparisons; // Number of compersisons

	do
	{
		// Accept the number to be search
		cout << "\nEnter the element you want to search: "; //langkah 1
		int item;
		cin >> item;

		comparisons = 0;
		for (i = 0; i < n; i++)// langkah 2, 3 dab 4
		{
			comparisons++;
			if (arr[i] == item)
			{
				cout << "\n" << item << " found at position " << (i + 1) << endl;
				break;
			}
		}

		