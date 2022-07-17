#include<iostream>
#include<vector>
using namespace std;
int main(){
    int j;
    cout<<"Enter a number:"; 
    cin>>j;
    vector<int> v2;
    vector<bool> sieve(j+10,true);
    for(int a=2;a<sieve.size();a++){
        if(sieve[a]==true)
            v2.push_back(a);
        for(int b=a*a;b<sieve.size();b+=a){
            sieve[b]=false;
        }
    }
    cout<<"The prime number exactly next to the entered number is:";
    for(auto &i:v2){
        if(i>j){
            cout<<i<<" ";
            break;
        }
    }
    return 0;
}