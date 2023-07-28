#include <stdio.h>
typedef struct employees
{
    int ID;
    char name[20];
    float salary;
} emp;
int main()
{
    emp details[] = {
        {301, "Raju", 35000},
        {302, "Ravi", 15000},
        {303, "Suraj", 20000},
        {304, "Lalit", 13000},
    };
    printf("Employee Details\nID\tName\tSalary\n");
    for (int i = 0; i < sizeof(details) / sizeof(emp); i++)
    {
        printf("%d\t%s\t%.2f\n", details[i].ID, details[i].name, details[i].salary);
    }
    return 0;
}