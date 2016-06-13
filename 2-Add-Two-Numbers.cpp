/*
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
 	ListNode *newNode=new ListNode(0); ListNode *tempNode;
		tempNode = newNode; int total=0; int score = 0;
		while (l1 != nullptr||l2 != nullptr)
		{
			total = score;
			if (l1 != nullptr)
			{
				total += l1->val;
				l1 = l1->next;
			}
			if (l2 != nullptr)
			{
				total += l2->val;
				l2 = l2->next;
			}
			tempNode->val = total;
			if (tempNode->val >= 10)
			{
				tempNode->val -= 10;
				score = 1;
			}
			else
				score = 0;
			if ((l1 != nullptr||l2 != nullptr)||score==1)
			{
				tempNode->next = new ListNode(score);
				tempNode = tempNode->next;
			}
		}
		return newNode;
    }
};
