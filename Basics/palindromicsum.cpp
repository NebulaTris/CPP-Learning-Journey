/*You are given a number N. You need to check if the sum of digits of N is a palindrome.
Input Format
Value of N

Constraints
0 <= N <= 10^18
Note: Use long long data-type

Output Format
"Yes", if the sum is a palindrome
"No", if the sum is not a palindrome*/

#include <bits/stdc++.h>
#include <iostream>  
using namespace std;  
int main()  
{  
    long long int n,sum=0,m;    
    cin>>n;    
    while(n>0)    
    {    
        m=n%10;    
        sum=sum+m;    
        n=n/10;    
    }
    long long int r,s1=0,temp;    
    temp=sum;    
    while(sum>0)    
    {    
        r=sum%10;    
        s1=(s1*10)+r;    
        sum=sum/10;    
        
    }    
    if(temp==s1)    
    cout<<"Yes";    
    else    
    cout<<"No";   
    return 0;  
} 
