#include <bits/stdc++.h>

using namespace std;

unsigned long long int gcd(unsigned long long int x, unsigned long long int y){
	unsigned long long int r=x%y;
	while(r>0){
		x=y;
		y=r;
		r=x%y;
	}

	return y;
}

int main(){
    long A, B;
    cin>>A>>B;

    cout<<A/gcd(A, B)*B<<endl;

    return 0;
}


