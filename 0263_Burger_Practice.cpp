#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int a, b;
    
    for(int i = 0 ; i < t ; i++){
        cin>>a>>b;
        if(a >= b){
            cout<<b<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }
}
