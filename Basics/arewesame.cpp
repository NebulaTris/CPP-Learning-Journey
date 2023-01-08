/*
To check if two students think the same way, teacher asked them to write N numbers each on a peice of paper.
Upon receiving the papers from both of them, teacher compares the N numbers and check if they wrote exactly the same numbers irrespective of the order.
If yes, then print "Miracle", otherwise print "Impossible"

Input Format
First line contains N. Second line contains N numbers written by first student. Third line contains N numbers written by second student.

Constraints
1 <= N <= 10^5
1 <= A[i], B[i] <= 10^9

Output Format
Print "Miracle" or "Impossible"*/

#include <iostream>
#include<algorithm>
using namespace std;

bool eq(int first[],int second[],int n)
{
    std::sort(first, first + n);
    std::sort(second, second + n);
    
    for (int q = 0; q < n; q++)
        if (first[q] != second[q]) 
            return false;
    return true;
}
int main()
{
    int first[1000],i,n,j,second[1000];
    cin>>n;
    for (i= 0;i < n;i++) {
        cin >> first[i];
        }
    for (j= 0;j < n;j++) {
        cin >> second[j];
        }
    if (eq(first,second,n))
  {
      cout<<"Miracle";
  }
  else
  {
    cout<<"Impossible";
  }
    return 0;
} 
