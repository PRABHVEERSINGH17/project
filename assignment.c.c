#include<stdio.h>
void main()
{
    int rollno;
    char name[30];
    float sub1,sub2,sub3,sub4,sub5;
    float per,avg;
    printf("\n enter the student roll no:");
    scanf("%d",&rollno);
    printf("enter the student name:");
    scanf("%s",&name);
    printf("enter the marks of subject 1:");
    scanf("%f",&sub1);
    printf("enter the marks of subject 2:");
    scanf("%f",&sub2);
    printf("enter the marks of subject 3: ");
    scanf("%f",&sub3);
    printf("enter the marks of subject 4:");
    scanf("%f",&sub4);
    printf("enter the marks of subject 5:");
    scanf("%f",&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    printf("\n the total marks:%2f");
    per=total/500*100;
    avg=(total/5);
    printf("\n the percentage mark:%2f",per);
    printf("\n the average mark:%2f",avg);
    if(per>=80)
    printf("\n grade: A");
    else if("per>60")
    printf("\n grade b");
    else if("per>=45");
    printf("\n grade:c");
    else if ("per>=35");
    printf("\n grade: d");
    else if("per<=35");
printf("fail");
return 0;
    
}