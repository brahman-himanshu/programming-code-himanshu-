#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int sub[5];
    int serialnumber;

};
int main()
{
    struct student stu[10];
    int i,n,j;
    printf("Enter the total no.of students\n");
    scanf("%d",&n);
    printf("Enter the details\n");
    for(j=0;j<n;j++)
    {
        printf("Enter the name\n");
        scanf("%s",stu[j].name );
        //fgets(stu[j].name,
        //zeof(stu[j].name ),stdin);
        printf("Enter the no s.no \n");
       scanf("%d",stu[j].serialnumber);
        printf("name of stu =");
        puts(stu[j].name);    }
        printf("s.no of stu =%d\n",stu[j].serialnumber);
        printf("Enter the sub marks");
            for(i=0;i<5;i++)
                {
                    scanf("%d",& stu[j].sub[i]);

                }
                printf("marks stu 1\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",stu[j].sub[i]);
    }
    return 0;
}