#include<iostream>
using namespace std;

struct node {
    int info;
    struct node *prev;
    struct node *next;
};

struct node *first = NULL;  
struct node *last = NULL;

int remove(int pos) {
    struct node *ptr = first; int count = 0;
    while ((ptr != NULL) && (count!=pos))
        ptr = ptr->next; count++;
    
    if (ptr == NULL) {
        cout << "Element not found";
        return 0;  
    }
    
    if ((ptr == first) && (ptr == last)) {
        first = NULL;
        last = NULL;
    }
    else if (ptr == first) {
        first = first->next;
        first->prev = NULL;
    }
    else if (ptr == last) {
        last = last->prev;
        last->next = NULL;
    }
    else {
        ptr->prev->next = ptr->next;
        ptr->next->prev = ptr->prev;
    }
    
    int removedValue = ptr->info;
    delete ptr;
    return removedValue; 
}

void insert(int item) {
    struct node *newNode = new node;
    newNode->info = item;
    newNode->prev = NULL;
    newNode->next = NULL;
    
    if (first == NULL) {
        first = newNode;
        last = newNode;
    } 
    else {
        last->next = newNode;
        newNode->prev = last;
        last = newNode;
    }
}

int main() {
    insert(5);
    insert(10);
    insert(15);
    
    cout << "Doubly Linked List: ";
    struct node *current = first;
    while (current != NULL) {
        cout << current->info << " ";
        current = current->next;
    }
    cout << endl;
    
    int removedValue = remove(10);
    if (removedValue != 0) {
        cout << "Removed value: " << removedValue << endl;
    }
    
    cout << "Doubly Linked List after removal: ";
    current = first;
    while (current != NULL) {
        cout << current->info << " ";
        current = current->next;
    }
    cout << endl;
    
    return 0;
}







