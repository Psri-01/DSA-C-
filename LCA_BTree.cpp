#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
    }
};
pair <bool,int> ancestor(node *curr, int &x, int y)
{
    if (curr == NULL)
    {
        pair <bool, int> p(false, 0);
        return p;
    }
    pair <bool, int> a = ancestor(curr->left, x, y);
    pair <bool, int> b = ancestor(curr->right, x, y);
    if (x == -1)
    {
        pair <bool, int> p(false, 0);
        return p;
    }
    if (curr->data == x )
    {
        if (a.first == true || b.first == true)
        {
            cout<<curr->data<<endl;
            pair <bool, int> p(false, 0);
            x = -1;
            return p;
        }
        pair <bool, int> r1(true, x);
        return r1;
    }
    if (curr->data == y)
    {
        if (a.first == true || b.first == true)
        {
            cout<<curr->data<<endl;
            pair <bool, int> p(false, 0);
            x = -1;
            return p;
        }
        pair <bool, int> r2(true, y);
        return r2;
    }
    if (a.first == true && a.second == x && b.first == true && b.second == y)
    {
        cout << curr->data << endl;
        x = -1;
        pair <bool, int> p(false, 0);
        return p;
    }
    else if(a.first == true && a.second == y && b.first == true && b.second == x)
    {
        cout << curr->data << endl;
        x = -1;
        pair <bool, int> p(false, 0);
        return p;
    }
    if (a.first == true)
    return a;
    if (b.first == true)
    return b;
    pair <bool, int> p(false, 0);
     return p;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
  
    int a = 2, b =5;
    ancestor(root, a, b);
    return 0;
}
