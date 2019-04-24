#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<math.h>
//#include<bits.h>

long int num1;
long int num2;
       int pin;
    int newpin;
    double get[100];
int pin1=1011;
int pin2=1022;
int pin3=1033;
int pin4=1044;
int pin5=1055;
int atmno;
int con1;
int atmno1=199990;
int atmno2=199900;
int atmno3=199000;
int atmno4=190000;
int atmno5=100000;
int con;
   long int a[10];
          int i=0;
          int k=0;
          int p=0;
          int r=0;
          int q=0;
          int l=0;
          int f=0;
          int n;
                                                         //user database
char name1[20]="Shivam jha";
double amnt1=112788;
char name2[20]="Subham sameer";
double amnt2=121648;
char name3[20]="Shivam sharma";
double amnt3=545447;
char name4[20]="Sahil jolly";
double amnt4=123654;
char name5[20]="Sahil sharma";
double amnt5=158785;

void sayhi()
    {
        if(atmno1==atmno||atmno1==atmno||atmno2==atmno||atmno3==atmno||atmno4==atmno)
    {           if(atmno1==atmno)
                {printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""        Hi!! Shivam,\n\n\n");}
                if(atmno2==atmno)
                {printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""        Hi!! Shubham,\n\n\n");}
                if(atmno3==atmno)
                {printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""        Hi!! Shivam,\n\n\n");}
                if(atmno4==atmno)
                {printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""        Hi!! Sahil,\n\n\n");}
                if(atmno5==atmno)
                {printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""        Hi!! Sahil,\n\n\n");}
      }
     }

     void warning()
     {
         printf("\n\n\n\n\n");
           printf("\t""\t""\t""\t""\t""\t""""WARNING:- You have only THREE remaining attempts,Please enter correct credential  ""\n\n");
           printf("\t""\t""\t""\t""\t""\t""\t""\t"" OTHERWISE your card will be blocked by BANK.\n\n");
     }
void cardblock()
     {
          if(atmno1==atmno)
          {
              atmno1=NULL;
          }
           if(atmno2==atmno)
          {
              atmno2=NULL;
          }
           if(atmno3==atmno)
          {
              atmno3=NULL;
          }
           if(atmno4==atmno)
          {
              atmno4=NULL;
          }
           if(atmno5==atmno)
          {
              atmno5=NULL;
          }
               printf("\n\n\n\n\n");
           printf("\t""\t""\t""\t""\t""\t""\t""SORRY!!!!!You are not an authorized user,your card has been blocked,\n ");
        printf("\t""\t""\t""\t""\t""\t""\t""Please contact to the nearest branch for further details.\n\n");
        }

                                                                         //Enquery section
void enquery()
{
     ENQ1:
    printf("\n\n");
    int q=1;
printf("\n\n\n\n\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""    ""----------------------------------\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""    ""You are in BALANCE ENQUERY section\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""    ""----------------------------------\n");
 printf("\n\n");

     sayhi();
  printf("\t""\t""\t"" PIN Number:");
  scanf("%d",&pin);
ENQ:
      if(pin1==pin && atmno1==atmno)
          {
              printf("\t""\t""\t""\t""\t""\t""\t""\t""ACCOUNT NO. :************1234\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""NAME:");
              printf(name1);
              printf("\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""Available Balance:");
              printf("%f",amnt1);
              printf(" RS/-\n\n");
              printf("\n\n\n\n\n\n");
              printf( "\t""\t""\t""\t""\t""\t""\t""Do you want to exit this section?If yes type 1 otherwise 0...\n");
              printf("\t""\t""\t""Type here:");
              scanf("%f",&con);
              printf("\n\n");
              if(con==0)
              {
                 if(con1==0)
                  {system("cls");}
                   goto ENQ1;

              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
          }

else if (pin2==pin && atmno2==atmno)
   {

              printf("\t""\t""\t""\t""\t""\t""\t""\t""ACCOUNT NO. :************1335\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""NAME:");
              printf(name2);
              printf("\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""Available Balance:");
              printf("%f",amnt2);
              printf( "RS/-\n\n");
              printf("\n\n\n\n\n\n");
              printf( "\t""\t""\t""\t""\t""\t""\t""Do you want to exit this section?If yes type 1 otherwise 0...\n");
              printf("\t""\t""\t""Type here:");
              scanf("%f",&con);
              printf("\n\n");
              if(con==0)
              {
                    if(con1==0)
                  {system("cls");}
                   goto ENQ1;

              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
   }
else if( pin3==pin && atmno3==atmno)
    {

              printf("\t""\t""\t""\t""\t""\t""\t""\t""ACCOUNT NO. :************1436\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""NAME:");
              printf(name3);
              printf("\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""Available Balance:");
              printf("%f",amnt3);
              printf( "RS/-\n\n");
              printf("\n\n\n\n\n\n");
              printf( "\t""\t""\t""\t""\t""\t""\t""Do you want to exit this section?If yes type 1 otherwise 0...\n");
              printf("\t""\t""\t""Type here:");
              scanf("%f",&con);
              printf("\n\n");
              if(con==0)
              { if(con1==0)
                  {system("cls");}
                   goto ENQ1;

              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
    }
else if(pin4==pin && atmno4==atmno)
    {

              printf("\t""\t""\t""\t""\t""\t""\t""\t""ACCOUNT NO. :************1537\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""NAME:");
              printf(name4);
              printf("\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""Available Balance:");
              printf("%f",amnt4);
              printf( "RS/-\n\n");
              printf("\n\n\n\n\n\n");
              printf( "\t""\t""\t""\t""\t""\t""\t""Do you want to exit this section?If yes type 1 otherwise 0...\n");
              printf("\t""\t""\t""Type here:");
              scanf("%f",&con);
              printf("\n\n");
              if(con==0)
              {
                   if(con1==0)
                  {system("cls");}
                   goto ENQ1;

              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
    }
else if(pin5==pin && atmno5==atmno)
   {

              printf("\t""\t""\t""\t""\t""\t""\t""\t""ACCOUNT NO. :************1638\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""NAME:");
              printf(name5);
              printf("\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""Available Balance:");
              printf("%f",amnt5);
              printf( "RS/-\n\n");
              printf("\n\n\n\n\n");
              printf( "\t""\t""\t""\t""\t""\t""\t""Do you want to exit this section?If yes type 1 otherwise 0...\n");
              printf("\t""\t""\t""Type here:");
              scanf("%f",&con);
              printf("\n\n");
              if(con==0)
              {
                   if(con1==0)
                  {system("cls");}
                   goto ENQ1;

              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
   }

   else
   {
   if(r>=0)
     {printf("\t""\t""\t""\t""\t""\t""\t""\t""SORRY!!You have entered Wrong PIN Number\n\n");
       ++r;}

if(r==3)
       {    warning();
       }

       if(q<3)
    {
        {  printf("\t""\t""\t""Enter PIN AGAIN:");
           scanf("%d",&pin);}
           ++q;
           goto ENQ;
        }
     else if(r>=6)

        {
      cardblock();
}    }

system("pause");
system("cls");
}
                                                       //withdrawal section
int withdrawal()
{ abcd:
     printf("\n\n");
  float issu=0;
  printf("\n\n\n\n\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""    ""----------------------------------\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""    ""You are in CASH WITHDRAWAL section\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""    ""----------------------------------\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""Enter your 4 digit PIN Number of your card:-\n\n");
int m=1;
int n=1;
printf("\n\n");
sayhi();
printf("\t""\t""\t"" PIN Number:");
scanf("%d",&pin);


abc:
if(pin1== pin && atmno1==atmno)
    {       printf("\t""\t""\t""\t""\t""\t""\t""You are now Logged in your account and can withdraw your cash!\n\n");
            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""Card Holder's NAME:");
            printf(name1);
            printf("\n\n");
            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""Available AMOUNT=");
            printf("%f",amnt1);
            printf("  ""RS/-\n\n");
      xyz:  printf("\t""\t""\t""How much you want to withdraw?:");
            scanf("%f",&issu);
            printf("\n\n");
          if(issu>amnt1)
           {  while(k<10)
           {
                printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""    ""INSUFFICIENT BALANCE!!\n""\t""\t""\t""\t""\t""\t""\t""\t""Please!! Withdraw A/C to your available balance.\n\n");
                goto xyz;
            ++k;}
        return 1;
            }

            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""Processing....\n\n\n\n");
            if(issu>0)
           {
               printf("\t""\t""\t""\t""\t""\t""\t""\t""DONE!!!!!you can collect %f",issu);
            printf("" "RS/-\n\n");
            }
          get[++k]=issu;
          amnt1=amnt1-issu;
            printf("\t""\t""\t""\t""\t""\t""\t""\t""Your current Available Balance:");
            printf("%f",amnt1);
            printf("  ""RS/-\n\n");
            printf("\n\n\n\n\n\n");
            printf( "\t""\t""\t""\t""\t""\t""\t""Do you want more transactions? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con1);
              printf("\n\n");
              if(con1==1)
              {   if(con1==1)
                  {system("cls");}
                   goto abcd;

              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
 }

else if(pin2==pin&&atmno2==atmno)
   {
            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""You are now Logged in your account and can withdraw your cash!\n\n");
                 printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""Card Holder's NAME:");
            printf(name2);
            printf("\n\n");
            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""Available AMOUNT=");
            printf("%f",amnt2);
            printf(""  "RS/-\n\n");
         xyz1:   printf("\t""\t""\t""How much you want to withdraw?:");
            scanf("%f",&issu);
            printf("\n\n");
                      if(issu>amnt2)
           {  while(k<10)
           {
               printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""    ""INSUFFICIENT BALANCE!!\n""\t""\t""\t""\t""\t""\t""\t""\t""Please!! Withdraw A/C to your available balance.\n\n");
                goto xyz1;
            ++k;}
        return 1;
            }
            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""Processing....\n\n");
            if(issu>0)
           {
               printf("\t""\t""\t""\t""\t""\t""\t""\t""DONE!!!!!you can collect %f",issu);
            printf("" "RS/-\n\n");
            }
              get[++k]=issu;

            amnt2=amnt2-issu;
            printf("\t""\t""\t""\t""\t""\t""\t""\t""Your current Available Balance:");
            printf("%f",amnt2);
             printf(""  "RS/-\n\n");
              printf( "\t""\t""\t""\t""\t""\t""\t""Do you want more transactions? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con1);
              printf("\n\n");
              if(con1==1)
              {
                   if(con1==1)
                  {system("cls");}
                   goto abcd;
              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
            printf("\n\n\n\n\n\n");}
else if(pin3==pin&&atmno3==atmno)
    {
         printf("\t""\t""\t""\t""\t""\t""\t""\t""\t" "You are now Logged in your account and can withdraw your cash!\n\n");
          printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""Card Holder's NAME:");
            printf(name3);
            printf("\n\n");
            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""Available AMOUNT=");
            printf("%f",amnt3);
            printf("  ""RS/-\n\n");
       xyz2:  printf("\t""\t""\t""How much you want to withdraw?:");
       printf("\n\n");
                      if(issu>amnt1)
           {  while(k<10)
           {
                printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""    ""INSUFFICIENT BALANCE!!\n""\t""\t""\t""\t""\t""\t""\t""\t""Please!! Withdraw A/C to your available balance.\n\n");
                goto xyz2;
            ++k;}
        return 1;
            }
            scanf("%f",&issu);
            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""Processing....\n\n");
             if(issu>0)
           {
               printf("\t""\t""\t""\t""\t""\t""\t""\t""DONE!!!!!you can collect %f",issu);
                 get[++k]=issu;

            printf("" "RS/-\n\n");
            }
            amnt3=amnt3-issu;
            printf("\t""\t""\t""\t""\t""\t""\t""\t""Your current Available Balance:");
            printf("%f",amnt3);
             printf("  ""RS/-\n\n");
              printf( "\t""\t""\t""\t""\t""\t""\t""Do you want more transactions? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con1);
              printf("\n\n");
              if(con1==1)
              {
                   if(con1==1)
                  {system("cls");}
                   goto abcd;}
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
            printf("\n\n\n\n\n\n");
    }
else if(pin4==pin&&atmno4==atmno)
    {
            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t" "You are now Logged in your account and can withdraw your cash!\n\n");
             printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""Card Holder's NAME:");
            printf(name4);
            printf("\n\n");
            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""Available AMOUNT=");
            printf("%f",amnt4);
            printf(""  "RS/-\n\n");
         xyz3:printf("\t""\t""\t""How much you want to withdraw?:");
              scanf("%f",&issu);
            printf("\n\n");
                      if(issu>amnt3)
           {  while(k<10)
           {
                printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""    ""INSUFFICIENT BALANCE!!\n""\t""\t""\t""\t""\t""\t""\t""\t""Please!! Withdraw A/C to your available balance.\n\n");
                goto xyz3;
            ++k;}
        return 1;
            }
            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""Processing....\n\n");
             if(issu>0)
           {
               printf("\t""\t""\t""\t""\t""\t""\t""\t""DONE!!!!!you can collect %f",issu);
            printf("" "RS/-\n\n");
            }
              get[++k]=issu;

            amnt4=amnt4-issu;
            printf("\t""\t""\t""\t""\t""\t""\t""\t""Your current Available Balance:");
            printf("%f",amnt4);
             printf(""  "RS/-\n\n");
              printf( "\t""\t""\t""\t""\t""\t""\t""Do you want more transactions? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con1);
              printf("\n\n");
              if(con1==1)
              {
                  if(con1==1)
                  {system("cls");}
                   goto abcd;
              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
            printf("\n\n\n\n\n\n");
    }
else if(pin5==pin&&atmno5==atmno)
   {
            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t" "You are now Logged in your account and can withdraw your cash!\n\n");
             printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""Card Holder's NAME:");
            printf(name5);
            printf("\n\n");
            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""Available AMOUNT=");
            printf("%f",amnt5);
            printf(""  "RS/-\n\n");
          xyz4: printf("\t""\t""\t""How much you want to withdraw?:");
          scanf("%f",&issu);
          printf("\n\n");
                      if(issu>amnt5)
           {  while(k<10)
           {
               printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""    ""INSUFFICIENT BALANCE!!\n""\t""\t""\t""\t""\t""\t""\t""\t""Please!! Withdraw A/C to your available balance.\n\n");
                goto xyz4;
            ++k;}
        return 1;
            }

            printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""Processing....\n\n");
 if(issu>0)
           {
               printf("\t""\t""\t""\t""\t""\t""\t""\t""DONE!!!!!you can collect %f",issu);
            printf("" "RS/-\n\n");
            }
              get[++k]=issu;

            amnt5=amnt5-issu;
            printf("\t""\t""\t""\t""\t""\t""\t""\t""Your current Available Balance:");
            printf("%f",amnt5);
             printf(""  "RS/-\n\n");
              printf( "\t""\t""\t""\t""\t""\t""\t""Do you want more transactions? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con1);
              printf("\n\n");
              if(con1==1)
              {
 if(con1==1)
                  {system("cls");}
                   goto abcd;              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
            printf("\n\n\n\n\n\n");
    }
  else
{
                if(p>=0&&p!=6)
               {printf("\t""\t""\t""\t""\t""\t""\t""\t""         ""\t""Incorrect PIN!!...\n\n");
                 ++p; }
               if(p==3)
       {
            warning();
       }
    if(m<3)
    {
        {  printf("\t""\t""\t"" Enter PIN AGAIN:");
           scanf("%d",&pin);}
           ++m;
           goto abc;
        }
     else if(p>=6)

        {
             cardblock();
        }
}
system("pause");
system("cls");
}
                                                       //statement
void statement()

{  int v=1;
   int h=0;
   int con4;
  printf("\n\n\n");
       printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""---------------------------------\n");
    printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""You are in MINI STATEMENT section\n");
     printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""---------------------------------\n");
printf("\n\n");
sayhi();

       printf("\t""\t""\t""Enter PIN number:");
       scanf("%d",&pin);
       printf("\n\n");
STAT:
      if(pin1==pin && atmno1==atmno)
      {       printf("\t""\t""\t""\t""\t""\t""\t""\t""ACCOUNT NO. :************1234\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""NAME:");
              printf(name1);
              printf("\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""Available Balance:");
              printf("%f",amnt1);
              printf(" RS/-\n\n");
                printf("\n\n\n");
 printf("\t""\t""\t""\t""\t""\t""\t""\t""Your Last FIVE transactions:\n\n");
                for(i=k;i>=k-4;i--)
               {    printf("\t""\t""\t""\t""\t""\t""\t""\t""%d",v);
                    printf("th Last transaction:");
                    printf(" ""%f",get[i]);
                    printf(" RS/-\n\n");
                   ++v;
               }
               printf("\n\n\n\n\n");
                printf( "\t""\t""\t""\t""\t""\t""\t""Do you want receipt? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con4);
              printf("\n\n");
              if(con4==1)
              {
                    printf( "\t""\t""\t""\t""\t""\t""\t""        You can collect your receipt...\n");
               }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""    ThankYou for saving paper\n\n\n\n");
              }
            printf("\n\n\n");


      }
 else   if(pin2==pin && atmno2==atmno)
      {       printf("\t""\t""\t""\t""\t""\t""\t""\t""ACCOUNT NO. :************1234\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""NAME:");
              printf(name2);
              printf("\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""Available Balance:");
              printf("%f",amnt2);
              printf(" RS/-\n\n");
                printf("\n\n\n");
 printf("\t""\t""\t""\t""\t""\t""\t""\t""Your Last FIVE transactions:\n\n");
                for(i=k;i>=k-4;i--)
               {    printf("\t""\t""\t""\t""\t""\t""\t""\t""%d",v);
                    printf("th Last transaction:");
                    printf(" ""%f",get[i]);
                    printf(" RS/-\n\n");
                   ++v;
               }
               printf("\n\n\n\n\n");
                printf( "\t""\t""\t""\t""\t""\t""\t""Do you want receipt? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con1);
              printf("\n\n");
              if(con4==1)
              {
                    printf( "\t""\t""\t""\t""\t""\t""\t""You can collect your receipt...\n");     }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""   ThankYou for saving paper\n\n\n\n");
              }
            printf("\n\n\n");


      }
   else    if(pin3==pin && atmno3==atmno)
      {       printf("\t""\t""\t""\t""\t""\t""\t""\t""ACCOUNT NO. :************1234\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""NAME:");
              printf(name3);
              printf("\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""Available Balance:");
              printf("%f",amnt3);
              printf(" RS/-\n\n");
                printf("\n\n\n");
 printf("\t""\t""\t""\t""\t""\t""\t""\t""Your Last FIVE transactions:\n\n");
                for(i=k;i>=k-4;i--)
               {    printf("\t""\t""\t""\t""\t""\t""\t""\t""%d",v);
                    printf("th Last transaction:");
                    printf(" ""%f",get[i]);
                    printf(" RS/-\n\n");
                   ++v;
               }
               printf("\n\n\n\n\n");
                printf( "\t""\t""\t""\t""\t""\t""\t""Do you want receipt? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con1);
              printf("\n\n");
              if(con4==1)
              {
                    printf( "\t""\t""\t""\t""\t""\t""\t""You can collect your receipt...\n");     }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t    ""ThankYou for saving paper\n\n\n\n");
              }
            printf("\n\n\n");


      }
  else     if(pin4==pin && atmno4==atmno)
      {       printf("\t""\t""\t""\t""\t""\t""\t""\t""ACCOUNT NO. :************1234\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""NAME:");
              printf(name4);
              printf("\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""Available Balance:");
              printf("%f",amnt4);
              printf(" RS/-\n\n");
                printf("\n\n\n");
 printf("\t""\t""\t""\t""\t""\t""\t""\t""Your Last FIVE transactions:\n\n");
                for(i=k;i>=k-4;i--)
               {    printf("\t""\t""\t""\t""\t""\t""\t""\t""%d",v);
                    printf("th Last transaction:");
                    printf(" ""%f",get[i]);
                    printf(" RS/-\n\n");
                   ++v;
               }
               printf("\n\n\n\n\n");
                printf( "\t""\t""\t""\t""\t""\t""\t""Do you want receipt? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con1);
              printf("\n\n");
              if(con4==1)
              {
                    printf( "\t""\t""\t""\t""\t""\t""\t""You can collect your receipt...\n");     }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t   ""ThankYou for saving paper\n\n\n\n");
              }
            printf("\n\n\n");


      }
  else    if(pin5==pin && atmno5==atmno)
      {       printf("\t""\t""\t""\t""\t""\t""\t""\t""ACCOUNT NO. :************1234\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""NAME:");
              printf(name5);
              printf("\n\n");
              printf("\t""\t""\t""\t""\t""\t""\t""\t""Available Balance:");
              printf("%f",amnt5);
              printf(" RS/-\n\n");
                printf("\n\n\n");
 printf("\t""\t""\t""\t""\t""\t""\t""\t""Your Last FIVE transactions:\n\n");
                for(i=k;i>=k-4;i--)
               {    printf("\t""\t""\t""\t""\t""\t""\t""\t""%d",v);
                    printf("th Last transaction:");
                    printf(" ""%f",get[i]);
                    printf(" RS/-\n\n");
                   ++v;
               }
               printf("\n\n\n\n\n");
                printf( "\t""\t""\t""\t""\t""\t""\t""Do you want receipt? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con1);
              printf("\n\n");
              if(con4==1)
              {
                    printf( "\t""\t""\t""\t""\t""\t""\t""You can collect your receipt...\n");
                         }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t   ""ThankYou for saving paper\n\n\n\n");
              }
            printf("\n\n\n");
            }

else
    {

       if(f<=5&&f!=6)
       {printf("\t""\t""\t""\t""\t""\t""\t""\t""     ""WRONG PIN!!Enter again your PIN.\n\n");
       ++f;}
       if(f==3)
       {
                warning();
       }
       if(h<2)
       {
          {printf("\t""\t""\t""  Enter PIN AGAIN:");
              scanf("%d",&pin);}
             ++h;
           goto STAT;
        }
       else if(f>=6)
        {
         cardblock();
       }
    }
system("pause");
system("cls");
}

void pinchange()
{
    pnch:
     printf("\n\n\n");
   int con2;
   int c=0;
   printf("\t""\t""\t""\t""\t""\t""\t""\t""       ""-------------------------------\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""You are in PIN CHANGE section\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""       ""-------------------------------\n");
printf("\n\n");
   sayhi();
pcx: printf("\t""\t""\t""Enter your EXISTING pin number:");
scanf("%d",&pin);
printf("\n\n");
pnch1:
if(pin1==pin && atmno1==atmno)
{  printf("\n\n");
 printf("\t""\t""\t""\t""\t""\t""\t""\t""""NOTE:- Number Starting with ZEROS have no effect.\n\n");
   printf("\t""\t""\t""Enter 4-digit NEW PIN Number:");
   scanf("%d",&newpin);
  long long n;
  n=newpin;
    int count = 0;
    while(n != 0)
    {
        n /= 10;
        ++count;
    }

 if(count<4 || count>4)
{       printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""Sorry!!This PIN is  Unrealistic,,,try something else\n\n\n");
    goto pcx;
}


pin1=newpin;

 printf("\n\n\n\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""   ""Your pin has been changed Successfully.\n\n\n");
 printf( "\t""\t""\t""\t""\t""\t""\t""Do you want to SAVE changes? TYPE 1 for SAVE otherwise 0 for again change.\n");
              printf("\t""\t""\t""Type here:");
              scanf("%f",&con2);
              printf("\n\n");
              if(con2==0)
              {
                 if(con2==0)
                  {system("cls");}
                   goto pnch;

              }
  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
}

else if(pin2==pin && atmno2==atmno)
{

     printf("\n\n");
 printf("\t""\t""\t""\t""\t""\t""\t""\t""""NOTE:- Number Starting with ZEROS have no effect.\n");
   printf("\t""\t""\t""Enter 4-digit NEW PIN Number:");
   scanf("%d",&newpin);
  long long n;
  n=newpin;
    int count = 0;
    while(n != 0)
    {
        n /= 10;
        ++count;
    }

 if(count<4 || count>4)
{
    printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""Sorry!!This PIN is  Unrealistic,,,try something else\n\n\n");
    goto pcx;
}
pin2=newpin;
 printf("\n\n\n\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""   ""Your pin has been changed Successfully.\n\n\n");
 printf( "\t""\t""\t""\t""\t""\t""\t""Do you want to SAVE changes? TYPE 1 for SAVE otherwise 0 for again change.\n");
              printf("\t""\t""\t""Type here:");
              scanf("%f",&con2);
              printf("\n\n");
              if(con2==0)
              {
                 if(con2==0)
                  {system("cls");}
                   goto pnch;

              }
  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
}

else if(pin3==pin && atmno3==atmno)
{

   printf("\n\n");
 printf("\t""\t""\t""\t""\t""\t""\t""\t""""NOTE:- Number Starting with ZEROS have no effect.\n");
   printf("\t""\t""\t""Enter 4-digit NEW PIN Number:");
   scanf("%d",&newpin);
  long long n;
  n=newpin;
    int count = 0;
    while(n != 0)
    {
        n /= 10;
        ++count;
    }
 if(count<4 || count>4)
{
    printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""Sorry!!This PIN is  Unrealistic,,,try something else\n\n\n");
    goto pcx;
}
pin3=newpin;
 printf("\n\n\n\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""   ""Your pin has been changed Successfully.\n\n\n");
 printf( "\t""\t""\t""\t""\t""\t""\t""Do you want to SAVE changes? TYPE 1 for SAVE otherwise 0 for again change.\n");
              printf("\t""\t""\t""Type here:");
              scanf("%f",&con2);
              printf("\n\n");
              if(con2==0)
              {
                 if(con2==0)
                  {system("cls");}
                   goto pnch;

              }
  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
}
else if(pin4==pin && atmno4==atmno)
{

    printf("\n\n");
 printf("\t""\t""\t""\t""\t""\t""\t""\t""""NOTE:- Number Starting with ZEROS have no effect.\n");
   printf("\t""\t""\t""Enter 4-digit NEW PIN Number:");
   scanf("%d",&newpin);
  long long n;
  n=newpin;
    int count = 0;
    while(n != 0)
    {
        n /= 10;
        ++count;
    }
   if(count<4 || count>4)
{
    printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""Sorry!!This PIN is  Unrealistic,,,try something else\n\n\n");
    goto pcx;
}

 pin4=newpin;
  printf("\n\n\n\n");
 printf("\t""\t""\t""\t""\t""\t""\t""\t""   ""Your pin has been changed Successfully.\n\n\n");
  printf( "\t""\t""\t""\t""\t""\t""\t""Do you want to SAVE changes? TYPE 1 for SAVE otherwise 0 for again change.\n");
              printf("\t""\t""\t""Type here:");
              scanf("%f",&con2);
              printf("\n\n");
              if(con2==0)
              {
                 if(con2==0)
                  {system("cls");}
                   goto pnch;

              }
   printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
}


else if(pin5==pin && atmno5==atmno)
{

     printf("\n\n");
 printf("\t""\t""\t""\t""\t""\t""\t""\t""""NOTE:- Number Starting with ZEROS have no effect.\n");
   printf("\t""\t""\t""Enter 4-digit NEW PIN Number:");
   scanf("%d",&newpin);
  long long n;
  n=newpin;
    int count = 0;
    while(n != 0)
    {
        n /= 10;
        ++count;
    }
    if(count<4 || count>4)
{
    printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""Sorry!!This PIN is  Unrealistic,,,try something else\n\n\n");
    goto pcx;
}
      pin5=newpin;
      printf("\n\n\n\n");
      printf("\t""\t""\t""\t""\t""\t""\t""\t""   ""Your pin has been changed Successfully.\n\n\n");
       printf( "\t""\t""\t""\t""\t""\t""\t""Do you want to SAVE changes? TYPE 1 for SAVE otherwise 0 for again change.\n");
              printf("\t""\t""\t""Type here:");
              scanf("%f",&con2);
              printf("\n\n");
              if(con2==0)
              {
                 if(con2==0)
                  {system("cls");}
                   goto pnch;

              }
        printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
}


else
   {
       ++q;
       if(q<=5 && q!=6)
       {printf("\t""\t""\t""\t""\t""\t""\t""\t""       ""WRONG PIN!!Enter again your OLD PIN.\n\n");}
       if(q==3)
       {
            warning();
       }

        if(c<2)
       {
          {printf("\t""\t""\t""Enter your EXISTING pin number:");
              scanf("%d",&pin);}
             ++c;
           goto pnch1;
        }

        else if(q>=6)
        {
           cardblock();
          }
}
system("pause");
system("cls");
}


void cashdeposit()
{
    DEPO:

        printf("\n\n\n\n\n");
        int d=0;
    float cash=0;
   int con3;

printf("\t""\t""\t""\t""\t""\t""\t""\t""    ""-----------------------------------\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""     ""You are in CASH DIPOSITE section\n");
printf("\t""\t""\t""\t""\t""\t""\t""\t""    ""-----------------------------------\n");
printf("\n\n");
  sayhi();
    printf("\t""\t""\t""Enter PIN number:");
    scanf("%d",&pin);
    DEPO1:
    if(pin1==pin && atmno1==atmno)
    {      printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""Your Available Balance:");
        printf("%f",amnt1);
          printf("\n\n");
       printf("\t""\t""\t""Amount to be DEPOSITED:");
       scanf("%f",&cash);
       amnt1=amnt1+cash;
       printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""You have deposited:%f",cash);
        printf("  ""RS/-\n\n");
         printf("\n\n\n");
       printf("\t""\t""\t""\t""\t""\t""\t""\t""Your TOTAL Balance:");
       printf("%f",amnt1);
       printf("  ""RS/-\n\n");
         printf("\n\n\n");
        printf( "\t""\t""\t""\t""\t""\t""\t""Do you want deposit more CASH? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con3);
              printf("\n\n");
              if(con3==1)
              {
 if(con3==1)
                  {system("cls");}
                   goto DEPO;              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
            printf("\n\n\n\n\n\n");


    }
  else  if(pin2==pin && atmno2==atmno)
    {      printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""Your Available Balance:");
        printf("%f",amnt2);
          printf("\n\n");
       printf("\t""\t""\t""Amount to be DEPOSITED:");
       scanf("%f",&cash);
       amnt2=amnt2+cash;
       printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""You have deposited:%f",cash);
        printf("  ""RS/-\n\n");
         printf("\n\n\n");
       printf("\t""\t""\t""\t""\t""\t""\t""\t""Your TOTAL Balance:");
       printf("%f",amnt2);
       printf("  ""RS/-\n\n");
         printf("\n\n\n");
        printf( "\t""\t""\t""\t""\t""\t""\t""Do you want deposit more CASH? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con3);
              printf("\n\n");
              if(con3==1)
              {
 if(con3==1)
                  {system("cls");}
                   goto DEPO;              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
            printf("\n\n\n\n\n\n");


    }
  else  if(pin3==pin && atmno3==atmno)
    {      printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""Your Available Balance:");
        printf("%f",amnt3);
          printf("\n\n");
       printf("\t""\t""\t""Amount to be DEPOSITED:");
       scanf("%f",&cash);
       amnt3=amnt3+cash;
       printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""You have deposited:%f",cash);
        printf("  ""RS/-\n\n");
         printf("\n\n\n");
       printf("\t""\t""\t""\t""\t""\t""\t""\t""Your TOTAL Balance:");
       printf("%f",amnt3);
       printf("  ""RS/-\n\n");
         printf("\n\n\n");
        printf( "\t""\t""\t""\t""\t""\t""\t""Do you want deposit more CASH? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con3);
              printf("\n\n");
              if(con3==1)
              {
 if(con3==1)
                  {system("cls");}
                   goto DEPO;              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
            printf("\n\n\n\n\n\n");


    }
  else  if(pin4==pin && atmno4==atmno)
    {      printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""Your Available Balance:");
        printf("%f",amnt4);
          printf("\n\n");
       printf("\t""\t""\t""Amount to be DEPOSITED:");
       scanf("%f",&cash);
       amnt4=amnt4+cash;
       printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""You have deposited:%f",cash);
        printf("  ""RS/-\n\n");
         printf("\n\n\n");
       printf("\t""\t""\t""\t""\t""\t""\t""\t""Your TOTAL Balance:");
       printf("%f",amnt4);
       printf("  ""RS/-\n\n");
         printf("\n\n\n");
        printf( "\t""\t""\t""\t""\t""\t""\t""Do you want deposit more CASH? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con3);
              printf("\n\n");
              if(con3==1)
              {
 if(con3==1)
                  {system("cls");}
                   goto DEPO;              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
            printf("\n\n\n\n\n\n");


    }
 else   if(pin5==pin && atmno5==atmno)
    {      printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""Your Available Balance:");
        printf("%f",amnt5);
          printf("\n\n");
       printf("\t""\t""\t""Amount to be DEPOSITED:");
       scanf("%f",&cash);
       amnt5=amnt5+cash;
       printf("\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""\t""\t""You have deposited:%f",cash);
        printf("  ""RS/-\n\n");
         printf("\n\n\n");
       printf("\t""\t""\t""\t""\t""\t""\t""\t""Your TOTAL Balance:");
       printf("%f",amnt5);
       printf("  ""RS/-\n\n");
         printf("\n\n\n");
        printf( "\t""\t""\t""\t""\t""\t""\t""Do you want deposit more CASH? If yes type 1 otherwise 0\n");
              printf("\t""\t""\t""Type here:");
              scanf("%d",&con3);
              printf("\n\n");
              if(con3==1)
              {
 if(con3==1)
                  {system("cls");}
                   goto DEPO;              }
              else
              {
                  printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""THANKYOU\n\n\n\n");
              }
            printf("\n\n\n\n\n\n");
            }
    else
    {
         ++l;
       if(l<=5&&l!=6)
       {printf("\t""\t""\t""\t""\t""\t""\t""\t""     ""WRONG PIN!!Enter again your PIN.\n\n");}
       if(l==3)
       {
                warning();
        }

        if(d<2)
       {
          {printf("\t""\t""\t""  Enter PIN AGAIN:");
              scanf("%d",&pin);}
             ++d;
           goto DEPO1;
        }
       else if(l>=6)
        {
           cardblock();}
    }
system("pause");
system("cls");
}


main()
{

MAIN:
     printf("\n");
time_t t = time(NULL);
struct tm tm = *localtime(&t);
printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""                                        %d-%d-%d %d:%d:%d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday,tm.tm_hour, tm.tm_min, tm.tm_sec);
printf("\n");
       printf("\t\t-------------------------------------------------------------BANK OF INDIA----------------------------------------------------------------\n");

int ch;
while(1)
{     printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      printf("\t""\t""\t""\t""\t""\t""       (ONLY NUMERALS)\n");
      printf("\t""\t""\t""\t""\t""               Enter your ATM card Numbers: ");
      scanf("%d",&atmno);
      system("cls");
      printf("\n");
      printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""                                        %d-%d-%d %d:%d:%d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday,tm.tm_hour, tm.tm_min, tm.tm_sec);
      printf("\n");
      printf("\t\t-------------------------------------------------------------BANK OF INDIA----------------------------------------------------------------\n");
      if(atmno==1)
      {exit(0);}
      printf("\n\n\n\n\n\n\n");
       if(atmno1==atmno||atmno1==atmno||atmno2==atmno||atmno3==atmno||atmno4==atmno)
    {           if(atmno1==atmno)
                {printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""    WELCOM!! Shivam,\n\n\n");}
                if(atmno2==atmno)
                {printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""    WELCOM!! Shubham,\n\n\n");}
                if(atmno3==atmno)
                {printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""    WELCOM!! Shivam,\n\n\n");}
                if(atmno4==atmno)
                {printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""    WELCOM!! Sahil,\n\n\n");}
                if(atmno5==atmno)
                {printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""    WELCOM!! Sahil,\n\n\n");}
    printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""  "" --------------------------------\n\n");
    printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""  ""1. BALANCE ENQUERY\n""\n\n");
    printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""  ""2. CASH WITHDRWAWAL\n""\n\n");
    printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""  ""3. MINI STAEMENT""\n""\n\n");
    printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""  ""4. PIN CHANGE""\n""\n\n");
    printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""  ""5. CASH DEPOSIT""\n""\n\n");
    printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""  ""6. EXIT""\n""\n");
    printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""\t""  ""--------------------------------\n\n");
     printf("\t""\t""\t""Enter your choice(1-5):");
    scanf("%d" ,&ch);
    system("cls");
    switch(ch)
    {
    case 1:
        enquery();
        break;
    case 2:
        withdrawal();
        break;
    case 3:
        statement();
        break;
    case 4:
        pinchange();
        break;
    case 5:
        cashdeposit();
        break;
    case 6:
        exit(0);
        break;
     default:
          printf("\n\n\n\n\n\n\n");
        printf("\t""\t""\t""\t""\t""\t""SORRY!!!!you have not chosen any above given option yet,please try again....\n\n\n");
         system("pause");
        system("cls");

    }}
    else
        { printf("\t""\t""\t""\t""\t""\t""\t""\t""\t""INVALID CARD NUMBER!! TRY AGAIN...\n\n");
        system("pause");
        system("cls");}
goto MAIN;
}
getch();
}

