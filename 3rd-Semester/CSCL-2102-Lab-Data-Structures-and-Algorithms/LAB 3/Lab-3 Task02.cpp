#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};
Node* top =NULL;
//
void push(int value){
	Node* newNode= new Node;
	newNode->data=value;
	newNode->next= top;
	
	top=newNode;
}
//
void pop(){
	if (top==NULL){
		cout<<"Emppty Stack"<<endl;
		return;
	}
	Node* temp = top;
	cout<<"Removed: "<<top->data<<endl;
	top=top->next;
	delete temp;
}
//
void display(){
	if (top==NULL){
		cout<<"Empty Stack"<<endl;
		return;
	}
	Node* temp=top;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	push(10);
	push(20);
	push(30);

	cout<<"Stack: ";
	display();

	pop();

	cout<<"Stack: ";
	display();

	return 0;

}
