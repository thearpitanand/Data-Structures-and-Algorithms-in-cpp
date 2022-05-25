#include <bits/stdc++.h>
using namespace std;

template <typename Datatype>
class TreeNode
{
public:
    Datatype data;
    vector<TreeNode<Datatype> *> children;
    TreeNode(Datatype val)
    {
        this->data = val;
    }
    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

void printTree(TreeNode<int> *root)
{
    if (root == NULL)
        return;
    cout << root->data << " : ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ", ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}
void preOrderTraversalOfTree(TreeNode<int> *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++)
    {
        preOrderTraversalOfTree(root->children[i]);
    }
}
void PostOrderTraversalOfTree(TreeNode<int> *root)
{
    if (root == NULL)
        return;
    for (int i = 0; i < root->children.size(); i++)
    {
        PostOrderTraversalOfTree(root->children[i]);
    }
    cout << root->data << " ";
}
void printTreeLevelWise(TreeNode<int> *root)
{
    if (root == NULL)
        return;
    queue<TreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode<int> *frontNode = q.front();
        q.pop();
        cout << frontNode->data << ": ";
        for (int i = 0; i < frontNode->children.size(); i++)
        {
            cout << frontNode->children[i]->data << ", ";
            q.push(frontNode->children[i]); // <- Push Node to queue
        }
        cout << endl;
    }
}

TreeNode<int> *takeInput()
{
    int data, numberOfChildren;
    cout << "Enter The Number: ";
    cin >> data;
    TreeNode<int> *root = new TreeNode<int>(data);
    cout << "Enter the number of children of " << data << " : ";
    cin >> numberOfChildren;
    for (int i = 0; i < numberOfChildren; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}
TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    queue<TreeNode<int> *> q;
    cout << "Enter root data: ";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    q.push(root);

    while (!q.empty())
    {
        TreeNode<int> *frontNode = q.front();
        q.pop();
        int numberOfChild;
        cout << "How many childrens are there in " << frontNode->data << " : ";
        cin >> numberOfChild;
        for (int i = 1; i <= numberOfChild; i++)
        {
            int nodeData;
            cout << "Enter the value of " << i << " th child of " << frontNode->data << " : ";
            cin >> nodeData;
            TreeNode<int> *node = new TreeNode<int>(nodeData); // <- Create Node
            q.push(node);                                      // <- Push Node to queue
            frontNode->children.push_back(node);               // <- Conecting Node
        }
    }
    return root;
}

int countNode(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int ans = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += countNode(root->children[i]);
    }
    return ans;
}

int heightOfTree(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int mx = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        mx = max(mx, heightOfTree(root->children[i]));
    }
    return mx + 1;
}
void printNodeatCertainLevel(TreeNode<int> *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        printNodeatCertainLevel(root->children[i], k - 1);
    }
}
int countLeafNode(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int ans = 0;
    if (root->children.size() == 0)
    {
        return 1;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += countLeafNode(root->children[i]);
    }
    return ans;
}
void deleteTree(TreeNode<int> *root)
{
    if (root == NULL)
        return;
    for (int i = 0; i < root->children.size(); i++)
    {
        deleteTree(root->children[i]);
    }
    delete root;
}
// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    int levelPrintNumber;
    cout << endl;
    printTreeLevelWise(root);
    cout << "Number Of Nodes: " << countNode(root) << endl;
    cout << "Number Of Leaf Nodes: " << countLeafNode(root) << endl;
    cout << "Height of Tree: " << heightOfTree(root) << endl;
    cout << "Enter the Level to get all data at that level: ";
    cin >> levelPrintNumber;
    cout << "Data at level " << levelPrintNumber << ": ";
    printNodeatCertainLevel(root, levelPrintNumber);
    cout << endl;
    cout << "Pre - Order Traversal: ";
    preOrderTraversalOfTree(root);
    cout << endl;
    cout << "Post - Order Traversal: ";
    PostOrderTraversalOfTree(root);
    cout << endl;
    // deleteTree(root);
    delete root; // <- Using Destructor
    return 0;
}