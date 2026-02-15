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
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}
node *postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

node *inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

node *preorder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
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
    cout << "inorder: \n";

    inorder(root);
    cout << "\npreorder: \n";
    preorder(root);
    cout << "\n postorder \n";
    postorder(root);

    return 0;
}