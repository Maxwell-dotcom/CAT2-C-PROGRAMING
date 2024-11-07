/*
//Program to define a structure
Author: Maxwell Otieno Adoyo
Reg no: CT101/G/24606/24
Date: 07-11-2024

*/
#include<stdio.h>
#include<string.h>
struct employee{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
}
employee,employee1;
int main(){
//declaration of variables
strcpy(employee1.name,"John Doe");
employee1.id=12345;
strcpy(employee1.department,"Human Resources");
employee1.salary=55000.50;
strcpy(employee1.email,"john.doe@company.com");


//display the output
printf("The name is :%s\n",employee1.name);
printf("The id is :%d\n",employee1.id);
printf("The department is :%s\n",employee1.department);
printf("The salary is :%f\n",employee1.salary);
printf("The email is :%s\n",employee1.email);	

	
	return 0;
}