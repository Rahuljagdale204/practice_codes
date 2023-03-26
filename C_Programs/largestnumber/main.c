#include <stdio.h>
int main(){
float a, b, c;
printf("Enter three numbers: ");
scanf("%f %f %f", &a, &b, &c);
if(a>=b && a>=c)
printf("Largest number = %.1f", a);
if(b>=a && b>=c)
printf("Largest number = %.1f", b);
if(c>=a && c>=b)
printf("Largest number = %.1f", c);
return 0;
}
