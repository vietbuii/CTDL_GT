#include <iostream>
using namespace std;

// ham heapify
void heapify(int arr[], int N, int i)
{
// khoi tao goc lon nhat
	int largest = i;

	// node trai = 2*i + 1
	int l = 2 * i + 1;

	// node phai = 2*i + 2
	int r = 2 * i + 2;

	// neu node con ben trai lon hon goc
	if (l < N && arr[l] > arr[largest])
		largest = l;

	// neu node con ben phai lon hon goc
	if (r < N && arr[r] > arr[largest])
		largest = r;

	// neu goc chua lon nhat
	if (largest != i) {
		swap(arr[i], arr[largest]);

	// cay phu
		heapify(arr, N, largest);
	}
}

// ham main Heap Sort
void heapSort(int arr[], int N)
{
	// Xay dung Heap ( sap xep lai mang )
	// Bat dau tu chi so cuoi cung cua node khong phai node la co chi so tu [n/2-1]
	for (int i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);
	
	// lan luot trich xuat 1 phan tu từ Heap
	for (int i = N - 1; i > 0; i--) {

	// di chuyen goc hien tai xuong cuoi cung
	swap(arr[0], arr[i]);

	// goi ham heapify
	heapify(arr, i, 0);
	}
}

// in mảng
void printArray(int arr[], int N){
	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
		cout << "\n";
}

// ham main 
int main(){
	int arr[] = { 4, 10, 3, 5, 1 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// goi hàm
	heapSort(arr, N);

	cout << "Mang duoc sap xep la: \n";
	printArray(arr, N);
}
