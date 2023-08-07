#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
		~Node(){
			if(this->next!=NULL) {
				delete next;
				this->next=NULL;
}		
		}
};
void insert(Node * &head , int d){
	Node *temp=new Node(d);
	temp->next=head;
	head= temp;
}

void print(Node* &head){
	Node * temp=head;
	while(temp->next !=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void inserttail(Node * &tail,int d){
	Node *temp=new Node(d);
	tail->next=temp;
	tail=tail->next;
}
void insertatpos(Node* &head,Node* &tail){
	int pos,d;
	cout<<"enter the pos and the value"<<endl;
	cin>>pos;
	cin>>d;
	Node* temp=head;
	int c=0;
	while(c<=pos-1){
		temp->next;
		c+=1;
	}
	Node * Nodetoadd=new Node(d);
	Nodetoadd->next=temp->next;
	temp->next=Nodetoadd;
	if(pos==1){
		insert(head,d);
	}
	else{
		inserttail(tail,d);
	}
}

void deletenode(Node * &head){
	int pos;
	cout<<"enter pos to delete"<<endl;
	cin>>pos;
	if (pos ==1){
		Node*temp=head;
		head=head->next;
		temp->next=NULL;
		delete temp;		
	}
	else{
		Node * curr=head;
		Node *pre =NULL;
		int c=0;
		while(c<pos-1){
			pre=curr;
			curr=curr->next;
			c+=1;
		}
		pre->next=curr->next;
		curr->next=NULL;
		delete curr;
	}
}

int main(){
	Node * Node1=new Node(10);
	Node * head= Node1;
	Node * tail= Node1;
	inserttail(tail,8);
	inserttail(tail,5);
	insert(head,15);
	insert(head,20);
	insert(head,30);
	print(head);
	insertatpos(head,tail);
	print(head);
	deletenode(head);
	print(head);
}
