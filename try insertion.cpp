#include<iostream>
using namespace std;
struct node{
    int info;
	struct node *next;
}*start = NULL;
void insert(){
	int item;
	cout<<"\nEnter Data\n";
	cin>>item;
	struct node *n = new node;
	n->info = item;
	n->next = NULL;
	start = n;
}
void display(){
	struct node *ptr = start;
	while(ptr-> next != NULL){
		cout<<ptr->info<<"\t";
		ptr = ptr->next;
	}
}
int main(){
    int choice= 1; 
    while((choice > 0) && (choice < 3)){
		
		cout<<"\n1. Insertion \n2. Display\n";
		cin>>choice;
		switch(choice){
			case 1:
				insert();	
				break;
			case 2:
				display();
				break;
			default:
				cout<<"\nWrong choice..exiting..";
			}
	}
}