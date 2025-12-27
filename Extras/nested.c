// C Program to create a structure student containing name, roll no and display the information
#include <stdio.h>
#include <string.h>
struct student{
	char name[20];
	int roll;
};
void display(struct student stu);
int main(){
	struct student stud;
	printf("Enter student's name: ");
	scanf("%s", stud.name);
	printf("Enter Roll Number: ");
	scanf("%d", &stud.roll);
	display(stud);
	
	return 0;
}
void display(struct student stu){
	printf("Output \n Name: %s",stu.name);
	printf("\n Roll Number: %d",stu.roll);
}