#include <bits/stdc++.h>
using namespace std;

void sieve(vector<int>&prime, int n){
    // sieve of eratosthenes
    for(int i = 2; i*i < n+1; i++){
        if(prime[i]==true){
            for(int j = i*i; j < n+1; j+=i) prime[j]=false; // not prime
        }
    }
}

int main()
{
    int n = 10; // find all the prime numbers till n
    vector<int>prime(n+1, true); // true -> is Prime and false -> not prime
    sieve(prime, n);
    for(int i = 2; i < n+1; i++){
        if(prime[i]) cout<<i<<" ";
    }
    
    return 0;
}