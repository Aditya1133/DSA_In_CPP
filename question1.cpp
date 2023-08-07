#include <iostream>
using namespace std;
void Odd_or_Even(int n)
{
    if (n % 2 == 0) {
        cout << "Number is Even" << endl;
    } 
    else {
        cout << "Number is Odd" << endl;
    }
}
int main(){
    int x;
    cin >> x;
    Odd_or_Even(x);
}
