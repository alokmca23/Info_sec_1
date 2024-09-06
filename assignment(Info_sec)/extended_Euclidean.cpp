/*  NAME : ALOK KUMAR
    ROLL NO. : 5
    SUBJECT : INFORMATION SECURITY
    ASSIGNMENT 2 
    TOPIC : Extended Euclidean Algorithm

    Definition: The extended Euclidean algorithm is an extension to the Euclidean
    algorithm, and computes, in addition to the greatest common divisor (gcd) of
    integers a and b, also the coefficients of Bezout’s identity, which are integers 
    x and y such that
    ax + by = gcd(a,b)
    Ex. Input: a=30, b=20;
        Output: gcd=10, x=1, y=-1;
        (such that 30*1+20*(-1) = 10).*/





#include <bits/stdc++.h> 
using namespace std;

// Function for extended Euclidean Algorithm 
int gcdExtended(int a, int b, int *x, int *y) 
{ 
    // Base Case 
    if (a == 0) 
    { 
        *x = 0; 
        *y = 1; 
        return b; 
    } 

    int x1, y1; // To store results of recursive call 
    int gcd = gcdExtended(b%a, a, &x1, &y1); 

    // Update x and y using results of 
    // recursive call 
    *x = y1 - (b/a) * x1; 
    *y = x1; 

    return gcd; 
} 

int main() 
{ 
    int x, y, a, b; 
    cout<<"Enter two numbers to calculate GCD:"<<endl;
    cin>> a >> b;
    int g = gcdExtended(a, b, &x, &y); 
    cout << "GCD(" << a << ", " << b 
         << ") = " << g << endl;
    cout<<"X = "<<x<<" and Y = "<<y<<endl;
    return 0; 
} 


/* OUTPUT :
    GCD(30, 20) = 10
    X = 1 and Y = -1
*/