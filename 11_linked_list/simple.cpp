#include <bits/stdc++.h>
#include <cstddef>
using namespace std;


class Node {
    public: 
        int data;
        Node* next;

        Node() {
            this->data = 0;
            this->next = NULL;
        }
        Node(int data, Node* next) {
            this->data = data;
            this->next = next;
        }
};

void print_data (Node * head) {
    Node * current = head;
    while (current != NULL) {
        cout << current->data << endl;
        current = current->next;
    }
}

Node* add_at_end(Node* head, int val) {
    if (head == NULL) {
        head = new Node(val, NULL);
        return head;
    }
    Node* ptr = head;
    
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = new Node(val, NULL);
    return head;
}
Node* add_at_beginning(Node*head, int val) {
    if (head == NULL) {
        head = new Node(val, NULL);
        return head;
    }

    head = new Node(val, head);
    return head;
}

int main() {
    Node* linked_list = new Node(0, NULL);
    linked_list = add_at_end(linked_list, 10);
    linked_list = add_at_end(linked_list, 20);
    linked_list = add_at_end(linked_list, 30);
    linked_list = add_at_end(linked_list, 40);
    print_data(linked_list);
    cout<< endl;
    linked_list = add_at_beginning(linked_list, 50);
    print_data(linked_list);
    
    return 0;
}