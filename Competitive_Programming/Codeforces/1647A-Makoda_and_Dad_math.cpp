#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int sum=0;
        int start;
        if(n%3==1){
            start=1;
        }
        else{
            start=2;
        }
        while(n>0){
            cout<<start;
            n=n-start;
            if(start==1){
                start=2;
            }
            else{
                start=1;
            }
        }
        cout<<endl;
    }
}