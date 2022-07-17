#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=1000){
        int temp = i;
        int r,y=0;
        while(i){
            r = i%10;
            y += r*r*r;
            i /= 10;
        }
        if(y==temp){
            cout<<temp<<" ";
            i = temp+1;
        }
        else
            i = temp+1;
    }
    return 0;
}