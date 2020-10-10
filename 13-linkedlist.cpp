#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int v) {
        data = v;
    }
};

class LinkedList {
public:
    Node *tailInsert(Node *head, int data) {
        if (head == NULL) head = new Node(data);
        else {
            Node *curr = head;
            while(curr -> next) curr = curr->next;
            curr->next = new Node(data); //尾插法
        }
        return head;
    }

    Node *headInsert(Node *head, int data) {
        if (head == NULL) head = new Node(data);
        else {
            Node *tmp = new Node(data);
            tmp -> next = head -> next;
            head -> next = tmp;
        }
        return head;
    }

    void display(Node * head) {
        Node *start = head;
        while(start) {
            cout << start -> data << " ";
            start = start -> next;
        }
        cout << endl;
    }
};

int main() {
    Node *head = NULL;
    LinkedList myList;
    int T, data;
    cin >> T;
    while(T-- > 0) {
        cin >> data;
        // head = myList.headInsert(head, data);
        head = myList.tailInsert(head, data);
    }
    myList.display(head);
}