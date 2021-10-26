// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *ptrOne = head;
        ListNode *ptrTwo = head;
        for (int i = 0; i < n; i++)
        {
            ptrTwo = ptrTwo->next;
        }

        if (ptrTwo == NULL) // <- length of Linked List = n => Delete first node
        {
            ListNode *headNode = ptrOne->next;
            delete ptrOne;
            return headNode;
        }

        while (ptrTwo->next != NULL)
        {
            ptrOne = ptrOne->next;
            ptrTwo = ptrTwo->next;
        }

        // Deleting nth Node
        ListNode *delNode = ptrOne->next;
        ptrOne->next = delNode->next;
        delete delNode;
        return head;
    }
};