#include <bits/stdc++.h>

using namespace std;

int main(){
    long N;
    string S;
    cin>>N>>S;
    int ans = 0;
    for(int i=0; i<N; ++i){
        if(S.substr(i, 3) == "ABC"){
            ans++;
        }
    }

    cout<<ans<<endl;
    
    return 0;
}
