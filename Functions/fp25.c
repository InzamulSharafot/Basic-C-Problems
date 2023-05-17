#include <stdio.h>
// Find Fibonacci Series Of Given Number By Using Recursion
int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i));
    }
    return 0;
}
//fibonacci series deterniantion in general form
/*
   int a=0,b=1,c=a+b;
   printf("%d %d ", a, b);
   int n;
   scanf("%d", &n);
   for(int i=3;i<=n;i++){
      printf("%d ", c);
      a = b;
      b = c;
      c = a+b;
   }
   
*/
