#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int maxo=1;
    int count=1;
    int n=s.size();
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            count=1;
        }
        maxo=max(maxo,count);
    }
    cout<<maxo<<endl;
}