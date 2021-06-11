//冒泡排序，两种方法冒泡排序的最小时间代价θ(n)，最大时间代价，和平均时间代价均为θ(n²)。，2016.5.29
#include <iostream>
using namespace std;
void swap(int array[], int i, int j)
{
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
void BubbleSort1(int array[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n-1; j++)
		{
			if (array[i]>array[j])
				swap(array, j, i);//每次i后面的元素比array[i]小就交换。
		}
	}
}
void BubbleSort2(int array[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j >= i;j--)
		{
			if (array[j - 1]>array[j])//从后面到i个元素两两比较，把小的不断上顶
				swap(array, j, j - 1);
		}
	}
}
void main()
{
	int arr[13];
	cout << "请输入要排序的元素：" << endl;
	for (int i = 0; i < 13; i++)
	{
		cin >> arr[i];
	}
	//cout << "排序前的无序数组元素" << arr[i] << endl;
	BubbleSort1(arr, 13);
	cout << "排序后的数组元素" << endl;
	for (int i = 0; i < 13; i++)
	{
		cout << arr[i] << endl;
	}
	BubbleSort2(arr, 13);
	cout << "排序后的数组元素" << endl;
	for (int i = 0; i < 13; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
}
