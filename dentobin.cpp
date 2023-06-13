#include <iostream> 
using namespace std; 
 
void decToBinary(long long n) 
{ 
    int binaryNum[1000]; 
 
    int i = 0; 
    while (n > 0) { 
 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
 
int main() 
{ 
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n; 
        decToBinary(n); 
        cout << endl;
    }
    return 0; 
}