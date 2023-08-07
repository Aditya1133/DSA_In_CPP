#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Search {
public:
	int arr[100];
	int s;
	int e;
	int mid;
	int ele;
	int n;
	Search(int f, int d) {
		n = f;
 		cout<<"Enter the element ->";
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		s = 0;
		e = n - 1;
		ele = d;
	}
	void binary() {
		int count = 0;
		while (s <= e) {
			mid = (s + e) / 2;
			if (arr[mid] == ele) {
				count++;
				cout << ele << "->" << mid << "\n";
				break;
			}
			else if (arr[mid] < ele) {
				s = mid + 1;
			}
			else {
				e = mid - 1;
			}
		}
		if (count == 0) {
			cout << "-1\n";
		}
	}
	void linear() {
		for (int i = 0; i < n; i++) {
			if (arr[i] == ele) {
				cout << ele << "->" << i << "\n";
				return;
			}
		}
		cout << "-1";
	}
};
int main() {
	int n;
	cout<<"Enter the no. elements->";
	cin >> n;
	int d;
	cout<<"Enter the element to be found->";
	cin >> d;
	Search h(n, d);
	int g;
	cout<<"press 1 for linear & 2 for binary ->";
	cin >> g;
	switch (g) {
	case 1:
		h.linear();
		break;
	case 2:
		h.binary();
		break;
	}
	return 0;
}