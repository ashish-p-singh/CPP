#include <bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin>>w;
    while(w--){
        int res;
        int n,a,b;
        cin>>n>>a>>b;
        // int si=n*a;
        // int n2=n;
        // int bi;
        // int count=0;
        // while(n2>0){
        //     count++;
        //     n2=n2-3;
        // }
        // bi=count*b;
        int ans=INT_MAX;
        for(int t=0;t<=n/3;t++){
            int s=n-3*t;
            int cost=t*b+s*a;
            ans=min(ans,cost);
        }
        cout<<ans<<endl;
    }
}