#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        // your code goes here
        if(y>=x){
            cout<<y+(y-x)<<endl;
        }
        else{
            cout<<y<<endl;
        }
    }
}
