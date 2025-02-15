#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, x;
    cin>>t;
    
    while(t--){
        cin>>x;
        if(x<=70){
            cout<<0<<endl;
        }
        else if(x>100){
            cout<<2000<<endl;
        }
        else{
            cout<<500<<endl;
        }
    }
}
