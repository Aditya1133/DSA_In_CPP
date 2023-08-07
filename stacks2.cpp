#include<iostream>
#include<stack>
using namespace std;

 int main(){
 	int n;
 	stack<int> s;
 	s.push(10);
 	s.top();
 	s.push(12);
 	s.top();
 	s.push(34) ;
 	s.pop();
 	s.pop();
 	s.top();
 	cout<<s.top();
 }
