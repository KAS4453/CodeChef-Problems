#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x, y, k;
    cin>>x>>y>>k;
    int z = x - y;
    if(z <= k && z >= -k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
