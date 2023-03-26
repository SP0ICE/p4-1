#include <stdio.h>
#include <math.h>
int main() {
int N; int sum;
N=456;
sum=N/100+(N%100/10)+N%100%10;
printf("The sum of digits of ""%d" " is ",N);
printf("%d",sum);
}
