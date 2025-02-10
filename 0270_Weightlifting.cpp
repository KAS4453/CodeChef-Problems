#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a1, a2, b1, b2, c1, c2;
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    int sum = 0;
    
    if(a1 >= a2){
        sum+=a1;
    }
    else{
        sum+=a2;
    }
    
    if(b1 >= b2){
        sum+=b1;
    }
    else{
        sum+=b2;
    }
    
    if(c1 >= c2){
        sum+=c1;
    }
    else{
        sum+=c2;
    }
    cout<<sum<<endl;
}
