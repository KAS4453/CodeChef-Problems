#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, x;
    cin>>t;
    
    while(t--){
        cin>>x;
        if(x>100){
            cout<<x-10<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
}
