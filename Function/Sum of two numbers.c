#include<stdio.h>

int mysum(int N1, int N2){
  return N1+N2;
}


int main() {
  int N1, N2;
  scanf("%d %d", &N1, &N2);
 
  printf("%d", mysum(N1, N2));
  
  return 0;
}
