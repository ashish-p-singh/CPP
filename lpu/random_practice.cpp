#include <bits/stdc++.h>
using namespace std;
#define PI 3.14;
/ class Circle {
// public:
//     int radius;
//     int  area;
//     int circumference;
//     void getradius() {
//         cin>>radius;
//     }
//     int calcarea() {
//        return area=PI*radius*radius;
//     }
//     int clacper() {
//         return circumference=2*PI*radius;
//     }
// };
// class Square {
// public:
//     int side;
//     int  area;
//     int perimeter;
//     void getside() {
//         cin>>side;
//     }
//     int  calcarea() {
//        return area=side*side;
//     }
//     int clacper() {
//         return perimeter=4*side;
//     }
// };
class A{
private:
    int x=100;
    friend class B;

};
class B {
public:
     void display(A obj) {
         cout <<obj.x;
     }
};

int main() {

        int divisior =3;
        int dividend=10;
        int sum=0;
        int freq=-1;
        while(sum<dividend){
            sum=sum+divisior;
            freq++;
        }
    cout<<freq;
    }

