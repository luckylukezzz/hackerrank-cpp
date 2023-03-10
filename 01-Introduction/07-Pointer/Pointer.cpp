//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

#include <stdio.h>
//----------------------------------
#include <cmath>

void update(int *a,int *b) {
    int x=*a;
    *a=x+*b;
    *b=abs(x-*b) ;  
}
//----------------------------------------

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
