 #include<iostream>
using namespace std;
void insertion(int arr[],int p,int a, int n){
	for (int i=n;i>=p;i--){
		arr[i+1]=arr[i];
	}
	arr[p]=a;
}
void print(int arr[],int n){
	for(int i=0;i<n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void deletion(int arr[],int n, int p){
	for(int i=p;i<n;i++){
		arr[i]=arr[i+1];
	}
}
int main(){
	int arr[100];
	int n;
	cout<<"Enter the size for the array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		int z;
		cin>>z;
		arr[i]=z;
	}
//	cout<<"enter the position to enter the value"<<endl;
//	int p;
//	cin>>p;
//	int a;
//	cout<<"enter the value to insert in the value"<<endl;
//	cin>>a;
//	insertion(arr,p,a,n);
//	print(arr,n);
	cout<<"enter the position to delete the value"<<endl;
	int z;
	cin>>z;
	deletion(arr,n,z);
	print(arr,n);
}
