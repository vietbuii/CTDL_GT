#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int x)
{
    Node *p = new Node();
    p->data = x;
    p->right = NULL;
    p->left = NULL;
    return p;
}

class BTS
{
public:
    Node *root;
    BTS()
    {
        root = NULL;
    }
    Node *addNode(Node *node, int data);
    Node *del(Node *node, int data);
    void insertx(int data);   // them Node
    void delx(int data);      // xoa Node
    void PreOrder(Node *tmp); // duyet Tree
    void InOrder(Node *tmp);
    void PostOrder(Node *tmp);
    bool findx(int data);           // tim kiem Tree
    Node *MinNode(Node *tmp);

};

Node *BTS ::addNode(Node *node, int data)
{
    if (node == NULL) // tim den Node trong them Node
    {
        node = createNode(data);
        return node;
    }

    if (data < node->data)
    {
        node->left = addNode(node->left, data);
    }
    else
    {
        node->right = addNode(node->right, data);
    }
    return node;
}

Node *BTS ::del(Node *node, int data)
{
    if (node == NULL)
    {
        return node;
    }
    else if (data < node->data)
    {
        node->left = del(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = del(node->right, data);
    }
    else // da tim thay vi tri Node can xoa
    {
        if (node->right == NULL || node->left == NULL)
        {
            Node *tmp = NULL;
            if (node->right)
                tmp = node->right;
            else
                tmp = node->left;
            if (tmp == NULL) // ko co Con
            {
                tmp = node;
                node = NULL;
            }
            else // co 1 con
            {
                *node = *tmp;
            }
            delete (tmp);
        }
        else
        {   // Co 2 con
            // tim gia tri nho nhat cua cay con ben phai
            Node *minNode = node->right;
            while (minNode->left != NULL)
            {
                minNode = minNode->left;
            }
            node->data  = minNode->data; // gan data cua vi tri Node = minNode->data; roi xoa minNode;
            int val = minNode->data;
            node->right = del(node->right, val); 
        }
    }

    return node;
}

void BTS ::delx(int data)
{
    if (findx(data)){
        root = del(root, data);
        cout <<"Da xoa Node " << data << endl;
    }
    else
    {
        cout << "Ko tim thay phan tu de xoa!" << endl;
    }
}

void BTS ::insertx(int data)
{
    root = addNode(root, data); 
}

void BTS ::PreOrder(Node *tmp)
{
    if (tmp != NULL)
    {
        cout << tmp->data << " ";
        PreOrder(tmp->left);
        PreOrder(tmp->right);
    }
}

void BTS ::InOrder(Node *tmp)
{
    if (tmp != NULL)
    {
        InOrder(tmp->left);
        cout << tmp->data << " "<< endl;
        InOrder(tmp->right);
    }
}


void BTS ::PostOrder(Node *tmp)
{
    if (tmp != NULL)
    {
    	PostOrder(tmp->left);
        PostOrder(tmp->right);
        cout << tmp->data << " " << endl;
    }
}

// ham tim kiem node
bool BTS ::findx(int data)
{
    Node *parent = root;
    while (1)
    {
        if (parent == NULL || parent->data == data)
        {
            return parent; // tra ve false khi parent la nullptr;
        }
        if (data < parent->data)
        {
            parent = parent->left;
        }
        else
        {
            parent = parent->right;
        }
    }
}
Node *BTS :: MinNode(Node *tmp){
	Node *p = tmp->right;
	while(p ->left != NULL){
		p = p->left;
	}
	return p;
}

int main()
{
    BTS tree;
    tree.insertx(8);
    tree.insertx(3); 
    tree.insertx(5); 
    tree.insertx(2);
    tree.insertx(20); 
    tree.insertx(11); 
    tree.insertx(30); 
    tree.insertx(9); 
    tree.insertx(18); 
    tree.insertx(4);
	tree.PreOrder(tree.root);
	cout << endl;
	if(tree.findx(11)){
		cout <<"Da tim thay node 11" << endl;
	} 
	else{
		cout <<"Khong tim thay node 11" << endl;
	}
	cout <<endl;
	cout <<"them 1 vao cay" << endl;
	tree.insertx(1);
	tree.PreOrder(tree.root);
	cout << endl;
	cout << endl;
	cout <<"Xoa Node 3" << endl;
	tree.delx(3);
	tree.PreOrder(tree.root);
	cout << endl; 
	cout <<"Node con trai nhat cua cay con ben phai "<<endl;
	Node *tmp = tree.MinNode(tree.root);
	cout <<tmp->data << endl; 
}
