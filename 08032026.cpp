#include<iostream>
using namespace std;

void Nhap(int*& A, int& n)
{
	cin >> n;
	A = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
}

void Xuat(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
}

/*void Selection_Sort(int A[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (A[j] < A[min])
			{
				min = j;
			}
		}
		int temp = A[i];
		A[i] = A[min];
		A[min] = temp;
	}
}*/

/*void Interchange_Sort(int A[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (A[j] < A[i])
			{
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
}*/

/*void Bubble_Sort(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (A[j - 1] > A[j])
			{
				int temp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = temp;
			}
		}
	}
}*/

void Insertion_Sort(int A[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int e = A[i];
		int k;
		for (k = i - 1; k > -1; k--)
		{
			if (A[k] < e)
			{
				break;
			}
			A[k + 1] = A[k];
		}
		A[k + 1] = e;
	}
}

int main()
{
	int* A;
	int n;
	Nhap(A, n);
	//Selection_Sort(A, n);
	//Interchange_Sort(A, n);
	//Bubble_Sort(A, n);
	Insertion_Sort(A, n);
	Xuat(A, n);
	return 0;
}