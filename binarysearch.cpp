#include <bits/stdc++.h>
using namespace std;
 
// tao ham nhi phan
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // neu phan tu o giua
        if (arr[mid] == x)
            return mid;
 
        // neu phan tu nho hon phan tu o mid
        // no se nam o mang ben trai
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // neu phan tu lon hon phan tu o mid
        // no se nam o mang ben phai
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // neu phan tu khong co trong mang
    return -1;
}
 
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "phan tu khong co trong mang"
        : cout << "phan tu can tim: " << result;
    return 0;
}