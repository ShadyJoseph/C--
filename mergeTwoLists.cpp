using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode dummy(0); // Dummy node to simplify merging
    ListNode *tail = &dummy;

    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            tail->next = list1;  // Attach smaller node
            list1 = list1->next; // Move pointer
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next; // Move the tail
    }

    // If any list remains, attach it
    tail->next = list1 ? list1 : list2;

    return dummy.next; // Return merged list head
}
