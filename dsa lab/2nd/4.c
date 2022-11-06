#include <stdio.h>
#include <string.h>
struct date
{
    int day;
    int month;
    int year;
};
struct employee
{
    char name[20];
    struct date dob;
    struct date doj;
    int salary;
};
int main ()
{
    int n;
    printf("Enter no. of employees. ");
    scanf("%d",&n);
    struct employee e[n];
    getchar();
    for (int i=0;i<n;i++)
    {
        
        printf("Employee %d \n",i+1);
        printf("Enter name (all in capital letters).\n");
        fgets(e[i].name,20,stdin);
        printf("Enter date of birth in DDMMYYYY format. ");
        int a;
        scanf("%d",&a);
        e[i].dob.year=a%10000;
        e[i].dob.month=(a/10000)%100;
        e[i].dob.day=(a/1000000);
        printf("Enter date of joining in DDMMYYYY format. ");
        a=0;
        scanf("%d",&a);
        e[i].doj.year=a%10000;
        e[i].doj.month=(a/10000)%100;
        e[i].doj.day=(a/1000000);
        printf("Enter salary. ");
        scanf("%d",&e[i].salary);
        getchar();
    }
    struct employee p;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(strcmp(e[j].name, e[j+1].name) > 0)
            {
                p=e[j];
                e[j]=e[j+1];
                e[j+1]=p;
            }
        }
    }
    printf("\n");
    printf("Sorted according to name:");
    for(int i=0;i<n;i++)
    {
        printf("%s%d\n",e[i].name,e[i].salary);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (e[j].dob.year < e[i].dob.year)
            {
                p=e[j];
                e[j]=e[i];
                e[i]=p;                
            }
            else if (e[j].dob.year == e[i].dob.year)
            {
                if (e[j].dob.month < e[i].dob.month)
                {
                    p=e[j];
                    e[j]=e[i];
                    e[i]=p;
                }
                else if(e[j].dob.month == e[i].dob.month)
                {
                    if(e[j].dob.day < e[i].dob.day)
                    {
                        p=e[j];
                        e[j]=e[i];
                        e[i]=p;
                    }
                }
                else
                {
                }
            }
            else
            {
            }
        }
    }
    printf("\n");
    printf("Sorted according to DOB:");
    for(int i=0;i<n;i++)
    {
        printf("%s%d-%d-%d\n",e[i].name,e[i].dob.day,e[i].dob.month,e[i].dob.year);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (e[j].doj.year < e[i].doj.year)
            {
                p=e[j];
                e[j]=e[i];
                e[i]=p;                
            }
            else if (e[j].doj.year == e[i].doj.year)
            {
                if (e[j].doj.month < e[i].doj.month)
                {
                    p=e[j];
                    e[j]=e[i];
                    e[i]=p;
                }
                else if(e[j].doj.month == e[i].doj.month)
                {
                    if(e[j].doj.day < e[i].doj.day)
                    {
                        p=e[j];
                        e[j]=e[i];
                        e[i]=p;
                    }
                }
                else
                {
                }
            }
            else
            {
            }
        }
    }
    printf("\n");
    printf("Sorted according to DOJ:");
    for(int i=0;i<n;i++)
    {
        printf("%s%d-%d-%d\n",e[i].name,e[i].doj.day,e[i].doj.month,e[i].doj.year);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(e[j].salary < e[i].salary)
            {
                p=e[j];
                e[j]=e[i];
                e[i]=p;
            }
        }
    }
    printf("\n");
    printf("Sorted according to Salary:");
    for(int i=0;i<n;i++)
    {
        printf("%s%d\n",e[i].name,e[i].salary);
    }
}
