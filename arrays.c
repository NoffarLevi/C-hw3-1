#include <stdio.h>
#include <math.h> 
#include "arrays.h"

void shift_element(int* arr, int i){ 

while(i>0){
int *p= (arr+i);
*p= *(p-1);
i--;
}
}

void insertion_sort(int* arr , int len)
{

for (int i=1; i<len; i++)
{


for(int j=i; j>0; j--)
{
if(*(arr+j)< *(arr+(j-1)))
{
int temp=*(arr+j);
shift_element((arr+(j-1)),1);
*(arr+(j-1))=temp;
}
}
}
}