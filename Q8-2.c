// Q8.2 To Become familiar with Fibonacci series using Recursion.

#include<stdio.h>
int fib(int);
int main() {
    int n;
    printf("Enter the nth terms: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        printf("%d ",fib(i));
    }
}
int fib(int n) {
    if(n<=1) {
        return n;
    }
    else {
        return (fib(n-1)+fib(n-2));
    }
}