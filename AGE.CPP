#include<iostream>
using namespace std;
int main()
{

int birth_mon=0,birth_date=0,birth_year=0,curr_mon=0,curr_date=0,curr_year=0,

age_mon=0,age_year=0,age_day=0;

cout<<"enter your birth date, birth month, birth year;  for eg:-"<<endl<<"23"
<<endl<<"08"<<endl<<"2000"<<endl;
cout<<"Please enter in the given format above"<<endl;

cin>>birth_date;
cin>>birth_mon;
cin>>birth_year;

cout<<"\n your birth date, birth month, birth year is: "<<birth_date<<"/"
<<birth_mon<<"/"<<birth_year<<endl;

cout<<"enter todays date, month, year:-- "<<endl;

cin>>curr_date>>curr_mon>>curr_year;

cout<<"\n\ntodays date, month, year is:-- "<<curr_date<<"/"<<curr_mon<<"/"

<<curr_year<<"\n";

if(birth_year >= curr_year && birth_mon > curr_mon )
{
    cout<<"You Are NOT Born yet! please give correct details"<<endl;
}



else if(birth_mon==curr_mon && birth_year<curr_year)
{
    age_year=curr_year-birth_year;
    age_day = 0;
    age_mon = 0;
}



else if(birth_mon>curr_mon && birth_year<curr_year )
{

if(curr_date>birth_date)
{
    age_year=(curr_year-birth_year);    
    age_mon = (12-birth_mon)+(curr_mon);
    age_day = curr_date - birth_date;
}
else if(curr_date<birth_date)
{
    age_year=(curr_year-birth_year)-1;
    age_mon = (12-birth_mon)+(curr_mon-1);

int var = curr_mon - 1 ;

if(var>0)
{   
    if(var==1 || var==3 || var==5 || var==7 || var==8 || var==10 || var==12)
    {
       age_day = (31-birth_date)+curr_date;
    }
    else
    {
       age_day = (30-birth_date)+curr_date;
    }
}

else
{
    age_day = (31-birth_date)+curr_date;
}
}
else
{
    age_day = 0;
    age_year=(curr_year-birth_year);    
    age_mon = (12-birth_mon)+(curr_mon);
}
}



else if(birth_mon<curr_mon && birth_year<curr_year)
{
if(curr_date>birth_date)
{
    age_year=curr_year-birth_year;
    age_mon = curr_mon - birth_mon;
    age_day = curr_date - birth_date;
}
else if(curr_date<birth_date)
{
    age_year=(curr_year-birth_year)-1;
    age_mon = (12-birth_mon)+(curr_mon-1);

int var = curr_mon - 1 ;

if(var>0)
{   
    if(var==1 || var==3 || var==5 || var==7 || var==8 || var==10 || var==12)
    {
       age_day = (31-birth_date)+curr_date;
    }
    else
    {
       age_day = (30-birth_date)+curr_date;
    }
}
else
{
    age_day = (31-birth_date)+curr_date;
}
}
else
{
    age_day = 0;
    age_year=(curr_year-birth_year);    
    age_mon = (12-birth_mon)+(curr_mon);
}
}
else
{
    age_day = 0;
    age_year=(curr_year-birth_year);    
    age_mon = (12-birth_mon)+(curr_mon);

}


cout<<"current age is : "<<age_year<<" years "<<age_mon<<" months "<<age_day<<" days "<<endl;
cout<<"\n\n end of program"<<endl;

return 0;
}
