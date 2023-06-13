#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
 };

typedef struct Node* node;

// Cap phat dong mot node moi
node makeNode(int x){
    node tmp = new Node();
    tmp ->data=x;
    tmp ->next=NULL;
    return tmp;
}

// Kiem tra rong
bool empty(node a){
    return a == NULL;
}

// Dem phan tu 
int Size(node a){
    int dem=0;
    while(a!=NULL){
        dem++;
        a = a->next; // gan dia chi cua node tiep theo
    }
    return dem;
}

// Them phan tu vao dau danh sach
void insertFirst(node &a, int x){
    node tmp = makeNode(x);
    if(a==NULL){
        a = tmp;
    }
    else{
        tmp->next = a;
        a = tmp;
    }
}

// Them phan tu vao cuoi danh sach
void insertLast(node &a, int x){
    node tmp = makeNode(x);
    if(a==NULL){
        a = tmp;
    }
    else{
        node p = a;
        while(p->next !=NULL){
            p = p->next;
        }
        p->next=tmp;
    }
}

// Them phan tu vao vi tri bat ki
void insertany(node &a, int x, int pos){
    int n = Size(a);
    if(pos <=0 || pos > n+1){
        cout <<"vi tri chen khong dung" ;
    }
    if(n==1){
        insertFirst(a, x); return;
    }
    else if(n==pos+1){
        insertLast(a,x); return;
    }
    node p =a;
    for (int i = 1; i < pos - 1; i++){
        p = p->next;
    }
    node tmp = makeNode(x);
    tmp->next = p->next;
    p -> next = tmp;
}

void in(node a){
    cout << endl;
    while (a!=NULL)
    {
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}

int main(){
    node head = NULL;
    while(1){
        cout << "--------------Lua chon--------------" << endl;
        cout << "1.Them phan tu vao dau danh sach" << endl;
        cout << "2.Them phan tu vao cuoi danh sach" << endl;
        cout << "3.Them phan tu vao vi tri bat ki trong danh sach" << endl; 
        cout << "4.Hien danh sach" << endl;
        cout << "Nhap lua chon";
        int lc; cin >> lc;
        if(lc == 1){
            int x; cin >> x;
            insertFirst(head,x);
        }
        else if(lc == 2){
            int x; cin >> x;
            insertLast(head,x);
        }
        else if(lc==3){
            int x; cin >> x;
            int pos; cin >> pos;
            insertany(head,x,pos);
        }
        else if(lc==4){
            in(head);
        }
 }
    return 0;
}


