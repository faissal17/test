#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 float f, c;
   printf("entre temperature \n");
   scanf("%f" , &c);
   f = (c * 1.8) + 32;
   printf("Fahrenheit in temperateur is %f%.2\n ", f);
	return 0;
}
