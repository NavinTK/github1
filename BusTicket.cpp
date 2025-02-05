#include<iostream>
#include<unistd.h>
#include<string.h>
#include<cstdlib>
using namespace std;
int main()
{
int num,otp,p,code;
string email,pass,name,bank,upi,phn;
start:
system("clear");
cout<<"LOGIN TO BOOK TICKETS...\n";
cout<<"		Email   : "; cin>>email;
cout<<"		Password: "; cin>>pass;
sleep(0.5);
cout<<"\nYou have logged in successfully...\n";
sleep(1);
cout<<"		      --------------------------------------\n";
cout<<"			WELCOME TO NISHANTH BUS TRAVELS             		\n";
cout<<"               ---------------------------------\n";
sleep(1);
cout<<"\nPlease enter your details...\n\n";
sleep(1);
int age;
cout<<"		Name   : "; cin>>name;
cout<<"                Age    : "; cin>>age;
cout<<"\n";
sleep(1);
cout<<"Enter place details..\n";
string from,to;
cout<<"From         : ";  cin>>from;
cout<<"Destination  :"; cin>>to;
string date;
cout<<"\nEnter the date: "; cin>>date;
int av=50,bk;
cout<<"\nAvailable seats: "<<av;
cout<<"\nPer Ticket price: $300";

cout<<"\nEnter the number of seats you want to book: "; cin>>bk;
if(bk<=av){
sleep(1);
cout<<"\n----------------xxx----------------";
cout<<"\n";
cout<<"\nAmount you need to pay: $"<<bk*300;
cout<<"\n";
cout<<"\n----------------xxx----------------";
cout<<"\n";
pay:
cout<<"\n********PAYMENT METHODS********";
cout<<"\npress 1 for NETBANKING";
cout<<"\npress 2 for UPI";
cout<<"\npress 3 for G PAY\n";
int n;
cin>>n;
switch(n)
{
case 1:
cout<<"\nEnter bank name : "; cin>>bank;
cout<<"\nEnter acc number: "; cin>>num;
sleep(1);
cout<<"\nOTP for the payment for $"<<bk*300<<" is 6981.\n";
cout<<"\nEnter the OTP to confirm payment: "; cin>>otp;
sleep(1);
if(otp==6981)
{
cout<<"\n\nPAYMENT SUCCESSFUL...Your booking has been confirmed.";
sleep(1);
cout<<"\n Thank you for using our service.";
}
else{cout<<"\n\nPAYMENT FAILED...Please Retry Again.\n"; goto pay;}
break;

case 2:
cout<<"\nEnter your UPI code(or)number: "; cin>>upi;
cout<<"\nEnter your UPI password      : "; cin>>p;
sleep(1);
if(p==172924)
{
cout<<"\n\nPAYMENT SUCCESSFUL...Your booking has been confirmed.";
sleep(1);
cout<<"\n Thank you for using our service.";
}
else{cout<<"\n\nPAYMENT FAILED...Please Retry Again.\n"; goto pay;}
break; 

case 3:

cout<<"\nEnter your G PAY number  : "; cin>>phn;
cout<<"\nEnter your G pay password: "; cin>>code;
sleep(1);
if(code==172924)
{
cout<<"\n\nPAYMENT SUCCESSFUL...Your booking has been confirmed.";
sleep(1);
cout<<"\n Thank you for using our service.";
}
else{cout<<"\n\nPAYMENT FAILED...Please Retry Again.\n"; goto pay;}
break; 

default:
sleep(1);
cout<<"\nInvalid choice...Please try  again.\n"; goto start;
break;


}
}
else{cout<<"\nNot much seats available.";
cout<<"\nPlease choose less than 50 seats.\n"; goto start;}

}


