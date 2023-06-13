#include <iostream>
using namespace std;
 
int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
// ham main
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // goi ham
    int result = search(arr, N, x);
    (result == -1)
        ? cout << "phan tu khong co trong mang"
        : cout << "vi tri phan tu can tim la: " << result;
    return 0;
}