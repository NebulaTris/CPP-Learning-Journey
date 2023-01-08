/*
Alex is late to the school assembly. When he comes to the assembly, he has to find his correct place to stand. Correct place in an assembly refers to the place according to height order.
Given the height of N students standing in the assembly and Alex's height, help him find his correct place?

Note: Alex should stand just next to the student who is smaller than him in terms of height, ie, if there are students equal to his height, they should stand behind Alex.

Input Format
First line takes input of N students and Alex's height X
Second line takes input for N students' heights

Constraints
1 <= N <= 10^5
1 <= X, height[i] <= 10^9

Output Format
Output the position of Alex (0-indexed)*/
#include <bits/stdc++.h>
using namespace std;

int find_index(int arr[], int n, int K)
{
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == K)
            return mid;
        else if (arr[mid] < K)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return end + 1;
}

int main()
{
    int arr[1000],i,n,k;
    cin>>n>>k;
    for (i= 0;i < n;i++) {
        cin >> arr[i];
    }
    std::sort(arr,arr+n);
    cout << find_index(arr, n, k) << endl;
    return 0;
}
