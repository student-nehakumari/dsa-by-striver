#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
     int basic;
     double hra,da,allow,pf,total;
     char grade;
     cin>>basic;
     cin>>grade;
     if (basic<0 || basic>7500000){
        return -1;
     }

       hra = 0.20 * basic;
       da = 0.50 * basic;
       if (grade == 'A')
         allow = 1700;
       else if (grade == 'B')
         allow = 1500;
       else
         allow = 1300;
       pf = 0.11 * basic;
       total = basic + hra + da + allow - pf;
       cout << round(total);
       return 0;
    
}