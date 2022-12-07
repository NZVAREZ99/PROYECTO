#include<stdio.h>
main()
{
	int i=0,n=4;
	float s=0,v[30],p=0;
	
	
	while  (i<n)
	{
	  printf ("Ingrese la nota %d de %d: ",i+1,n);
          scanf  ("%f",&v[i]);
          
          s=s+v[i];
          i++;
	}
	 
        p=(float)s/n;
        
        printf ("El promedio de las notas ingresadas es %.2f",p);
        
}

