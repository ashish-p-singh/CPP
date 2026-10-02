#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int>a={1,2,3,4,4,5};
    vector <int>b={1,3,5,5,7};
    int n=a.size();
    int m=b.size();
    int z=m+n;
    vector <int>c(z,0);
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }

    }
    while(i<n){
            c[k]=a[i];
            i++;
            k++;
    }
    while(j<m){
         c[k]=b[j];
            j++;
            k++;
    }
    for(auto i:c){
        cout<<i<<" ";
    }
}