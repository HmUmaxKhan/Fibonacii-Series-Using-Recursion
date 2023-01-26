#include <stdio.h>//Fibonacci Series

int fibonacci(int n)//Function which is to be called
{
    if (n == 0) //Base Case
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2) + 1;
}
int main() {
  int n;

  printf("Enter the number of terms: ");
//Taking input from the user
  scanf("%d", &n);

  printf("Sum of the first %d terms of the Fibonacci series: %d\n", n, fibonacci(n));

  return 0;
}