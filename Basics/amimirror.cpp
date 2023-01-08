/*Manish is given an array of integers arr consisting of n numbers and he needs to find the mirrors in that list. Please help him to determine the same?
For an i to be called Mirror, 0 <= i < n and arr[i] should be equal to i.

Input Format
First line contains value of N
Second line containts N integers

Constraints
0 <= N, arr[i] <= 1000

Output Format
Print all the mirrors in a single line*/

//Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1000],i,n;
    cin>>n;
    for (i= 0;i < n;i++) {
        cin >> arr[i];
        if(arr[i]==i){
            cout<<i<<" ";
        }
}
    return 0;
}
