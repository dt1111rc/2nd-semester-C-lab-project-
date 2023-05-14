// Develop a C program that manages employee data, including their name, employee ID, salary, and job title.

#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int id;
    double salary;
} Employee;
 
int main()
{
    //Number of employees working in the company.
    int n=2;

    //Array to store structure values of all employees.
    Employee employees[n];
 
    //Taking each employee detail as input.
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name of the employee
        printf("Enter name: ");
        scanf("%[^\n]s",employees[i].name);

        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //to consume extra '\n' input
        char ch = getchar();
 
        printf("\n");
    }
 
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}
