#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int count=0;
    while(n>0){
        int d=n%10;
        if(d==7||d==4){
            count++;
        }
        n=n/10;
    }
    if(count==4||count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}