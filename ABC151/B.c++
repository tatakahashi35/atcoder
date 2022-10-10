#include <bits/stdc++.h>

using namespace std;

int main(){
    long N, K, M;
    cin>>N>>K>>M;
    vector<long> A(N-1);

    long sum = 0;
    for(int i=0; i<N-1; ++i){
        cin>>A[i];
        sum += A[i];
    }

    if(M*N-sum>K){
        cout<<-1<<endl;
    }else{
        cout<<max(long(0), M*N-sum)<<endl;
    }
    return 0;
}
