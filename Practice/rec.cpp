#include <bits/stdc++.h>
using namespace std;

int fact(int a){
    if(a<=1) return 1;
    return a*fact(a-1);
}

int main()
{   
    int x = fact(5); 
    cout<<x;
    return 0;
}