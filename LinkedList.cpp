
#include <iostream>
using namespace std;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Node Class
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

class Node
{
    int data;   // candy
    Node *next; // next house
    Node();
    Node(int);
    Node(int item, Node *n);
    friend class LL;
};

Node::Node() : next(nullptr) {}
Node::Node(int item) : data(item), next(nullptr) {}
Node::Node(int item, Node *n) : data(item), next(n) {}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Linked List Class (Scavenger Hunt)
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class LL
{
    Node *head;

public:
    LL();
    void Insert(int item);
    void InsertEnd(int item);
    void Print() const;
};

// LL
LL::LL() : head(nullptr) {}

// Insert
void LL::Insert(int item)
{
    // Insert at the head of the list
    head = new Node(item, head);
}

// InsertEnd
void LL::InsertEnd(int item)
{
    if (head == nullptr)
    {
        head = new Node(item);
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new Node(item);
    }
}

// Print
void LL::Print() const
{
    // start at the beginning
    Node *temp = head;
    // while not at the end
    while (temp != nullptr)
    {
        // print current
        cout << (*temp).data << endl;
        // go to next house
        temp = (*temp).next;
    }
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main()
{
    LL l;

    // InsertEnd 20
    l.InsertEnd(20);
    l.Print();
    cout << endl;

    // InsertEnd 40
    l.InsertEnd(40);
    l.Print();
    cout << endl;

    // InsertEnd 60
    l.InsertEnd(60);
    l.Print();
    cout << endl;

    return 0;
}
