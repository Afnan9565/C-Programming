#include <stdio.h>
union student{
	char sname[20];
	char fname[50];
	int marks;
} s;
int main(){
	printf("Size of Union = %ld \n", sizeof(union student));
	
	return 0;
	}