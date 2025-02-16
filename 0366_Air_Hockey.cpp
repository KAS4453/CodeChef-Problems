#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, a, b;
    cin>>t;
    
    while(t--){
        cin>>a>>b;
        if(a>=b){
            cout<<7-a<<endl;
        }
        else{
            cout<<7-b<<endl;
        }
    }
}
