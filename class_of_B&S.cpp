#include <iostream>

using namespace std;
class Arr{
public:
	int arr[100],n;
	Arr(){
	    cout<<"Enter the no. of elemets in the Array"<<endl;
		cin>>n;
		cout<<"Enter the value of the Arrays"<<endl;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
	}
void Bubblesort(int arr[], int &n){
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

void Selectionsort(int arr[], int &n){
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
};

int main()
{
	Arr m;
    int g;
    cout<<"Enter 1 for Bubble Sort or 2 for Selection Sort"<<endl;
    cin>>g;
    if (g==1){
        m.Bubblesort(m.arr,m.n);
    }
    else if (g==2){
        m.Selectionsort(m.arr,m.n);
    }
    else{
        cout<<"Wrong No."<<endl;
    }
}
