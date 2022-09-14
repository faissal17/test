#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nom [20] , prenom [20] , sexe [20];
	int age, phone ; 
	printf("nom :\n");
    scanf("%s",&nom);
    printf("nom : %s\n", nom);
    printf("prenom ; \n");
    scanf("%s",&prenom);
    printf("prenom ; %s\n", prenom);
    printf("age :\n");
    scanf("%d",&age);
    printf("age : %d\n" , age);
    printf("phone ;\n");
    scanf("%d",&phone);
    printf("phone:%d\n" , phone);
	return 0;
}
