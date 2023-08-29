#include <iostream>
using namespace std;

struct node {
    int info;
    struct node *next, *prev;
};

struct node *first = NULL, *last = NULL;

void append(int item) {
    struct node *n = new node;
    n->info = item;
    n->next = NULL;
    if (first == NULL) {
        n->prev = NULL;
        first = n;
        last = n;
    } else {
        n->prev = last;
        last->next = n;
        last = n;
    }
}

void display() {
    struct node *current = first;
    while (current != NULL) {
        cout << current->info << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int n, item;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> item;
        append(item);
    }
    cout << "Linked List: ";
    display();
    return 0;
}
































    