#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int mouth;
  scanf("%d",&mouth);
  if (mouth < 1|| mouth > 12){
    printf("??");
  }else{
    printf("Q%d",(mouth +2)/3);
  }

  return 0;
}
