#include<stdio.h>
#include<conio.h>
void coach();
void booka();
void bookaa();
void bookaaa();
void tryagain();
static int a=100,aa=231,aaa=98;
void main()
{
int ch;
clrscr();
printf("\n\t\t\t\tWelcome to IRCTC demo");
printf("\nAvailable train in Tamilnadu:");
printf("\n\t\t1.Nellai->Chennai\n\t\t2.Chennai->Nellai\n\t\t3.Tenkasi->Chennai");
do
{
printf("\nWhich you want to train ticket booking");
printf("\nPress 1:continue booking");
printf("\npress 2:Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
coach();
break;
}
case 2:
{
exit(0);
break;
}
default:
printf("\nPress correct choice\n");
}
getch();
}while(1);
}
void coach()
{
int co;
printf("\n\t\t\tAvailable coaches");
printf("\n1.Sleeper coach\n2.2A coach\n3.3A coach");
printf("\nPlease enter your coach\n");
scanf("%d",&co);
if(co==1)
{
printf("\nAvailable Seats in Sleeper Coach:%d",a);
booka();
}
else if(co==2)
{
printf("\nAvailable Seats in 2A Coach:%d",aa);
bookaa();
}
else if(co==3)
{
printf("\nAvailable Seats in 3A Coach:%d",aaa);
bookaaa();
}
}
void booka()
{
int bt;
printf("\nHow many booking tickets in this coach\n");
scanf("%d",&bt);
if(a>bt)
a-=bt;
else
{
printf("\navailable tickets is %d.So please Try again",a);
booka();
}
tryagain();
}
void bookaa()
{
int bt;
printf("\nHow many booking tickets in this coach\n");
scanf("%d",&bt);
if(aa>bt)
aa-=bt;
else
{
printf("\navailable tickets is %d.So please Try again",aa);
bookaa();
}
tryagain();
}
void bookaaa()
{
int bt;
printf("\nHow many booking tickets in this coach\n");
scanf("%d",&bt);
if(aaa>bt)
aaa-=bt;
else
{
printf("\navailable tickets is %d.So please Try again",aaa);
bookaaa();
}
tryagain();
}
void tryagain()
{
int cho;
printf("\nTry again the IRCTC train ticket booking\n");
do
{
printf("\n1.YES\n2.NO\n");
scanf("%d",&cho);
switch(cho)
{
case 1:
main();
break;
case 2:
exit(0);
break;
default:
printf("\nEnter your correct choice\n");
}
}while(1);
}
