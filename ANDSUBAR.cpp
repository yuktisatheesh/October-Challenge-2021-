#include <iostream>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int n,s=0,b,one,two,op;
        cin>>n;
        b=n;
        while(b>0){
            s++;
            b=b>>1;
        }
        one=n-pow(2,s-1)+1;
        two=pow(2,s-1)-pow(2,s-2);
        op=max(one,two);
        cout<<op<<endl;
    }
	return 0;
}
