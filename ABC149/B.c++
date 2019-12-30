#include <bits/stdc++.h>

using namespace std;

int main(){
    long A, B, K;
    cin>>A>>B>>K;

    if(A < K){
        K -= A;
        A = 0;
    }else{
        A -= K;
        cout<<A<<" "<<B<<endl;
        return 0;
    }

    if(B < K){
        K -= B;
        B = 0;
    }else{
        B-=K;
    }
    cout<<A<<" "<<B<<endl;

    return 0;
}
