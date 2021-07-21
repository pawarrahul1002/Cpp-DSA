#include <iostream>
using namespace std;

// time complexity will be O(max(n1,n2)) and space complexity will be O(sumation(n))
struct Listnode
{
    int val;
    Listnode *next;
    Listnode() : val(0), next(nullptr){};
    Listnode(int x) : val(x), next(nullptr){};
    Listnode(int x, Listnode *next) : val(x), next(next){};
};

Listnode *AddTwoNumbers(Listnode *l1, Listnode *l2)
{
    Listnode *dummy = new Listnode();
    Listnode *temp = dummy;
    int carry = 0;
    while (l1 != NULL || l2 != NULL || carry != 0)
    {
        int sum = 0;
        if (l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }

        sum += carry;
        carry = sum / 10;
        Listnode *node = new Listnode(sum % 10);
        temp->next = node;
        temp = temp->next;
    }
    return dummy->next;
}

