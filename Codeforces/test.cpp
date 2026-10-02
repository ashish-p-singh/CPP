#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while (t--) {
      int n;
      cin>>n;
      int arr[n];
      for (int i=0;i<n;i++) {
         cin>>arr[i];
      }
      int count=0;
      for (int i=n-1;i>0;i--) {
         while (arr[i]<=arr[i-1]) {
            if (arr[i-1]==-0) {
               count=-1;
               break;
            }
            arr[i-1]/=2;

            count++;
         }
      }
      cout<<count<<endl;
   }

}