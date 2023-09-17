#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
class guess{
public:
void guessing(int);
};
void guess :: guessing(int n)
{
int a;
int b=1;
while(b>0)
{
cout<<endl<<"enter you choice :";
cin>>a;
if(a>n)
cout<<"Guessing number is greater than original ...";
else if(a<n)
cout<<"Guessing number is less than original ... ";
else{
cout<<"You win....hurray!";
break;
}
b++;
} }
void main()
{
class guess ob;
int i;
clrscr();
cout<<"--------------------[ Guessing Game ]-------------------"<<endl;
i=rand()%10;
ob.guessing(i);
getch();
}
















