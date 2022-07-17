#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter two numbers for LCM:";
    cin>>n>>m;
    int prod=n*m;
    int bigger = max(n,m);
    int LCM = bigger;
    for(int i = bigger;i<=prod;i++){
        if(i%n==0 && i%m==0){
            LCM = i;
            break;
        }
    }
    cout<<"The HCF is:"<<prod/LCM; 
    return 0;
}