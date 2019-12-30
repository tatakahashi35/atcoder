#include <bits/stdc++.h>

using namespace std;

int main(){
    long X;
    cin>>X;

    vector<bool> is_prime(150000, true);
    for(int i=2; i<350; ++i){
        for(int j=i+1; j<150000; ++j){
            if(is_prime[j] == true && j%i == 0){
                is_prime[j] = false;
            }
        }
    }

    for(int j=X; j<150000; ++j){
        if(is_prime[j] == true){
            cout<<j<<endl;
            break;
        }
    }

    return 0;
}
