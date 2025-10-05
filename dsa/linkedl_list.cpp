#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        this->head = NULL;
        this->tail = NULL;
    }
    void push_front(int val) // O(1)
    {
        Node *newNode = new Node(val); // dynamic object
        if (this->head == NULL)
        {
            this->head = newNode;
            this->tail = newNode;
            return;
        }
        else
        {
            newNode->next = this->head;
            this->head = newNode;
        }
    }
    void print_list() // O(n)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void push_last(int val) // O(1)
    {
        Node *newNode = new Node(val);
        if (this->tail == NULL)
        {
            this->head = newNode;
            this->tail = newNode;
            return;
        }
        else
        {
            this->tail->next = newNode;
            this->tail = newNode;
        }
    }
    void pop_front() // O(1)
    {
        if (head != NULL)
        {
            Node *temp = this->head;
            this->head = this->head->next;
            temp->next = NULL;
            delete temp;
        }
    }
    void pop_back() // O(n)
    {
        if (tail != NULL)
        {
            Node *temp = this->head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    }
    void insert(int val, int position) // O(n)
    {
        if (position < 0)
        {
            return;
        }
        if (position == 0)
        {
            push_front(val);
            return;
        }
        Node *newNode = new Node(val);
        Node *temp = head;
        int count = 0;
        while (count < position - 1)
        {
            if (temp == NULL)
            {
                cout << "Invalid position";
                return;
            }
            temp = temp->next;
            count++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    int search(int val) // O(n)
    {
        Node *temp = head;
        int index = 1;
        while (temp != tail)
        {
            temp = temp->next;
            index++;
            if (temp->data == val)
            {
                return index;
            }
        }
        return -1;
    }
    void reverse_linkedlist() // O(n)
    {
        Node *cur_ptr = head;
        Node *next_ptr = NULL;
        Node *prev_ptr = NULL;
        while (cur_ptr != NULL)
        {
            // cout << "How many times it running" << endl;
            next_ptr = cur_ptr->next;
            cur_ptr->next = prev_ptr;
            prev_ptr = cur_ptr;
            cur_ptr = next_ptr;
        }
        tail = head;
        head = prev_ptr;
        // cout << head->next->data;
        cout << "Reverse completed successfully" << endl;
    }
};

int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.push_last(6);
    ll.push_last(7);
    ll.push_last(8);
    // ll.pop_front();
    // ll.pop_back();
    // ll.insert(10, 1);
    // cout << ll.search(1) << endl;
    // ll.print_list();
    ll.reverse_linkedlist();
    cout << endl;
    ll.print_list();

    return 0;
}