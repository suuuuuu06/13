#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[10];
	double grade;
};

int main(void){
	struct student s1={24,"anna",
	4.3};
	s1.ID= 123456;
	strcpy(s1.name,"sj");
	s1.grade=4.2;
	
	printf("ID: %d\n",s1.ID);
	printf("name: %s\n",s1.name);
	printf("grade: %f\n",s1.grade);
}
