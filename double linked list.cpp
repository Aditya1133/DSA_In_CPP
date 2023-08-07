#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node* prev;
		//constructor
		Node(int d){
			this->data=d;
			this->next= NULL;
			this->prev= NULL;
		}
		~Node(){
    	if(next!=NULL){
       		delete next;
       		next=NULL;
			}
		}
};
void deleteNode(int position,Node* &head){
    // deleting first or start node
    if(position==1){
	Node* temp= head;
    temp->next->data=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;
    }
    else{
	// deleting any middle node or last node
    Node*curr=head;
    Node*prev=NULL;
    int cnt=1;
    while(cnt<=position){
	prev=curr;
    curr=curr->next;
    cnt ++;
	}
    curr->prev=NULL;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    }
}
void print(Node* &head){
	Node * temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void getlength(Node* &head){
	Node * temp=head;
	int len=0;
	while(temp!=NULL){
		len++;
		temp=temp->next;
	}
	cout<<"the lenght of the list  "<<len<<endl;
}
void insertatHead(Node* &head,int d){
	Node * temp=new Node(d);
	temp->next=head;
	head->prev=temp;
	head=temp;
}
void insertattail(Node* &tail,int d){
	Node *temp=new Node(d);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
}
void insertatpos(Node* &head,Node* &tail,int pos,int d){
	if(pos==1){
		insertatHead(head,d);
		return;
	}
	int cnt=1;
	Node*temp=head;
	while(cnt<pos-1){
		temp=temp->next;
		cnt++;
	}
	if(temp->next==NULL){
		insertattail(tail,d);
		return;
	}
	Node* nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next->prev=nodetoinsert;
	temp->next=nodetoinsert;
	nodetoinsert->prev=temp;
	
}

int main(){
	Node * node1=new Node(10);
	Node*head=node1;
	Node*tail=node1;
	insertatHead(head,30);
	insertattail(tail,20);
	insertatpos(head,tail,2,50);
	getlength(head);
	cout<<"print the linked list "<<endl;
	print(head);
	deleteNode(2,head); 
	cout<<"the Link list after deletion"<<endl;
	print(head);
	return 0;	
}
