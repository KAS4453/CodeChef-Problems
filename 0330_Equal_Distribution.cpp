// Modulo Approach

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, a, b;
    cin>>t;
    
    while(t--){
        cin>>a>>b;
        if((a+b)%2 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

// Bit Approach

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, a, b;
    cin>>t;
    
    while(t--){
        cin>>a>>b;
        if((a+b)&1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
