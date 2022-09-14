#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 
   float mile, km;
   printf("entre mile \n");
   scanf("%f" , &km);
   mile = km/1.609;
   printf("mile in km is %f\n ", mile);
   
	return 0;
}
