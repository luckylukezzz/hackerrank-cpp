//https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        int val;
        cin>>val;
        arr[i]=val;
        
    }
    
    for (int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    } 
   
    return 0;
}
