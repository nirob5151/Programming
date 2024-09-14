#include<iostream>
using namespace std;
int Partition(int a[], int p, int r) {
    int pivot = a[p];
    int i = p + 1;
    int j = r;
    do {
        do{
            i++;
        }
        while (a[i] <= pivot);
        do{
            j--;
        }
        while (a[j] > pivot);
        if (i <= j) {
            swap(a[i], a[j]);
        } else {
            break;
        }
    } while (i <= j);
    swap(a[p], a[j]);
    return j;
}
void quicksort(int a[], int p, int r) {

   if(p<r){
       int pivot=Partition(a,p,r);
       quicksort(a,p,pivot);
       quicksort(a,pivot+1,r);
   } 
    
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    quicksort(a,0,n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}