#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int n, m;
    
    while(t--){
        cin>>n>>m;
        if(n>=m){
            cout<<n-m<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}
