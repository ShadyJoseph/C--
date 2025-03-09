using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head)
{
   if(!head || !head->next)return false;
   ListNode *fast=head;
   ListNode *slow=head;
   while (fast&&fast->next!=nullptr)
   {
    fast=fast->next->next;
    slow=slow->next;
    if(slow==fast)return true;
   }
    return false; // No cycle
}
