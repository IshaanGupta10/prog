//WAP to implement strlen (), strcat (),strcpy () using the concept of Functions.
#include <stdio.h>
#include <string.h>
void Concatenate (char a[20],char b[20]);
void Length (char a[20]);
void Copy (char a[20],char b[20]);
int main ()
{
    char a[20],b[20];
    printf("Enter two strings.");
    scanf("%s %s",a,b);
    Concatenate(a,b);
    Length(a);
    Length(b);
    Copy(a,b);
    
}
void Concatenate (char a[20],char b[20])
{
    strcat(a,b);
    printf("Concatenated String : %s\n",a);
}
void Length (char a[20])
{
    printf("Length of %s is : %d\n",a,strlen(a));
}
void Copy (char a[20],char b[20])
{
    strcpy(a,b);
    printf("First string after copying : %s",a);
    printf("Second string after copying: %s",b);
}