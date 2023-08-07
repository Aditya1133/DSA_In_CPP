#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Arr{
public:
	int arr[100],size;
	Arr(){
	    cout<<"Enter the no. of elemets in the Array"<<endl;
		cin>>size;
		cout<<"Enter the value of the Arrays"<<endl;
		for(int i=0;i<size;i++){
			cin>>arr[i];
		}
		size++;
	}
	void deletepostion(int arr[], int &size) {
		int pos;
		cout<<"Enter the postionto be Deleted in the array"<<endl;
		cin >> pos;
		for (int i = pos; i < size - 1; i++) {
			arr[i] = arr[i + 1];
		}
		size--;
		cout<<"Printing Array"<<endl;
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
	}
	void deletevalue(int arr[], int &size) {
		int ele;
		cout<<"Enter the value to delete the array"<<endl;
		cin >> ele;
		int h = 0;
		for (int i = 0; i < size; i++) {
			if (arr[i] == ele) {
				break;
			}
			h++;
			// cout<<h<<"\n";
		}
		for (int i = h; i < size - 1; i++) {
			arr[i] = arr[i + 1];
		}
		size--;
		cout<<"Printing Array"<<endl;
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
	}
	void insert(int arr[], int &size) {
		int ele;
		int pos;
		cout<<"enter the Value of the elemwnt to be Inserted "<<endl;
		cin >> ele;
		cout<<"Enter the postion to insert the value"<<endl;
		cin >> pos;
		int h = size;
		while (h != pos) {
			arr[h] = arr[h - 1];
			h--;
		}
		arr[pos] = ele;
		size++;
		cout<<"Printing Array"<<endl;
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
	}
	void display(int arr[], int &size) {
	    cout<<"Printing Array"<<endl;
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
	}
	void search(int arr[], int &size) {
		int ele;
		cout<<"Enter the value to be Searched "<<endl;
		cin >> ele;
		for (int i = 0; i < size; i++) {
			if (arr[i] == ele) {
				cout << "elemets found at position " << i << "\n";
				cout<<"Printing Array"<<endl;
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
				return;
				
			}
		}
		cout << "elements not found\n";
		
	}
};
int main() {
	Arr m;
	int g;
	cout<<"Enter 1 for Displaying the array"<<endl;
	cout<<"Enter 2 for Inserting in  the array"<<endl;
	cout<<"Enter 3 for Searching the array"<<endl;
	cout<<"Enter 4 for Deletebyvalue the array"<<endl;
	cout<<"Enter 5 for Deletebypostion the array"<<endl;
	cin >> g;
	if (g == 1) {
		m.display(m.arr, m.size);
	}
	else if (g == 2) {
		m.insert(m.arr, m.size);
	}
	else if (g == 3) {
		m.search(m.arr,m.size);
	}
	else if (g == 4) {
		m.deletevalue(m.arr, m.size);
	}
	else if (g == 5) {
		m.deletepostion(m.arr, m.size);
	}
	else {
		m.deletevalue(m.arr, m.size);
	}
	return 0;
}
