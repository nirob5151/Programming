#include<iostream>
using namespace std;

int Partition(int a[], int p, int r) {
    int pivot = a[p];
    int i = p + 1;
    int j = r;
    while (i <= j) {
        while (a[i] <= pivot) {
            i++;
        }
        while (a[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(a[i], a[j]);
        } else {
            break;
        }
    }
    swap(a[p], a[j]);
    return j;
}

void quicksort(int a[], int p, int r) {
    int i = p;
    while (i < r) {
        int pivot = Partition(a, i, r);
        int j = p;
        while (j < pivot) {
            quicksort(a, j, pivot);
            j++;
        }
        i = pivot + 1;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}