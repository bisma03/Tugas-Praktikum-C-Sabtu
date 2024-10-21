#include "stdio.h"
main ()
{
    float d,v,r,pi;
    
    d = 15;
    pi = 3.14;
    r = d/2;
    v = pi*r*r*r*4/3;
    
    printf("hasilnya :%.2f",v);
    return 0;
}