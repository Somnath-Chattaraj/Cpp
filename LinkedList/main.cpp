#include <iostream>

using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val) {
    node* n = new node(val);

    if (head == NULL) {
        head = n;
    } else {
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void display(node* head) {
    int size = 0;
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
        size++;
    }
    cout <<"NULL"<< endl;
    cout << size << endl;
}

void deleteAtLast(node* head) {
    node* temp = head;

    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    temp->next = NULL;
    delete(temp->next);
}

void deleteKelement(node* &head, int k) {
    // Check if the list is empty
    if (head == nullptr) {
        return;
    }

    // Special case: if the head itself is the node to be deleted
    if (head->data == k) {
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Find the node before the one to be deleted
    node* prev = head;
    while (prev->next != nullptr && prev->next->data != k) {
        prev = prev->next;
    }

    // If the node to be deleted is not found
    if (prev->next == nullptr) {
        return;
    }

    // Delete the node
    node* temp = prev->next;
    prev->next = temp->next;
    delete temp;
}


void deleteKelement1(node* &head, int k) {
    if (head == nullptr) {
        return;
    }

    if (head->data == k) {
        node* temp = head;
        head = head->next;
        delete(temp);
        return;
    }

    node* prev = head;
    while (prev->next != nullptr && prev->next->data != k)
    {
        prev = prev->next;
    }
     
    

    if (prev->next == nullptr) {
        return;
    }

    node* temp = prev->next;
    prev->next = temp->next;
    delete(temp);

    
}

void search(node* &head, int k) {

    node* temp = head;
    if (head == nullptr) {
        return;
    }

    int index = 0;
    while (temp != NULL && temp->data != k ) {
        temp = temp->next;
        index++;
    }

    if (temp == NULL) {
        cout << "Item not found!" << endl;
        return;
    }

    cout << "The index is: " << index << endl;

}
int main() {
    // node* head = NULL;

    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);

    // // display(head);
    // // deleteAtLast(head);
    // // deleteKelement1(head,2);
    // display(head);
    // search(head, 1);
    // search(head, 0);
    // search(head, 4);

    cout << stoi("1") + stoi("2") << endl;

    return 0;
}
