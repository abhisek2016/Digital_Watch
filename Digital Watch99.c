#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    int h;
    int m;
    int s;
    int date,month,year,temp1,temp2;
    printf("                   ::::**MY Digital watch**::::                    \n");
    printf("\nEnter Todays Date:");
    scanf("%d",&date);
    printf("\nEnter Month:");
    scanf("%d",&month);
    printf("\nEnter Year:");
    scanf("%d",&year);
    long int i;
    printf("\nSet clock Time:\n");
    printf("Hour:");
    scanf("%d",&h);
    printf("Minute:");
    scanf("%d",&m);
    printf("Second:");
    scanf("%d",&s);
    //Coding for time::
   ask:
   for(i=0;i<=509999999;i++);
   {
    s=s+1;
    if(s==60)
    {
        m=m+1;
        s=0;
    }
    if(m==60)
    {
        h=h+1;
        m=0;
    }
    if(h==24)
    {
        h=0;
        date=date+1;
    }
  }
  //CODING FOR DATE:::::
   if(month==01||month==03||month==05||month==07||month==8||month==10||month==12)
   {
       while(date==31&&h==24)
       {
           date=0;
       }
   }
   while(month==02)
   {
      if(year%4==0)
      {
          while(date==29&&h==24)
          {
              date=0;
          }
      }
   }
   while(month==04||month==06||month==9||month==11)
   {
       while(date==30&&h==24)
        date=0;
   }
   if(month==12&&date==31)
   {
       year=year+1;
       month=0;
   }
   system("cls");
   printf("         ::::::---*MY Digital Watch*---:::::            \n");
   printf("\nDATE:");printf("%d",date);printf(":");printf("%d",month);printf(":");printf("%d",year);
printf("\n Time:");
   printf("%d",h);printf(":");printf("%d",m);printf(":");printf("%d\n\n",s);printf("                                            ");printf("Abhisek Tiwari");

}
