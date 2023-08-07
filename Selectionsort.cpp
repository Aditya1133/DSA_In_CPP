#include <iostream>

using namespace std;
void Selectionsort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    cout<<"code after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
int main()
{
    int a[100];
    int n;
    cout<<"enter the no. of elements in the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Selectionsort(a,n);
}
