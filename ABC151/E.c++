#include <bits/stdc++.h>

using namespace std;

const int MOD=1'000'000'007;

long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

int main(){
    long N, K;
    cin>>N>>K;
    vector<long> A(N);
    for(int i=0; i<N; ++i){
        cin>>A[i];
    }

    vector<long> xCk(N); // xCk[0] == 0C(K-1)
    long k=0;
    while(k<K-1){
        xCk[k] = 0;
        k++;
    }
    xCk[k] = 1; // k == K-1 => xCk[K-1] == (K-1)C(K-1) == 1
    /*
    long bunbo = 1;
    for(int i=1; i<=K-1; ++i){
        bunbo *= i;
        bunbo %= MOD;
    }
    */
    for(int i=K; i<N; ++i){
        // iCK-1
        /*
        xCk[i] = 1;
        for(int j=0; j<K-1; ++j){
            xCk[i] *= (i-j);
            xCk[i] %= MOD;
        }
        */
        xCk[i] = xCk[i-1] * i;
        xCk[i] %= MOD;
        xCk[i] *= modinv(i-K+1, MOD);
        xCk[i] %= MOD;
    }

    sort(A.begin(), A.end());
    long ans = 0;
    long tmp = 0;
    for(int i=0; i<N; ++i){
        //cout<<A[i]<<" "<<i<<" "<<xCk[i]<<endl;
        tmp = A[i]; // * i;
        tmp %= MOD;
        if(xCk[i] > 0){
            tmp *= xCk[i];
            tmp %= MOD;

            ans += tmp;
            ans %= MOD;
        }
        //cout<<ans<<endl;

        //cout<<A[i]<<" "<<(N-i-1)<<" "<<xCk[N-i-1]<<endl;
        tmp = A[i]; // * (N-i-1);
        tmp %= MOD;
        if(xCk[N-i-1] > 0){
            tmp *= xCk[N-i-1];
            tmp %= MOD;

            ans += MOD;
            ans -= tmp;
            ans %= MOD;
        }
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;

    return 0;
}
