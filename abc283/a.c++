#include<bits/stdc++.h>

using namespace std;

const bool DEBUG=false;

template<class T>
void debug(T head){
    if(DEBUG){
        cout<<head<<endl;
    }
}

template <class Head, class... Body>
void debug(Head head, Body... body){
    if(DEBUG){
        cout<<head<<" ";
        debug(body...);
    }
}

const long long INF = LONG_MAX/4;

void solve(long long A, long long B){
    long long answer = 1;
    for(int i = 0 ; i < B ; i++){
        answer *= A;
    }
    cout<<answer<<endl;
}

int main(){
    long long A;
    long long B;
    scanf("%lld",&A);
    scanf("%lld",&B);
    solve(A, B);
    return 0;
}
