#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while (n--) {
        int round=0;
        int a,b,c;
        cin>>a>>b>>c;
        while(a!=b&&b!=c&&a!=c) {
            int max_val=max({a,b,c});
            int min_val=min({a,b,c});
             if (max_val==c) {
                 c--;
             }
            else if (max_val==b) {
                b--;
            }
            else{
                a--;
            }
            if (min_val==a) {
                a++;
            }
            else if (min_val==b) {
                b++;
            }
            else  {
                c++;
            }
            round++;
        }
            cout<<round<<endl;
    }
    return 0;
}