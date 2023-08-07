#include<iostream>
using namespace std;
class Node {
    public:
    int data;
   Node* next;
    // constructor
    Node(int data){
        this->data= data;
        this->next= NULL;
    }
    ~Node(){
   // meory free
    if(this->next!=NULL){
       delete next;
       this->next=NULL;
	}
}
    
};
void deleteatpos(Node* &head,int pos){
	if (pos==1){
		Node* temp=head;
		head=temp;
		temp->next=NULL;
		delete temp;
	}
	else{
		Node * crr=head;
		Node * pre=NULL;
		int cnt=1;
		while(cnt<=pos){
			pre=crr;
			crr=crr->next;
			cnt++;
		}
		pre->next=crr->next;
		crr->next=NULL;
		delete crr;
	}
}
void insertAttail(Node* &tail,int d){
	Node* temp =new Node(d);
	tail->next=temp;
	tail=tail->next;
}
void insertAtHead(Node* &head,int d){
    // new node create
   Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}
void print(Node* &head){
    Node*temp= head;
    while(temp!=NULL){
	cout << temp->data<<" ";
	temp=temp->next;
   }
    cout << endl;
}
void insertAtposition(Node*&tail,Node*&head,int pos,int d){
	Node* temp=head;
	int cnt=1;
	if (pos==1){
	insertAtHead(head,d);
	return;
	}
	while(cnt<pos){
		temp=temp->next;
		cnt++;
	}
	if(temp->next==NULL){
		insertAttail(tail,d);
		return;
	}
	Node *insert =new Node(d);
	insert->next=temp->next;
	temp->next=insert;	
}
void search(Node* &head,int num){
    Node*temp= head;
    while(temp!=NULL){
    	if(temp->data == num){
    		cout << temp->data <<"  data found"<<endl;
		}
		temp=temp->next;
	}
//	if(temp->data != num){
//	cout<<"data not found "<<endl;
}
int main(){
    // createdanew node
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;
    insertAttail(tail,12);
    insertAtHead(head,8);
    insertAttail(tail,15);
    insertAtposition(tail,head,2,11);
    print(head);
    deleteatpos(head,3);
    cout<<"Node after deletion"<<endl;
    print(head);
	search(head,15);
}
