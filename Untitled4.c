
#include <stdio.h>
#include <stdlib.h>

int main()
{
int level;
int bs;  //bs = basic salary
char jn; //jn = job number
float gross_salary;
float salary;


printf("Enter the job number of the employee:");
scanf("%s",&jn);
printf("Enter the basic paymennt of the employee:");
scanf("%d",&bs);
printf("Enter the level of employee: level 0");
scanf("%d",&level);

switch(level)
{
        case 1:
            {

            gross_salary= bs+bs*0.25+1000+500 ;

             if (gross_salary<2000)
             {
                 printf("salary is %.3f",gross_salary);
             }

                 else if (2000<=gross_salary && gross_salary<4000)
                 {
                     salary = gross_salary - gross_salary * 0.03 ;
                     printf("salary is %.3f",salary);
                 }

                     else if(4000<=gross_salary && gross_salary<6000)
                     {
                        salary = gross_salary - gross_salary * 0.05 ;
                        printf("salary is %.3f",salary);
                     }

                        else if (gross_salary>=2000)
                        {
                            salary = gross_salary - gross_salary * 0.08 ;
                            printf("salary is %.3f",salary);
                        }
            }
            break;


        case 2:
            {

            gross_salary= bs+bs*0.25+750+200 ;

              if (gross_salary<2000)
              {
                     printf("salary is %.3f",gross_salary);
              }

                     else if (2000<=gross_salary && gross_salary<4000)
                     {
                         salary = gross_salary - gross_salary * 0.03 ;
                         printf("salary is %.3f",salary);
                     }

                         else if(4000<=gross_salary && gross_salary<6000)
                         {
                            salary = gross_salary - gross_salary * 0.05 ;
                            printf("salary is %.3f",salary);
                         }

                            else if (gross_salary>=2000)
                            {
                                salary = gross_salary - gross_salary * 0.08 ;
                                printf("salary is %.3f",salary);
                            }
            }
            break;

        case 3:
            {
            gross_salary= bs+bs*0.25+500+100 ;

             if (gross_salary<2000)
             {
                 printf("salary is %.3f",gross_salary);
             }

                 else if (2000<=gross_salary && gross_salary<4000)
                 {
                     salary = gross_salary - gross_salary * 0.03 ;
                     printf("salary is %.3f",salary);
                 }

                     else if(4000<=gross_salary && gross_salary<6000)
                     {
                        salary = gross_salary - gross_salary * 0.05 ;
                        printf("salary is %.3f",salary);
                     }

                        else if (gross_salary>=2000)
                        {
                            salary = gross_salary - gross_salary * 0.08 ;
                            printf("salary is %.3f",salary);
                        }

                }
                break;
        case 4:
            {
                gross_salary= bs+bs*0.25+250 ;

                 if (gross_salary<2000)
                 {
                     printf("salary is %.3f",gross_salary);
                 }

                     else if (2000<=gross_salary && gross_salary<4000)
                     {
                         salary = gross_salary - gross_salary * 0.03 ;
                         printf("salary is %.3f",salary);
                     }

                         else if(4000<=gross_salary && gross_salary<6000)
                         {
                            salary = gross_salary - gross_salary * 0.05 ;
                            printf("salary is %.3f",salary);
                         }

                            else if (gross_salary>=2000)
                            {
                                salary = gross_salary - gross_salary * 0.08 ;
                                printf("salary is %.3f",salary);
                            }

            }
            break;


}

    return 0;
}
