#include <bits/stdc++.h>
using namespace std;
 
// A user defined stack that supports getMin() in
// addition to push() and pop()
struct MyStack {
    stack<int> s;
    int minEle;
 
    // Prints minimum element of MyStack
    void getMin()
    {
        if (s.empty())
            cout << "Stack is empty\n";
 
        // variable minEle stores the minimum element
        // in the stack.
        else
            cout << "Minimum Element in the stack is: "
                 << minEle << "\n";
    }
 
    // Prints top element of MyStack
    void peek()
    {
        if (s.empty()) {
            cout << "Stack is empty ";
            return;
        }
 
        int t = s.top(); // Top element.
 
        cout << "Top Most Element is: ";
 
        // If t < minEle means minEle stores
        // value of t.
        (t < minEle) ? cout << minEle : cout << t;
    }
 
    // Remove the top element from MyStack
    void pop()
    {
        if (s.empty()) {
            cout << "Stack is empty\n";
            return;
        }
 
        cout << "Top Most Element Removed: ";
        int t = s.top();
        s.pop();
 
        // Minimum will change as the minimum element
        // of the stack is being removed.
        if (t < minEle) {
            cout << minEle << "\n";
            minEle = 2 * minEle - t;
        }
 
        else
            cout << t << "\n";
    }
 
    // Removes top element from MyStack
    void push(int x)
    {
        // Insert new number into the stack
        if (s.empty()) {
            minEle = x;
            s.push(x);
            cout << "Number Inserted: " << x << "\n";
            return;
        }
 
        // If new number is less than minEle
        else if (x < minEle) {
            s.push(2 * x - minEle);
            minEle = x;
        }
 
        else
            s.push(x);
 
        cout << "Number Inserted: " << x << "\n";
    }
};
 
// Driver Code
int main()
{
	
    MyStack s;
    int n=0;
    int y;
    cout<<"Press 1 for the PUSH "<<endl;
    cout<<"Press 2 for the Pop "<<endl;
    cout<<"Press 3 for the min element in the list  "<<endl;
    cout<<"Press 4 for print the top element "<<endl;
    while(true){
    cin>>n;
    if(n==1)
	{
		int z;
		cin>>z;
    	s.push(z);
	}
	else if(n==2){
		s.pop();
	}
	else if (n==3){
		s.getMin();
	}
	else if (n==4){
    s.peek();
}
else{
	break;
}
}

    return 0;
}




