#include<iostream>
#include<vector>
using namespace std;
int main(){
    int j,k;
    cout<<"Enter two numbers:"; 
    cin>>j>>k;
    int end = max(j,k);
    int start = min(j,k);
    vector<int> v2;
    vector<bool> sieve(end+1,true);
    for(int a=2;a<sieve.size();a++){
        if(sieve[a]==true)
            v2.push_back(a);
        for(int b=a*a;b<sieve.size();b+=a){
            sieve[b]=false;
        }
    }
    cout<<"The prime numbers between "<<start<<" and "<<end<<" are:";
    for(auto &i:v2){
        if(i>start && i<end){
            cout<<i<<" ";
        }
    }
    return 0;
}