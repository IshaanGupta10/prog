/*WAP to check whether a given word exists in a file or not.
 If yes then find the number of times it occurs. */
#include <stdio.h>
#include <string.h>
int main ()
{
    FILE *fp;
    fp=fopen("ABCD","w");
    fprintf(fp,"Fox is a boy is .");
    fclose(fp);
    fp=fopen("ABCD","r");
    printf("Enter word to be searched.");
    char a[20];
    char b[20];
    scanf("%s",a);
    int count =0;
    while (1)
    {
        if (feof(fp))
            break;
        fscanf (fp, "%s",b);
        if (strcmp (b,a) == 0)
        {
            count++;
        }
    }
    if (count==0)
        printf("Not found.");
    else
        printf("Found %d times.",count);
    

}