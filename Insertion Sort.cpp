#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
	for (int i=1;i<n;i++){
	int temp=arr[i];
	int j=i-1;
	for(;j>=0;j--){
		if(arr[j]>temp){
			arr[j+1]=arr[j];
		}
		else{
		break;
		}
		}
		arr[j+1]=temp;
		}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<"  ";
		}
}
int main(){
	int arr[100];
	int n;
	cout<<"enter the No. of elements in the array"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	insertionsort(arr,n);
}
