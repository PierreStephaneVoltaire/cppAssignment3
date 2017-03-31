
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <array>
using namespace std;
class BinarySearchTree
{
private:
    struct tree_node
    {
        tree_node* left;
        tree_node* right;
        int data;
    };
    tree_node* root;

public:
    BinarySearchTree()
    {
        root = NULL;
    }

    bool isEmpty() const { return root==NULL; }
    int search(int,int);
    void insert(int);

};
void BinarySearchTree::insert(int d)
{tree_node* t = new tree_node;
tree_node* parent;
t->data = d;
t->left = NULL;
t->right = NULL;
parent = NULL;

// is this a new tree?
if(isEmpty()) {root = t;}
else
{
    //Note: ALL insertions are as leaf nodes
    tree_node* curr;
    curr = root;
    // Find the Node's parent
    while(curr)
    {
        parent = curr;
        if(t->data > curr->data) {curr = curr->right;}
        else {curr = curr->left;}
    }
    //put it at left or right depending on it's size
    if(t->data < parent->data){
        parent->left = t;}
        else{
            parent->right = t;}
        }
    }
    int BinarySearchTree::search(int d,int comp)
    {

        if(isEmpty())
        {
            cout<<" This Tree is empty! "<<endl;
            return 0;
        }

        tree_node* curr;
        tree_node* parent;
        curr = root;

        while(curr != NULL)
        {
            if(curr->data == d)
            {
                comp+=1;
                break;
            }
            else
            {comp+=1;
            parent = curr;
            if(d>curr->data) {curr = curr->right;}
            else {curr = curr->left;}
        }
    }
    return comp;
}
int main(int argc, char* argv[])
{
    BinarySearchTree b;
   
	array<int, 100> arr;
    ifstream fin("integers.txt");
    string line;
    while (getline(fin, line)) {
        int index=0;
        if (index<arr.size())
        {
            arr[index]=atoi(line.c_str());
			int temp = arr[index];
            b.insert(temp);
        }
        index++;
    }

    int y=0;
	array<int, 10> input{ 90,49,100,30,75,79,25,5,15,55 };

    for(int k=0;k<input.size();k++)
    {
		int num = input[k];
        std::cout <<"BST "<<num <<"->"<<b.search(num, 0)<< "\n";
        for (int i = 0; i <arr.size(); ++i)
        {
            if(num==arr[i]){
                y++;
                std::cout <<"Arr "<<num <<"->"<<y<< "\n";
                y=0;}
                else{y++;}
            }
        }
	system("pause");
        return 0;
    }
