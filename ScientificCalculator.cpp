#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
int mul,sum,a[20],b,c,n,ch,i;
double d = 0.0;
cout<<"press 1 -> to find square"<<endl;
cout<<"press 2 -> to find underroot"<<endl;
cout<<"press 3 -> to find addition"<<endl;
cout<<"press 4 -> to find subtraction"<<endl;
cout<<"press 5 -> to find multiplication"<<endl;
cout<<"press 6 -> to find division"<<endl;
cout<<"press 7 -> for checking a no. for prime no. or not"<<endl;
cout<<"press 8 -> for  checking a no. for even or odd no."<<endl;
cout<<"press 9 -> for checking a no.for finding trigonometric calculations in it"<<endl;
cout<<"press 10 -> for finding power of any no."<<endl;
cout<<"press 11-> for finding logarithm of any no."<<endl;
cout<<"enter your choice\n";
cin>>ch;
switch(ch)
{
case 1:
cout<<"enter the no. whose square u want"<<endl;
cin>>b;
cout<<"square of given no. is"<<b*b;
break;

case 2:
cout<<"enter the no. whose underroot you want\n";
cin>>b;
cout<<"underroot of given no. is"<<sqrt(b);
break;

case 3:
cout<<"enter the count of no. you want to add ie.(n<20)"<<endl;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
sum+=a[i];
cout<<"addition of"<<n<<"no. is"<<sum;
break;

case 4:
cout<<"enter two no. you want to subtract:--"<<endl;
cin>>b>>c;
cout<<"subtraction of"<<b<<"and"<<c<<"is"<<b-c;
break;

case 5:
cout<<"enter the count of no. you want to multiply ie.(n<20)"<<endl;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
mul=1;
for(i=0;i<n;i++)
{
mul=mul*a[i];
}
cout<<"multiplication of  "<<n<<" no. is "<<mul;
break;

case 6:
cout<<"enter two no. you want to divide:--"<<endl;
cin>>b>>c;
cout<<"division of"<<b<<"and"<<c<<"is"<<b/c;
break;

case 7:
cout<<"enter the no. you want to check for prime no."<<endl;
cin>>n;
for(i=2;i <= n/2;i++)
{
if(n%i==0)
{
cout<<n<<" is not a prime no."<<endl;

}
else
{
cout<<n<<" is a prime no."<<endl;
break;
}
}
break;

case 8:
cout<<"enter a  no."<<endl;
cin>>b;
if(b%2==0)
cout<<b<<"is"<<"even no."<<endl;
cout<<b<<"is odd no."<<endl;
break;


case 9:
cout<<"1->for sin\n";
cout<<"2->for cos\n";
cout<<"3->for tan\n";
cout<<"4->for sec\n";
cout<<"5->for cosec\n";
cout<<"6->for cot\n";
cout<<"7->for sin(inverse)\n";
cout<<"8->for cos(inverse)\n";
cout<<"9->for tan(inverse)\n";

cout<<"\n\nenter the choice"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nenter a no."<<endl;
cin>>b;
cout<<"\nsin of"<<b<<"is"<<sin(b)<<endl;
break;

case 2:
cout<<"\nenter a no."<<endl;
cin>>b;
cout<<"\ncos of"<<b<<"is"<<cos(b)<<endl;
break;

case 3:
cout<<"\nenter a no."<<endl;
cin>>b;
cout<<"\ntan of"<<b<<"is"<<tan(b)<<endl;
break;

case 4:
cout<<"\nenter a no."<<endl;
cin>>b;
cout<<"\nsec of"<<b<<"is"<<(1/cos(b))<<endl;
break;

case 5:
cout<<"\nenter a no."<<endl;
cin>>b;
cout<<"\ncosec of"<<b<<"is"<<(1/sin(b))<<endl;
break;

case 6:
cout<<"\nenter a no."<<endl;
cin>>b;
cout<<"\ncot of"<<b<<"is"<<(1/tan(b))<<endl;
break;

case 7:
cout<<"\nenter a no."<<endl;
cin>>d;
cout<<"\nsin(inverse) of"<<d<<"is"<<asin(d)<<endl;
break;

case 8:
cout<<"\nenter a no."<<endl;
cin>>d;
cout<<"\ncos(inverse) of"<<d<<"is"<<acos(d)<<endl;
break;

case 9:
cout<<"\nenter b no."<<endl;
cin>>d;
cout<<"\ntan(inverse) of"<<d<<"is"<<atan(d)<<endl;
break;

default:
cout<<"wrong choice entered"<<endl;
}
break;

case 10:
cout<<"enter the base no. and exponent no."<<endl;
cin>>b>>c;
cout<<"power of"<<b<<"raise to the power"<<c<<"is:->"<<pow(b,c)<<endl;
break;

case 11:
cout<<"enter the no."<<endl;
cin>>n;
cout<<"logarithm or log of given no. is"<<log(n);
break;

default:
cout<<"wrong choice entered\n";
}
getch();
return 0;
}
