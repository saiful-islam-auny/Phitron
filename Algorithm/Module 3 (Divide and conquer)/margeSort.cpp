#include <iostream>
using namespace std;

void merge(int a[], int l, int r, int mid)
{
    int i = l, j = mid + 1, high = r, k=l;
    int temp[high];

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = a[i++];
    }

    while (j <= high)
    {
        temp[k++] = a[j++];
    }

    for (int x = l; x <= high; x++)
    {
        a[x] = temp[x];
    }
}

void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, l, r, mid);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    mergeSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
