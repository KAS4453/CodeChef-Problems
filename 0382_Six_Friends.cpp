#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, x, y;
    cin>>t;
    
    while(t--){
        cin>>x>>y;
        if(3*x >= 2*y){
            cout<<2*y<<endl;
        }
        else{
            cout<<3*x<<endl;
        }
    }
}
