int sumno ( int );

#include<stdio.h>

int main ( )

{
    
    int n=1 ;
    
    printf("sum of 25 natural number is %d",n);
    
    sumno ;
    
    return 0 ;
    
}

int sumno ( int n )
{
    
    
    int sum = 0;
    
    if ( n == 25 )
      return ( sumno );
   else 
     sum = n + sumno(++n) ;
    
    return ( sum );
    
}
