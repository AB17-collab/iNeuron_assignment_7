#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter which term you want in the fibonacci series:";
    cin>>n;
    int a = -1,b=1;
    int i = 1;
    int c;
    while(i<=n){
        c = a+b;
        a = b;
        b = c;
        i++;
    }
    cout<<"The required term in the fibonacci series is:"<<c; 
    return 0;
}