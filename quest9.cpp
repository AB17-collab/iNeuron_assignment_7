#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for checking if it's an armstrong number:";
    cin>>n;
    int temp = n;
    int r,y = 0;
    while(n>0){
        r = n%10;
        y += r*r*r;
        n /= 10;
    }
    if(y==temp)
        cout<<"Armstrong number";
    else   
        cout<<"Not an armstrong number"; 

    return 0;
}