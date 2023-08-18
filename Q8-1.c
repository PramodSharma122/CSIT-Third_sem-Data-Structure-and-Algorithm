// Q8.1 To find the factorial of a number using Recursion.

#include<stdio.h>
int fac(int);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The factorial of given number is %d\n",fac(n));
}
int fac(int n) {
    if(n<=1) {
        return 1;
    }
    else {
        return(n*fac(n-1));
    }
}