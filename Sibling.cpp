#include <bits/stdc++.h>
using namespace std;
 
struct Node 
{
    int data;
    Node *left, *right;
};
 
struct Node* newNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
 
    return (node);
}
 
bool checking(Node* root, int data_one,int data_two)
{
     
    if (root->left && root->right) 
	{
        int left = root->left->data;
        int right = root->right->data;
 
        if (left == data_one && right == data_two)
            return true;
        else if (left == data_two && right == data_one)
            return true;
    }
 
    if (root->left)
    {
    	 checking(root->left, data_one,data_two);
	}
       
 
    if (root->right)
    {
        checking(root->right, data_one,data_two);
	}
        
}
 
int main()
{
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
    
    cout << "ENTER THE NODE VALUES : ";
        
    int data_one;
    int data_two;
    	     
    cin >> data_one;
    cin >> data_two;
 
    if (checking(root, data_one, data_two))
        cout << "YES THEY ARE SIBLINGS !";
    else
        cout << "NO THEY ARE NOT SIBLINGS !";
 
    return 0;
}
