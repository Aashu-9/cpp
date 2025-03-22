/*a program to implement function overloading in order to compute power(m,n) where,
(1) m is double and n is int
(2) m and n are int.*/
#include<iostream>
#include<stdio.h>
using namespace std;

void power(double m, int n) {
    double ans = 1;
    int i;
    for (i = 1; i <= n; i++)
        ans *= m;
    cout << " Answer is : " << ans << endl;
}

void power(int m, int n) {
    int ans = 1;
    int i;
    for (i = 1; i <= n; i++)
        ans *= m;
    cout << " Answer is : " << ans << endl;
}

int main() {
    power(9.5, 2); // Calls the double, int version
    power(4, 2);   // Calls the int, int version
    return 0;
}