#include <bits/stdc++.h>

using namespace std;

int main(){
    long N;
    cin>>N;

    vector<int> P(N), Q(N);
    for(int i=0; i<N; ++i){
        cin>>P[i];
    }
    for(int i=0; i<N; ++i){
        cin>>Q[i];
    }

    vector<int> a(N);
    for(int i=0; i<N; ++i){
        a[i] = i+1;
    }

    int idx = 0;
    int idx_p = 0;
    int idx_q = 0;
    bool eq_flag_p = true;
    bool eq_flag_q = true;
    do {
        eq_flag_p = true;
        for(int i=0; i<N; ++i){
            if(a[i] != P[i]){
                eq_flag_p = false;
            }
        }
        if(eq_flag_p==true){
            idx_p = idx;
        }

        eq_flag_q = true;
        for(int i=0; i<N; ++i){
            if(a[i] != Q[i]){
                eq_flag_q = false;
            }
        }
        if(eq_flag_q==true){
            idx_q = idx;
        }
        //cout<<eq_flag_p<<" "<<eq_flag_q<<endl;
        idx++;
    } while(next_permutation(a.begin(), a.end()));

    cout<<abs(idx_p-idx_q)<<endl;
    
    return 0;
}
