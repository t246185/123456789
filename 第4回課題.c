#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("double maximum:%Le\n",LDBL_MAX);
    printf("double minimum:%Le\n",LDBL_MIN);
    printf("double percision:%d\n",LDBL_DIG);
    
    printf("int maximum:%d\n",INT_MAX);
    printf("int minimum:%d\n",INT_MIN);
 
    
    printf("long maximum:%Lf\n",LDBL_MAX);
    printf("long minimum:%Le\n",LDBL_MIN);

     
    return 0;
}