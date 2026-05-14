#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* lista = headA;
        ListNode* listb = headB;

        while (lista != listb) {
            if (lista == NULL)
                lista = headB;
            else
                lista = lista->next;

            if (listb == NULL)
                listb = headA;
            else
                listb = listb->next;
        }

        return lista;
    }
};

int main() {
    ListNode* common = new ListNode(8);
    common->next = new ListNode(10);

    ListNode* headA = new ListNode(3);
    headA->next = new ListNode(7);
    headA->next->next = common;

    ListNode* headB = new ListNode(99);
    headB->next = new ListNode(1);
    headB->next->next = common;

    Solution obj;
    ListNode* ans = obj.getIntersectionNode(headA, headB);

    if (ans != NULL)
        cout << "Intersection at node with value: " << ans->val << endl;
    else
        cout << "No intersection" << endl;

    return 0;
}

/*
Approach:
1. We use two pointers, lista and listb.
2. lista starts from headA and listb starts from headB.
3. Move both pointers one step at a time.
4. When lista becomes NULL, move it to headB.
5. When listb becomes NULL, move it to headA.
6. In this way, both pointers travel equal total distance.
7. If the two linked lists intersect, both pointers will meet at the intersection node.
8. If they do not intersect, both pointers will become NULL at the same time.

How we did it:
- We created two linked lists.
- Both lists share a common part: 8 -> 10.
- So the intersection node is the node with value 8.

Result:
- The function returns the intersection node.
- The output is: Intersection at node with value: 8

Time Complexity:
- O(m + n)

Space Complexity:
- O(1)
*/
