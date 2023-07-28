#include <stdio.h>
int main(){
  float x,sum,term;
  int i,n;
  printf("Enter the number of terms: ");
  scanf("%d",&n);
  printf("Enter the angle in degrees: ");
  scanf("%f",&x);
  x=(x*3.14)/180;
  sum=x;
  term=x;
  for (i=1;i<=n;i++){
    term=(term*(-1)*x*x)/((2*i)*(2*i+1));
    sum=sum+term;
  }
  printf("sinx value:%f",sum);
  return 0;
}