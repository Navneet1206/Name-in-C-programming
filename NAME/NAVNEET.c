#include<stdio.h>
int main()
{
        int i,j,k;

        for(i=1;i<=5;i++)
        {

            for (j=1;j<=5;j++)
            {
                if(i==j||j==1||j==5)
                {
                    printf("\3");
                }
                else
                {
                    printf(" ");
                }
        
            }


        for(k=1;k<=4;k++)
        {

            printf(" ");

        }

        for (j=1;j<=5;j++)
            {
                if((i==1&&j!=1&&j!=2&&j!=4&&j!=5)||i==3||(i==2&&j!=1&&j!=3&&j!=5)||(i==4&&j!=2&&j!=3&&j!=4)||(i==5&&j!=2&&j!=3&&j!=4))
                {
                    printf("\3");
                }
                else
                {
                    printf(" ");
                }
        
            }


             for(k=1;k<=4;k++)
        {

            printf(" ");

        }


         for (j=1;j<=5;j++)
            {
                if((i==1&&j!=3&&j!=2&&j!=4)||(i==3&&j!=1&&j!=3&&j!=5)||(i==5&&j!=1&&j!=2&&j!=4&&j!=5))
                {
                    printf("\3");
                }
                else
                {
                    printf(" ");
                }
        
            }


            
             for(k=1;k<=4;k++)
        {

            printf(" ");

        }


         for (j=1;j<=5;j++)
            {
                if(i==j||j==1||j==5)
                {
                    printf("\3");
                }
                else
                {
                    printf(" ");
                }
        
            }


                     for(k=1;k<=4;k++)
        {

            printf(" ");

        }

             for (j=1;j<=5;j++)
            {
                if(i==1||i==3||i==5||j==1)
                {
                    printf("\3");
                }
                else
                {
                    printf(" ");
                }
        
            }


         for(k=1;k<=4;k++)
        {

            printf(" ");

        }



             for (j=1;j<=5;j++)
            {
                if(i==1||i==3||i==5||j==1)
                {
                    printf("\3");
                }
                else
                {
                    printf(" ");
                }
        
            }




         for(k=1;k<=4;k++)
        {

            printf(" ");

        }



         for (j=1;j<=5;j++)
            {
                if(j==3||i==1)
                {
                    printf("\3");
                }
                else
                {
                    printf(" ");
                }
        
            }


            printf("\n");
            
        }




        return 0;
}