#include <bits/stdc++.h>
#include <chrono>
using namespace std;

long long fib_tab(int n){
    vector<long long> fib(n+1);
    fib[0] =0;
    fib[1] =1;
    for(int i = 0; i<=n;++i){
        if(n-i ==1){
            fib[i+1]+=fib[i];
        }
        else if(n-i == 0){
            break;
        }
        else{
            fib[i+1]+=fib[i];
            fib[i+2]+=fib[i];
        }
    }
    return fib[n];
}

int main(){
    cout<<fib_tab(40);
}