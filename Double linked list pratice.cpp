#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
		Node*pre;
		Node(int data){
			this->data=data;
			this->next=NULL;
			this->pre=NULL;
		}
// 		~Node(){
// 			if(this->next!=NULL) {
// 				delete next;
// 				this->next=NULL;
// }		
// 		}
};
void insert(Node * &head , int d){
	Node *temp=new Node(d);
	temp->next=head;
	head->pre=temp;
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
	temp->pre=tail;
	tail=temp;
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
	temp->next->pre=Nodetoadd;
	temp->next=Nodetoadd;
	Nodetoadd->pre=temp;
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
		head->pre=NULL;
		temp->next=NULL;
		delete temp;		
	}
	else{
		Node * curr=head;
		Node *prev =NULL;
		int c=0;
		while(c<pos-1){
			prev=curr;
			curr=curr->next;
			c+=1;
		}
	    prev->next=curr->next;
	    if(curr->next!=NULL){
	        curr->next->pre=prev;
	    }
	    curr->next=NULL;
	    curr->pre=NULL;
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
