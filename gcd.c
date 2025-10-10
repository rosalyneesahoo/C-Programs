#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b){
    if (a==0)
        return b;
    return gcd(b%a,a);
}

int main()
{
    int a,b;
    printf("value of a and b: ");
    scanf("%d%d",&a,&b);
    printf("\nGCD of %d and %d = %d",a,b,gcd(a,b));
    return 0;
}
