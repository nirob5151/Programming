#include<iostream>
using namespace std;

int Partition(int a[], int p, int r) {
    int pivot = a[p];
    int i = p + 1;
    int j = r;
    for (;i<=j;) {
        for (; i <= r && a[i] <= pivot; i++);
        for (; i >= p && a[j] > pivot; j--);
        if (i < j) {
            swap(a[i], a[j]);
        } else {
            break;
        }
    }
    swap(a[p], a[j]);
    return j;
}

void quickSort(int a[], int p, int r) {
    if (p < r) {
        int pivot = Partition(a, p, r);
            quickSort(a, p, pivot-1);
            quickSort(a, pivot + 1, r);
        }
    }
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    quickSort(a,0,n-1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}