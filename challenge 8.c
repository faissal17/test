#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float c, f;
   printf("entre temperature f :\n");
   scanf("%f" , &f);
    c = (f-32)/1.8;
   printf("temperateur in celsius: %f%.2\n ", c );
   if ( c >40){
   	printf("the wheather is very hot");
   }else if ( c > 20 ){
   	printf("the weather is hot ");
   }else if (c > 0){
   	printf("the weather is cold");
   }else { 
   printf ("the weather is very cold ");
   }
   
	return 0;
}
