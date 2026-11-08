#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        int n=s.size();
        int mid=n/2;
        if(n%2!=0){
            cout<<"NO\n";
        }
        else{
            string s1=s.substr(0,mid);
            string s2=s.substr(mid);
            if(s1==s2){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }   
}