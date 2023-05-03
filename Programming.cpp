// Programming.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>

using namespace std;

int main()
{
	int min, max;
	int SIZE;
	cout << "Enter size of array" << endl;
	cin >> SIZE;
	cout << endl;
	int* arr = new int[SIZE];

	for (int i = 0;i < SIZE;i++)
	{
		arr[i] = rand() % 20;
		cout << arr[i] << endl;
	}
	cout << endl;


	min = arr[5];
	max = arr[0];

	for (int i = 1;i < SIZE;i++)
	{
		if (arr[i] > max)
		{
			max=arr[i];
		}

		if (arr[i] < min)
		{
			min=arr[i];
		}
	}

	cout <<"Max number =" << max<<"\n" << "Min number =" << min << endl;

	int sum = 0;
	for (int i = 0;i < SIZE;i++)
	{
		if (arr[i] != max && arr[i] != min)
		{
			sum += arr[i];
		}
	}

	cout << "Sum = " << sum << endl;



	delete []arr;

	return 0;
}