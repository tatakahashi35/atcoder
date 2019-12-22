#include <bits/stdc++.h>

using namespace std;

int main(){
    long N;
    cin>>N;
    vector<long> a(N);
    for(int i=0; i<N; ++i){
        cin>>a[i];
    }

    long ans = 0;
    int cnt = 1;
    for(int i=0; i<N; ++i){
        if(cnt != a[i]){
            ans++;
        }else{
            cnt++;
        }
    }

    if(cnt>1){
        cout<<ans<<endl;
    }else{
        cout<<-1<<endl;
    }

    return 0;
}


