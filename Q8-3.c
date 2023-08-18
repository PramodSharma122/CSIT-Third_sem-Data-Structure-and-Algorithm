// Q8.3 To Become familiar with GCD using Recursion.

#include<stdio.h>
int GCD(int,int);
int main() {
    int a,b;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);
    printf("GCD of %d & %d is: %d ",a,b,GCD(a,b));
    return 0;
}
int GCD(int a,int b) {
    if(b==0) {
        return a;
    }
    else {
        return GCD(b,a%b);
    }
}