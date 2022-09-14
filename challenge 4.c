#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float f , c;
	printf("entre temperateur in f \n");
   scanf("%f" , &f);
   c = (f-32)/1.8;
   printf(" la temperature en fahrenheit est %f\n ", c);
   
	return 0;
}
