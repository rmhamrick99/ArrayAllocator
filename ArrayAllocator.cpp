#include <iostream>
using namespace std;

int *getNumbers(int);
int numArray;

int main()
{
	int *numbers = nullptr;
	cout << "How many numbers do you wish to input? " << endl;
	cin >> numArray;

	numbers = getNumbers(numArray);
	
	for (int count = 0; count < numArray; count++)
	{
		cout << numbers[count] << endl;
	}
	delete[] numbers;
	numbers = nullptr;
	system("pause");
	return 0;
}
int *getNumbers(int numArray)
{
	int *arr = nullptr;
	arr = new int[numArray];
	
	for (int count = 0; count < numArray; count++)
	{
		cout << "What is number " << count + 1 << "?" << endl;
		cin >> arr[count];
	}
	return arr;
}
