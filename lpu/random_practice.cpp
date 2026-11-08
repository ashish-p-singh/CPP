#include <bits/stdc++.h>
using namespace std;
// #define PI 3.14;
//  class Circle {
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
// class A{
// private:
//     int x=100;
//     friend class B;
//
// };
// class B {
// public:
//      void display(A obj) {
//          cout <<obj.x;
//      }
// };

int main() {
    vector <vector<int>> grid(4,vector<int>(5,0));
    for (int i=0;i<grid.size();i++) {
        for (int j=0;j<grid[i].size();j++) {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
}


