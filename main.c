/* utilizando caracteres en los vectores */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char cadena[300],  cont=0;
    int longitud_ca, con, i, valor,num, numero=0, letra=0;
    float porcentaje;
 
    printf("\t\t Ingrese el texto a evaluar \n");
    printf("--> ");
    gets(cadena);
    
    num=strlen(cadena);
    for(i=0;i<num;i++)
    {
    		if(cadena[i]=='a' || cadena[i]=='e' || cadena[i]=='i' || cadena[i]=='o' || cadena[i]=='u' ||
			  cadena[i]=='A' || cadena[i]=='E' || cadena[i]=='I' || cadena[i]=='O' || cadena[i]=='U')
    		
  		cont++;
	}
 
    longitud_ca=strlen(cadena); //contar los caracteres del texto
    printf("...");
    printf("\n La cantidad de vocales es: %d",cont);
    printf("\n La cantidad de caracteres es: %d",longitud_ca);
    
    //calculo de porcentaje de vocales
    porcentaje=(cont*100)/longitud_ca;
    printf("\n El porcentaje de vocales es: %.1f %%",porcentaje); 
    
    //utilizando las funciones isalpha e isdigit
    for(i=0;i<num;i++)
    {
    	if(isalpha(cadena[i])) //funcion para leer una letra
    	{
    		letra++;
		}
		
	    if(isdigit(cadena[i])) //funcion para leer un numero
        {
       	    numero++;
		}		
	}
	
	printf("\n cantidad de letras en el texto es: %d", letra);
    printf("\n cantidad de digitos en el texto es: %d", numero);

    // espacios con piso (_)
    for(i=0;i<num;i++)
	{
		if(cadena[i]==' ')
		{
			cadena[i]='_';
			
		}
	}   
       printf("\n verificando texto con piso:\n"); 
        printf("--> ");
         printf("%s ",cadena);

	
	//texto al reves otra forma de volteralo 
/*	valor=strlen(cadena);
    printf("\n\n El texto al reves es: \n");
    printf("-> ");
    for(i=valor-1; i>=0; i--)
    {
    	printf("%s",cadena[i]);
    }*/
    
    printf("\n\n El texto al reves es: \n");
    printf("-> ");
    printf("%s ",strrev(cadena) );
    
    // asignando nuevos valores con ascii
    srand(time(0));
	for(i=0; i<num; i++)
    {
    //	cadena[i]=(rand()%10+cadena);
	}
	printf("\n\n el nuevo texto es: \n");
	printf("-> ");
    printf("%s ",cadena);

 //verificando si la cadena es un email
 
	return 0;
}
 

   
  
