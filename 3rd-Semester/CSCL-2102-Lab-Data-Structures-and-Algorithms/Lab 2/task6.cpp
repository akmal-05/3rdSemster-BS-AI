#include <iostream>
using namespace std;

class Node{
	private:
		
	public:
		int data;
		Node* next;
		
void createNode(int val){
	Node* temp = new Node;
	temp->data=val;
	temp->next=NULL;
	if (next==NULL){
	next->next=temp;
		next=temp;
	}
	 
}
};

int main(){
	
	return 0;
}
