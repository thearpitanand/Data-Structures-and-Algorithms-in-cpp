#include <bits/stdc++.h>
using namespace std;

template <typename Datatype>
class TreeNode
{
public:
    Datatype data;
    vector<TreeNode<Datatype> *> childred;
    TreeNode(Datatype val)
    {
        this->data = val;
    }
};

void printTree(TreeNode<int> *root)
{
    if (root == NULL)
        return;
    cout << root->data << " : ";
    for (int i = 0; i < root->childred.size(); i++)
    {
        cout << root->childred[i]->data << ", ";
    }
    cout << endl;
    for (int i = 0; i < root->childred.size(); i++)
    {
        printTree(root->childred[i]);
    }
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
        for (int i = 0; i < frontNode->childred.size(); i++)
        {
            cout << frontNode->childred[i]->data << ", ";
            q.push(frontNode->childred[i]); // <- Push Node to queue
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
        root->childred.push_back(child);
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
            frontNode->childred.push_back(node);               // <- Conecting Node
        }
    }
    return root;
}

int countNode(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int ans = 1;
    for (int i = 0; i < root->childred.size(); i++)
    {
        ans += countNode(root->childred[i]);
    }
    return ans;
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    printTreeLevelWise(root);
    cout << "Number Of Nodes: " << countNode(root) << endl;
    return 0;
}