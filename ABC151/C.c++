#include <bits/stdc++.h>

using namespace std;

int main(){
    long N, M;
    cin>>N>>M;
    vector<long> p(M);
    vector<string> S(M);

    vector<long> WA_cnt(N, 0);
    vector<bool> AC_flag(N, false);
    for(int i=0; i<M; ++i){
        cin>>p[i]>>S[i];
        if(S[i] == "AC"){
            AC_flag[p[i]-1] = true;
        }else if(S[i] == "WA" && AC_flag[p[i]-1] == false){
            WA_cnt[p[i]-1] += 1;
        }
    }

    long wa = 0;
    long ac = 0;
    for(int i=0; i<N; ++i){
        if(AC_flag[i] == true){
            ac += 1;
            wa += WA_cnt[i];
        }
    }
    cout<<ac<<" "<<wa<<endl;
    
    return 0;
}
