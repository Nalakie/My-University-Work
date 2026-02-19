/*********************************
Author:DEdwards
Date: February 17,2026
Worksheet 5
Challenge Question     
***********************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int multiply(int answer);
int glaze();
int ans=0;//global variable declaration

int main()
{
    srand(time(NULL));
    int answer,count=0;
    float perc;
    for (int x=1;x<=10;x++)
    {
        printf("\nQ%d. ",x);
        answer = multiply(answer);
        if (answer==1)
        {
            count=count+1;
        } 
    }
    perc = (count / 10.00)*100;
    printf("\nThe Student Answered %d/10 questions correct and scored %.2f percent.",count,perc);
    return 0;
}
//---------------------------------------------------------------------------------------------------------------------------------------------
int multiply(int answer)
{
    int num1,num2,student_answer;
    answer = 0;
    ans = 0;
    num1=1+rand()%9;
    num2=1+rand()%9;
    printf("How Much is %d times %d: ",num1,num2);
    scanf("%d",&student_answer);
    if (student_answer==(num1*num2))
    {
        answer=1;
        ans=1;
        glaze();
    }else{
        glaze();
    }
    return answer;
}
//----------------------------------------------------------------------------------------------------------------------------------------------
int glaze()
{
    int good_or_bad;
    good_or_bad = 1+rand()%4;
    switch (good_or_bad)
    {
        case (1):
        {
            if (ans==1)
            {
                printf("Very Good\n");
            }else{
                printf("No. Please try again.\n");
            }
            break;
        }
        case (2):
        {
            if (ans==1)
            {
                printf("Excellent\n");
            }else{
                printf("Wrong. Try once more.\n");
            }
            break;
        }
        case (3):
        {
            if (ans==1)
            {
                printf("Nice work!\n");
            }else{
                printf("Dont give up!\n");
            }
            break;
        }
        case (4):
        {
            if (ans==1)
            {
                printf("Keep up the good work!\n");
            }else{
                printf("No. Keep trying.\n");
            }
            break;
        }
    }
}