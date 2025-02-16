#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, n, x, k;
    cin>>t;
    
    while(t--){
        cin>>n>>x>>k;
        if(k>=(x*n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
