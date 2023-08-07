#include<iostream>
using namespace std;
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[100]; 
	int n;
	cout<<"enter the size for the array"<<endl;
	cin>>n;
	for(int i=0; i<n;i++){
		arr[i]=1;
	}
	print(arr,n);
}
