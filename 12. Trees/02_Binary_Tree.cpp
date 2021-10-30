#include <bits/stdc++.h>
using namespace std;

template <typename DataType>
class BTNode
{
public:
    DataType data;
    BTNode<DataType> *left;
    BTNode<DataType> *right;
    BTNode(DataType data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BTNode()
    {
        delete left;
        delete right;
    }
};

void printTree(BTNode<int> *root)
{
    if (root == NULL)
        return;
    cout << root->data << ": ";
    if (root->left != NULL)
        cout << "L " << root->left->data;

    if (root->right != NULL && root->left != NULL)
        cout << ", ";

    if (root->right != NULL)
        cout << "R " << root->right->data;
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}
void printTreeLevelWise(BTNode<int> *root)
{
    if (root == NULL)
        return;
    queue<BTNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BTNode<int> *frontNode = q.front();
        q.pop();
        cout << frontNode->data << ": ";
        if (frontNode->left != NULL)
        {
            cout << "L " << frontNode->left->data;
            q.push(frontNode->left);
        }
        if (frontNode->right != NULL && frontNode->left != NULL)
            cout << ", ";
        if (frontNode->right != NULL)
        {
            cout << "R " << frontNode->right->data;
            q.push(frontNode->right);
        }
        cout << endl;
    }
}
void printInOrderTraversal(BTNode<int> *root)
{
    if (root == NULL)
        return;
    printInOrderTraversal(root->left);
    cout << root->data << " ";
    printInOrderTraversal(root->right);
}

BTNode<int> *takeInputRecursively()
{
    int rootData;
    cout << "Enter the root data: ";
    cin >> rootData;
    if (rootData == -1)
        return NULL;
    BTNode<int> *root = new BTNode<int>(rootData);
    root->left = takeInputRecursively();
    root->right = takeInputRecursively();
    return root;
}
BTNode<int> *takeInputLevelWise()
{
    int rootData;
    queue<BTNode<int> *> q;
    cout << "Enter root data: ";
    cin >> rootData;
    BTNode<int> *root = new BTNode<int>(rootData);
    q.push(root);

    while (!q.empty())
    {
        BTNode<int> *frontNode = q.front();
        q.pop();
        int nodeDataLeft, nodeDataRight;
        // For left node
        cout << "Enter Left child data of " << frontNode->data << ": ";
        cin >> nodeDataLeft;
        if (nodeDataLeft != -1)
        {
            BTNode<int> *node = new BTNode<int>(nodeDataLeft); // <- Create Node
            q.push(node);                                      // <- Push Node to queue
            frontNode->left = node;                            // <- Conecting Node
        }
        else
        {
            frontNode->left = NULL; // <- Conecting Node
        }
        // For right node
        cout << "Enter Right child data of " << frontNode->data << ": ";
        cin >> nodeDataRight;
        if (nodeDataRight != -1)
        {
            BTNode<int> *node = new BTNode<int>(nodeDataRight); // <- Create Node
            q.push(node);                                       // <- Push Node to queue
            frontNode->right = node;                            // <- Conecting Node
        }
        else
        {
            frontNode->right = NULL; // <- Conecting Node
        }
    }
    return root;
}
int countNodes(BTNode<int> *root)
{
    if (root == NULL)
        return 0;
    return countNodes(root->left) + countNodes(root->right) + 1;
}
int maxDepth(BTNode<int> *root)
{
    if (root == NULL)
        return 0;
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}

bool searchKeyInTree(BTNode<int> *root, int key)
{
    if (root == NULL)
        return false;
    if (root->data == key)
        return true;
    return searchKeyInTree(root->left, key) || searchKeyInTree(root->right, key);
}
int minValue(BTNode<int> *root)
{
    if (root == NULL)
        return INT_MAX;
    return min(root->data, min(minValue(root->left), minValue(root->right)));
}
int maxValue(BTNode<int> *root)
{
    if (root == NULL)
        return INT_MIN;
    return max(root->data, max(maxValue(root->left), maxValue(root->right)));
}
int countLeafNodes(BTNode<int> *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

bool getPath(BTNode<int> *root, int key, vector<int> &ans)
{
    if (root == NULL)
        return false;
    if (root->data == key)
    {
        ans.push_back(root->data);
        return true;
    }
    bool left = getPath(root->left, key, ans);
    bool right = getPath(root->right, key, ans);
    if (left || right)
    {
        ans.push_back(root->data);
        return true;
    }
    return false;
}

// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main()
{
    BTNode<int> *root = takeInputLevelWise();
    cout << endl;
    printTreeLevelWise(root);
    cout << endl;
    cout << "InOrder Traversal: ";
    printInOrderTraversal(root);
    cout << endl;
    cout << "Enter the key to search in binary tree: " << endl;
    int searchKey = 2;
    // cin >> searchKey;
    string searchAns = searchKeyInTree(root, searchKey) ? "Your Key is found." : "Key not found.";
    cout << searchAns << endl;
    cout << "Minimum Value: " << minValue(root) << endl;
    cout << "Maximum Value: " << maxValue(root) << endl;
    cout << "Total number of leaf node: " << countLeafNodes(root) << endl;

    vector<int> pathToRootFromNode;
    bool isPresent = getPath(root, 1, pathToRootFromNode);
    if (isPresent)
    {
        for (int i = pathToRootFromNode.size() - 1; i >= 0; i--)
        {
            if (i == 0)
            {
                cout << pathToRootFromNode[i] << endl;
                break;
            }
            cout << pathToRootFromNode[i] << " --> ";
        }
    }
    else
    {
        cout << "No Path Found.";
    }
    return 0;
}