#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

// create node
node *createnode(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// insert node
node *insert(node *root, int value)
{
    if (root == NULL)
    {
        return createnode(value);
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }

    if (value > root->data)
    {
        root->right = insert(root->right, value);
    }

    return root;
}

node *search(node *root, int key)
{
    if (root == NULL || root->data == key)
    {
        return root;
    }

    if (key < root->data)
    {
        return root->left = search(root->left, key);
    }
    else
    {
        return root->right = search(root->right, key);
    }
}

int main()
{
    node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    int key = 40;
    node *result = search(root, key);

    if (result != NULL)
    {
        cout << "key " << key << " found in BST" << endl;
    }
    else
    {
        cout << "key " << key << " not found in BST" << endl;
    }

    return 0;
}