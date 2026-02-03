#include <stdio.h>
long int fact(int n)
{
long int f = 1;
for(int i = 1; i <= n; i++)
f *= i;
return f;
}
int main()
{
int n, r, ch;
long int ans;
printf("1.Permutation  2.Combination\n");
scanf("%d", &ch);
printf("Enter n and r: ");
scanf("%d %d", &n, &r);
if(r > n)
{
printf("Invalid input");
return 0;
}
if(ch == 1)
ans = fact(n) / fact(n - r);
else if(ch == 2)
ans = fact(n) / (fact(r) * fact(n - r));
else
{
printf("Invalid choice");
return 0;
}
printf("Result = %ld", ans);
return 0;
}
