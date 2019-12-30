#include <bits/stdc++.h>

using namespace std;

int main(){
    long N, K;
    long R, S, P;
    string T;
    cin>>N>>K;
    cin>>R>>S>>P;
    cin>>T;

    long ans = 0;

    for(int i=0; i<K; ++i){
        int a=0, b=0, c=0; // 一個前がそれぞれグーチョキパー
        int aa, bb, cc;
        int j=0;
        while(i+j*K<N){
            if(T[i+j*K] == 'r'){
                aa = c;
                bb = c;
                cc = max(a, b)+P;
            }else if(T[i+j*K] == 's'){
                aa = max(b, c)+R;
                bb = a;
                cc = a;
            }else if(T[i+j*K] == 'p'){
                aa = b;
                bb = max(a, c)+S;
                cc = b;
            }

            a=aa;
            b=bb;
            c=cc;

            ++j;
        }

        ans += max(a, max(b, c));
    }
    cout<<ans<<endl;

    return 0;
}
