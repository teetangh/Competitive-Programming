// Includes
#include <iostream>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>

// Policy Based Data Structures
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;

// Defines
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}

    void printList(ListNode *head)
    {
        ListNode *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ListNode *insertNode(ListNode *head, int x)
    {
        ListNode *temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = new ListNode(x);
    }

    ListNode *removeOccurences(ListNode *head, int key)
    {
        ListNode *temp = head;
        ListNode *prev = NULL;
        while (temp != NULL)
        {
            if (temp->val == key)
            {
                if (prev == NULL)
                {
                    head = temp->next;
                    temp = head;
                }
                else
                {
                    prev->next = temp->next;
                    temp = prev->next;
                }
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }

    ListNode *reverseLinkedList(ListNode *head)
    {
        // add your logic here

        if (head == NULL || head->next == NULL)
            return head;

        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *Next = NULL;

        while (curr != NULL)
        {

            Next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = Next;
        }

        return prev;
    }
};