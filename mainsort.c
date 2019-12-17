#include <stdio.h>
#include <math.h> 
#include "arrays.h"
#define ARRSIZE 50

int ARR[ARRSIZE]={0};

int main(){

int insertedNum=0; 

for (int lop=0; lop<ARRSIZE; lop++)  /* adding numbers from user into ARR */
{
scanf("%d ", &insertedNum); 

*(ARR+lop)=insertedNum;
}

insertion_sort(ARR , ARRSIZE);

printf("ARR is : [");
for (int lp=0; lp<ARRSIZE-1; lp++){  /* printing  ARR */
printf("%d,", *(ARR+lp));
}
printf("%d", *(ARR+ARRSIZE-1));
printf("]");
printf("\n");


return 0;
}
