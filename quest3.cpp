#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms in the fibonacci series:";
    cin>>n;
    int a = -1,b=1,c;
    int i = 1;
    int key;
    cout<<"Enter the value you would like to check in the series:";
    cin>>key;
    while(i<=n){
        c = a+b;
        if(c==key){
            cout<<"Value present in the series";
            break;
        }
        a = b;
        b = c;
        i++;
    }
    if(i>n)
        cout<<"Value not found in the series";
    return 0;
}