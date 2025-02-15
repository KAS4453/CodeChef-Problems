#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, a, b, c;
    cin>>t;
    
    while(t--){
        cin>>a>>b>>c;
        if(a>b && a>c){
            cout<<"Alice"<<endl;
        }
        else if(b>a && b>c){
            cout<<"Bob"<<endl;
        }
        else if(c>a && c>b){
            cout<<"Charlie"<<endl;
        }
    }
}
