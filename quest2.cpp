#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms for fibonacci series:";
    cin>>n;
    int a = -1,b=1,c;
    int i=1;
    while(i<=n){
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
        i++;
    }
    return 0;
}