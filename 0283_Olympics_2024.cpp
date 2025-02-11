#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int g, s, b;
    cin>>g>>s>>b;
    
    int sum = 0;
    sum = sum + (5 - g);
    sum = sum + (5 - s);
    sum = sum + (5 - b);
    
    cout<<sum<<endl;
}
