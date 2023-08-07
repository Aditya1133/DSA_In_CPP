#include<iostream>
using namespace std;
void print(int arr[],int n){
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void reverse(int arr[],int n){
	int start=0;
	int end=n-1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	cout<<"array reverse"<<endl;
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
 int main(){
 	int arr[20];
 	int n;
 	cout<<"enter the length of the array"<<endl;
 	cin>>n;
 	cout<<"enter the Array"<<endl;
 	for (int i=0;i<n;i++){
 		cout<<"enter the elements :-";
 		cin>>arr[i];
	 }
//	 cout<<"the array after all input"<<endl;
//	 print(arr,n);
	 reverse(arr,n);
 	
 }

