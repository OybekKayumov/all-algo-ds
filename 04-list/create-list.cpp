struct ListNode
{
  int data;
  ListNode *next;
  ListNode(int _data)
      : data(_data), next(nullptr) {}
};

ListNode *node1 = new ListNode(1);
ListNode *node2 = new ListNode(2);
ListNode *node3 = new ListNode(3);

// node1->next = node2;
// node2->next = node3;

bool has_cycle(ListNode *node)
{
  ListNode *first = node;
  ListNode *second = node;
  while (true)
  {
    if (second->next != nullptr &&
        second->next->next != nullptr)
      second = second->next->next;
    else
      return false;
    first = first->next;
    if (first == second)
      break;
  }

  return true;
}