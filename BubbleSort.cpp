#include <iostream>

using namespace std;
void Bubblesort(int arr[], int n){
    for(int i =1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Print the array after sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
int main()
{
    int arr[100];int n;
    cout<<"Enter the no. of elements in the array"<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Bubblesort(arr,n);
}
