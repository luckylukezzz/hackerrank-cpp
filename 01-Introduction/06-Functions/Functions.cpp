#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//-------------------------------------

int maxVal(int x,int y){
    return (x>y) ? x:y;
    
}


int main() {
    int maximum=0;
    for (int i=0;i<4;i++){
        int x;
        cin>>x;
        maximum=maxVal(x,maximum);
        
    }
    cout<<maximum;  

//--------------------------------------------     
    return 0;
}
