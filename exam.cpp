#include<fstream>
#include<dos.h>
#include<bits/c++.h>

#include<ctime>
#include<string>
using namespace ;
class EXAM
{
struct QUESTION
{
char que[500];
char fians[100];
char sans[100];
char tans[100];
char foans[100];
char nans[100];
int ans[5],anss;
}question;
struct SECURITY
{
char uname[20];
char pass[20];
}security;
::fstream file;
public:
void writequestion();
void readdata();
void takeexam();
void writenewexam();
void makeusername();
void changepassword();
int checkpassword();
int returnminute();
};
void EXAM::makeusername()
{
file.open("examsecurity.txt",binary|in|out);
file.seekp(0L,beg);
cout<<"\n ENTER THE USERNAME"<<" ";
gets(security.uname);
cout<<"\n ENTER THE PASSWORD"<<" ";
gets(security.pass);
file.write((char *)&security,sizeof(security));
file.close();
}
void EXAM::changepassword()
{
char ouname[20],opass[20];
file.open("examsecurity.txt",binary|in|out);
file.seekg(0L,beg);
cout<<"\n ENTER THE OLD USERNAME"<<" ";
gets(ouname);
cout<<"\n ENTER OLD PASSWORD" <<" ";
gets(opass);
file.read((char *)&security,sizeof(security));
if((strcmp(ouname,security.uname)==0)&&(strcmp(opass,security.pass)==0))
{
file.seekp(0L,beg);
cout<<"\n ENTER NEW USERNAME"<<" ";
gets(security.uname);
cout<<"\n ENTER THE PASSWORD"<<" ";
gets(security.pass);
file.write((char *)&security,sizeof(security));
}
else
cout<<"\n INVALID USER";
file.close();
}
int EXAM::checkpassword()
{
int flag;
char ouname[20],opass[20];
file.open("examsecurity.txt",binary|in|out);
file.seekg(0L,beg);
cout<<"\n ENTER THE USERNAME"<<" ";
gets(ouname);
cout<<"\n ENTER PASSWORD" <<" ";
gets(opass);
file.read((char *)&security,sizeof(security));
if((strcmp(ouname,security.uname)==0)&&(strcmp(opass,security.pass)==0))
flag=1;
else
flag=0;
file.close();
if(flag==1)
return 1;
else
return 0;
}

void EXAM::writequestion()
{
file.open("exam.txt",binary|in|out);
file.seekp(0L,end);
cout<<"\n enter the question"<<" ";
gets(question.que);
cout<<"\n enter the first ans"<<" ";
gets(question.fians);
cout<<"\n is it correct answer if yes press 1 else 2"<<" ";
cin>>question.ans[0];
if(question.ans[0]==1)
question.anss=question.ans[0];
cout<<"\n enter the second answer"<<" ";
gets(question.sans);
cout<<"\n is it correct answer if yes press 1 else 2"<<" ";
cin>>question.ans[1];
if(question.ans[1]==1)
question.anss=question.ans[1];
cout<<"\n enter the third answer"<<" ";
gets(question.tans);
cout<<"\n is it correct answer if yes press 1 else 2"<<" ";
cin>>question.ans[2];
if(question.ans[2]==1)
question.anss=question.ans[2];
cout<<"\n enter the fourth answer"<<" ";
gets(question.foans);
cout<<"\n is it correct answer if yes press 1 else 2"<<" ";
cin>>question.ans[3];
if(question.ans[3]==1)
question.anss=question.ans[3];
cout<<"\n enter last answer"<<" ";
gets(question.nans);
cout<<"\n is it correct answer if yes press 1 else 2"<<" ";
cin>>question.ans[4];
if(question.ans[4]==1)
question.anss=question.ans[4];
file.write((char *)&question,sizeof(question));
file.close();
}
void EXAM::writenewexam()
{
file.open("exam.txt",binary|in|out);
file.seekp(0L,beg);
cout<<"\n enter the question"<<" ";
gets(question.que);
cout<<"\n enter the first ans"<<" ";
gets(question.fians);
cout<<"\n is it correct answer if yes press 1 else 2"<<" ";
cin>>question.ans[0];
if(question.ans[0]==1)
question.anss=question.ans[0];
cout<<"\n enter the second answer"<<" ";
gets(question.sans);
cout<<"\n is it correct answer if yes press 1 else 2"<<" ";
cin>>question.ans[1];
if(question.ans[1]==1)
question.anss=question.ans[1];
cout<<"\n enter the third answer"<<" ";
gets(question.tans);
cout<<"\n is it correct answer if yes press 1 else 2"<<" ";
cin>>question.ans[2];
if(question.ans[2]==1)
question.anss=question.ans[2];
cout<<"\n enter the fourth answer"<<" ";
gets(question.foans);
cout<<"\n is it correct answer if yes press 1 else 2"<<" ";
cin>>question.ans[3];
if(question.ans[3]==1)
question.anss=question.ans[3];
cout<<"\n enter last answer"<<" ";
gets(question.nans);
cout<<"\n is it correct answer if yes press 1 else 2"<<" ";
cin>>question.ans[4];
if(question.ans[4]==1)
question.anss=question.ans[4];
file.write((char *)&question,sizeof(question));
file.close();
}

void EXAM::readdata()
{
int count;
file.open("exam.txt",binary|in|out);
file.seekg(0L,beg);
while(file.read((char *)&question,sizeof(question)))
{
count=0;
cout<<"\n"<<question.que<<"\n";
cout<<"*)"<<question.fians;
cout<<"\n*)"<<question.sans;
cout<<"\n*)"<<question.tans;
cout<<"\n*)"<<question.foans;
cout<<"\n*)"<<question.nans;
for(int i=0;i<5;i++)
{
++count;
if(question.ans[i]==1)
cout<<"\n answer is "<<count<<"th";
}

cout<<"\n——————-";
cout<<"\n next question";
cout<<"\n——————-";
}
file.close();
}

void EXAM::takeexam()
{
int min;
int ch,p=0,count,c;
min=returnminute();
file.open("exam.txt",binary|in|out);
file.seekg(0L,beg);
while(file.read((char *)&question,sizeof(question)))
{
count=0;
cout<<"\n"<<question.que<<"\n";
cout<<"*)"<<question.fians;
cout<<"\n*)"<<question.sans;
cout<<"\n*)"<<question.tans;
cout<<"\n*)"<<question.foans;
cout<<"\n*)"<<question.nans;
for(int i=0;i<5;i++)
{
++count;
if(question.ans[i]==1)
{
//cout<<"\n answer is "<<count<<"th";
c=count;
}
}
cout<<"\n enter ur ans no"<<" ";
cin>>ch;
if(ch==c)
{
cout<<"\n correct answer";
++p;
}
cout<<"\n——————-";
cout<<"\n next question";
cout<<"\n—————–";
}
cout<<"\n u have"<< p <<"correct answer";
file.close();
}

int EXAM::returnminute()
{
time_t now =time(0);
tm *ltm =localtime(&now);

cout<<"cureent time is: "<<5+ltm->tm_hour<<":"<<30+ltm->tm_min<<":"<<ltm->tm_sec<<endl;
//printf("The current time is: %2d:%02d:%02d.%02d\n",t.ti_hour, t.ti_min, t.ti_sec, t.ti_hund);
return(ltm->tm_min);
}

void main()
{
int ch,ch1;
EXAM exam;
clrscr();
do
{
cout<<"\n 1.administrator  \n 2.student \n 3.exit";
cout<<"\n enter ur choice"<<" ";
cin>>ch;
switch(ch)
{
case 1:if(exam.checkpassword())
do
{
cout<<"1.want to addquestion\n 2.read question\n3.writenewexam\n 4.makepassword\n 5.changepassword 6.exit";
cout<<"\n neter ur choice"<<" ";
cin>>ch1;
switch(ch1)
{
case 1:exam.writequestion();
break;
case 2:exam.readdata();
break;
case 3:exam.writenewexam();
break;
case 4:exam.makeusername();
break;
case 5:exam.changepassword();
break;
case 6:break;
}
}while(ch1!=6);
break;
case 2:cout<<"\n start exam"<<" ";
exam.takeexam();
break;
case 3:
break;
}
}while(ch!=3);
}

