#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, x, y;
    cin>>t;
    
    while(t--){
        cin>>x>>y;
        if(x >= 2*y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
