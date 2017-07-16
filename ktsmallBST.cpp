#include<iostream>
using namespace std;
struct Tree
{
    struct Tree* left;
    struct Tree* right;
    int val;
    Tree(int);
    ~Tree();
    void Print();
};
Tree::Tree(int val)
{
    this->val = val;
    cout<<"insert l/r for node: "<<this->val<<" , type 0 0 - exit"<<endl;
    int l,r;
    cin>>l>>r;
    if(l and r)
    {
        this->left = new Tree(l);
        this->right = new Tree(r);
    }
    else if(l==0 and r==0)
    {
        this->left = NULL;
        this->right = NULL;
        return;
    }
}
Tree::~Tree()
{
    delete left;
    delete right;
}
void Tree::Print()
{
    if(this == NULL) return;
    cout<<this->val<<endl;
    this->left->Print();
    this->right->Print();
}
int main()
{
    int n;
    cin>>n;
    Tree* newT = new Tree(n);
    newT->Print();
    delete newT;
    //newT->Print();
    return 0;
}
