#include<bits/stdc++.h>
using namespace std;
 
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    // tao mang
    int L[n1], R[n2];
 
    // sao chep du lieu vao cac mang tam thoi
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    // hop nhat cac mang tam thoi thanh arr[l..r]
    i = 0; // chi so ban dau cua mang con dau tien
    j = 0; // chi so ban dau cua mang con thu hai
    k = l; // chi so ban dau cua mang con thu ba
     while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    // sao chep cac phan tu con lai cua L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    //sao chep cac phan tu con lai cua R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
// ham mergesort
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
 
        // sap xep nua dau va nua sau
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
 
// in mang
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
 
// ham main
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << " mang ban dau :";
    cout << endl;
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    cout << " mang sau khi duoc sap xep:";
    cout << endl;
    printArray(arr, arr_size);
    return 0;
}