#include <iostream>
using namespace std;

int power(int a,int b) {
    if (b==0)
        return 1;
    int half_power=power(a,b/2);
    if (b%2==0)
        return half_power*half_power;

        return half_power*half_power*a;
}
int main() {
    cout<<power(5,2 );
    return 0;
}