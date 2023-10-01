#include <stdio.h>
#include <math.h>

int main() {
int n; 
double sum =0;
scanf("%d", &n);
for(int i=1; i <= n; i++) 
{
 sum += i*pow((2*i-1), 2);
}
printf("%lld", sum);
return 0;
}