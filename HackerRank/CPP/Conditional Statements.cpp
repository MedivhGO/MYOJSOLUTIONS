//https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    if(n==1)
        cout<<"one" << endl;
    else if(n==2)
        cout<<"two" << endl;
    else if(n==3)
        cout<<"three" << endl;
    else if(n==4)
        cout<<"four" <<endl;
    else if(n==5)
        cout << "five" << endl;
    else if(n==6)
        cout << "six" << endl;
    else if(n==7)
        cout << "seven" << endl;
    else if(n==8)
        cout << "eight" << endl;
    else if(n==9)
        cout <<"nine" <<endl;
    else
        cout <<"Greater than 9" << endl;

   return 0;
}
