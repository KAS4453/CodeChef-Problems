#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, a, b, c;
    cin>>t;
    
    while(t--){
        cin>>a>>b>>c;
        if(a+b==c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
