#include <cstdio>
#include <set>

int main() {
    long t;
    scanf("%ld", &t);
    while(t--) {
        long n;
        scanf("%ld", &n);
        std::set<long> s;
        for(long p = 0; p < n; p++) {
            long x;
            scanf("%ld", &x);
            s.insert(x);
        }
        long ans(0);
        for(long x : s) {
            if(x >= s.size()) {
                ans = x;
                break;
            }
        }
        printf("%ld\n", ans);
    }
}
