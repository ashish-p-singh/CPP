#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int>a;
    for(int i=0;i<n-1;i++){
        int b;
        cin>>b;
        a.push_back(b);
    }
    long long sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    long long sum2=0;
    for(int i=0;i<n;i++){
        sum2=sum2+a[i];
    }
    long long sum3=sum-sum2;
    cout<<sum3;
}