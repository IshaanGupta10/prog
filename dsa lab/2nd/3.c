//to sort data
#include <stdio.h>
struct student {
char name[20];
int rollno;
int marks[5];
int total;
char grade;
};
int main()
{
    printf("Enter no of students");
    int n;
    scanf("%d",&n);
    struct student stu[n];
    for(int i=0;i<n;i++)
    {
        printf("enter name ");
        scanf("%s",&stu[i].name);
        printf("enter roll no ");
        scanf("%d",&stu[i].rollno);
        for(int j=0;j<5;j++)
        {
           printf("enter marks");
           scanf("%d",&stu[i].marks[j]);
        }
        printf("enter total ");
        scanf("%d",&stu[i].total);
        printf("enter grade ");
        scanf("%s",&stu[i].grade);

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            int temp;
            if(stu[i].marks[j+1]>stu[i].marks[j])
            {
                temp=stu[i].marks[j];
                stu[i].marks[j]=stu[i].marks[j+1];
                stu[i].marks[j+1]=temp;


            }

        }

    }
    printf("name\t roll no\t marks\t total\t grade\n");
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<5;j++)
        {
            printf("%s\t%d\t%d\t%d\t%c\n",stu[i].name,stu[i].rollno,stu[i].marks[j],stu[i].total,stu[i].grade);
        }
    }
return 0;
}
