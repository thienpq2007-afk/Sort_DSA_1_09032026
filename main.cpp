#include<iostream>
using namespace std;

void Nhap(int *&A, int &n)
{
    cin >> n;
    A = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

void Search(int A[], int n, int x)
{
    bool found1 = false;
    int note1;
    int dem1 = 0;

    for(int i = 0; i < n; i++)
    {
        dem1++;
        if(A[i] == x)
        {
            found1 = true;
            note1 = i;
            break;
        }
    }

    if(!found1)
    {
        cout << -1;
        return;
    }
    else
    {
        cout << note1 << endl;
        cout << dem1 << endl;
    }

    bool found2 = false;
    int note2;
    int dem2 = 0;

    for(int i = n - 1; i >= 0; i--)
    {
        dem2++;
        if(A[i] == x)
        {
            found2 = true;
            note2 = n - 1 - i;
            break;
        }
    }
    if(found2)
    {
        cout << note2 << endl;
        cout << dem2 << endl;
    }
}

int main()
{
    int *A;
    int n;
    int x;
    Nhap(A, n);
    cin >> x;
    Search(A, n, x);
    return 0;
}
