#include <iostream>
using namespace std;
    
    
        void Min(int a[],int n){
        int min=876565;
        for(int i=0;i<n;i++){
            if(a[i]<min){
                min=a[i];
            }
        }
        cout<<"The minimum value in the array is "<<min<<endl;
    }
    
    void Max(int a[],int n){
        int max=-876565; int max2=-876566;
        for(int i=0;i<n;i++){
            if(a[i]>max){
                //max2=max;
                max=a[i];
            }
            for(int i=0;i<n;i++){
            if(a[i]>max2&& a[i]<max){
                max2=a[i];
            }
        }
    }
    
        cout<<"The maximum value in the array is "<<max<<endl;
        cout<<"The second largest  value in the array is "<<max2<<endl;
    }
    void reverse(int a[],int n){
            int s=0;int e=n-1;
            while (s<=e){
                swap(a[s],a[e]);
        s++,e--;
            }
            cout<<" Reversed array ==>"<<endl;
            for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    }
    void output(int a[],int n){
            cout<<"Printing the Array  ==>"<<endl;
            int sum=0;float Avg;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
        sum+=a[i];
    }
    Avg=sum/n;
    cout<<"Sum of the array is ->"<<sum<<endl;
    cout<<"Avg of the array is ->"<<Avg<<endl;
}
int main() {
    int n;
    int a[87];
    cout<<"Enter the number of element of array->";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
}
output(a,n);
reverse(a,n);
Max(a,n);
Min(a,n);
}
