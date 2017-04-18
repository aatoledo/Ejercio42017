#include <stdio.h>
#include <stdlib.h>

int main(){
  float random;
  int i,j;
  srand48(1);
  double x;

  for (j = 0; k<100000; j++){
    x = 0;
    for (i = 0; i<500; i++){
      random = drand48();
      if (random < 0.5){
	x = x - 1;
      }
      else{
	x = x + 1;
      }
    }
    FILE *out = fopen ("random_walks.txt","w+");
    fprintf(out,"%f\n", x);
  }

}
