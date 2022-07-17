#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<bool> sieve(100,true);
    for(int i=2;i<sieve.size();i++){
        if(sieve[i]==true)
            cout<<i<<" ";
        for(int j=i*i;j<sieve.size();j+=i){
            sieve[j]=false;
        }
    }
    return 0;
}