#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  
int n1;
scanf("%d",&n1);
n1=(n1<0)?(n1*-1):n1;
int ans=(n1/1000)+(n1%10);
printf("%d",ans);
return 0;
  }
