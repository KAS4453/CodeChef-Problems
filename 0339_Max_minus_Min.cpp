#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, a, b, c;
    cin>>t;
    
    while(t--){
        cin>>a>>b>>c;
        cout<< max(max(a,b),c) - min(min(a,b),c) <<endl;
    }
}
