#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<cstring>
int ch,rick=0,res,taxi=0,bus=0,rcount=0,tcount=0,bcount=0,amt1=0,amt2=0,amt3=0,total=0,amt=0;
char pass[]={"delete@123"};
char p[20];
using namespace std;

void display()
{
cout<<"PRESS 1 FOR RICKSHAW \n";
cout<<"PRESS 2 FOR TAXI \n";
cout<<"PRESS 3 FOR BUS \n";
cout<<"PRESS 4 TO SHOW RECORD \n";
cout<<"PRESS 5 TO DELETE EXISTING RECORD \n";
cout<<"PRESS 6 FOR EXIT \n";
cout<<"ENTER THE CHOICE \n";
cout<<endl;

cin>>ch;

if(ch==1)
{
	rcount=rcount+1;
	rick=rcount;
	amt1=rick*100;
	cout<<endl;
	if(rick>5)
{
cout<<"*******************************"<<endl;
cout<<"No More Parking Space Available"<<endl;
cout<<"*******************************"<<endl;
display();
getch();
exit(0);
}

	display();
	cout<<endl;


 }

if(ch==2)
{
	 tcount=tcount+1;
	 taxi=tcount;
	 amt2=taxi*200;
	 cout<<endl;
	 if(taxi>5)

{
cout<<"*******************************"<<endl;
cout<<"No More Parking Space Available"<<endl;
cout<<"*******************************"<<endl;
getch();
exit(0);
}


	 display();
	 cout<<endl;

}

if(ch==3)
{
	 bcount=bcount+1;
	 bus=bcount;
	 amt3=bus*300;
	 cout<<endl;
		 if(bus>5)

{
cout<<"*******************************"<<endl;
cout<<"No More Parking Space Available"<<endl;
cout<<"*******************************"<<endl;
getch();
exit(0);
}
	 display();
	 cout<<endl;

}

if(ch==4)
{
cout<<endl;


total=rick+bus+taxi;
	 if(total>5)

{
cout<<"*******************************"<<endl;
cout<<"No More Parking Space Available"<<endl;
cout<<"*******************************"<<endl;
getch();
exit(0);
}
 amt=amt1+amt2+amt3;

      cout<<"total no. of vehicles: "<<total;
      cout<<"\n total no of rickshaw: "<<rick;
      cout<<"\n total no of taxi: "<<taxi;
      cout<<"\n total no of bus: "<<bus;
      cout<<"\n total amount is :"<<amt<<endl;
      cout<<endl;

display();
cout<<endl;
}
if(ch==5)
{
cout<<"enter the password";
cin>>p;
res=strcmp(p,pass);
if(res==0)
{
cout<<"access successfull"<<endl;

rick=0;
taxi=0;
bus=0;
amt1=0;
amt2=0;
amt=0;
amt3=0;
total=0;
cout<<"*************************";
cout<<"\n record deleted"<<endl;
cout<<"*************************"<<endl;
cout<<endl;

display();
}
else
{
cout<<"access denied"<<endl;
cout<<"try again"<<endl;
cout<<endl;
display();
}
}
if(ch==6)

exit(0);
cout<<"Invalid Selection"<<endl;
display();
cout<<endl;
}

int main()
{
display();
getch();
return 0;
}
