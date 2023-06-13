#include<iostream>
#include<string>
using namespace std;

void createstring(string& s, int index)
{
    if(index == s.size())
    { // Duyệt xong chuỗi
        cout << s << endl; // In ra kết quả
        return;
    }

    if(s[index] =='?') // Nếu gặp kí tự '?' thì thử đặt là 0 hoặc 1 
    {
        s[index] = '0'; 
        createstring(s, index + 1); // gọi đệ quy
        s[index] = '1';
        createstring(s, index + 1); // gọi đệ quy
        s[index] = '?'; // lặp lại 
    } 
    else
    {
        createstring(s, index + 1);
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        createstring(s,0);        
    }
    return 0;
}