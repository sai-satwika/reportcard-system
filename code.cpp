#include<iostream>
#include<string>
using namespace std;
class Report_card
{
public:
char name[100],grade;
double roll_no,py,eepm,ds,cpp,dms,dld;
double percent,total;
public:
void get_data()
{
cout<<"\t\tEnter the student name"<<endl;
cout<<"\t\t";
cin.ignore();
cin.getline(name,100);
cout<<"\t\tEnter the roll number"<<endl;
cout<<"\t\t";
cin>>roll_no;
cout<<"\t\tEnter the subject marks out of 100:"<<endl;
cout<<"\t\tProbability and Statistics using Python : ";
//cout<<"\t\t";
cin>>py;
cout<<"\t\tEngineering Economics and Project Management : ";
//cout<<"\t\t";
cin>>eepm;
cout<<"\t\tData Structures : ";
//cout<<"\t\t";
cin>>ds;
cout<<"\t\tObject Oriented Programming using C++ : ";
//cout<<"\t\t";
cin>>cpp;
cout<<"\t\tDiscrete Mathematical Structures : ";
//cout<<"\t\t";
cin>>dms;
cout<<"\t\tDigital Logic Design : ";
//cout<<"\t\t";
cin>>dld;
}
void display_data()
{
cout<<"\n\n";
cout<<"\t|\tSTUDENT REPORT CARD"<<endl;
cout<<"\t|\t--------------------"<<endl;
cout<<"\t|\tStudent Name: "<<name<<endl;
cout<<"\t|\tStudent Roll Number: "<<roll_no<<endl;
cout<<"\t|\tIndividual Subject Marks:"<<endl;
cout<<"\t|\tProbability and Statistics using Python : "<<py<<endl;
cout<<"\t|\tEngineering Economics and Project Management : 
"<<eepm<<endl;
cout<<"\t|\tData Structures : "<<ds<<endl;
cout<<"\t|\tObject Oriented Programming using C++ : "<<cpp<<endl;
cout<<"\t|\tDiscrete Mathematical Structures : "<<dms<<endl;
cout<<"\t|\tDigital Logic Design : "<<dld<<endl;
cout<<"\t|\tGrand Total: "<<calc_total()<<endl;
cout<<"\t|\tOverall Percentage: "<<percentage()<<endl;
cout<<"\t|\tGrade: "<<grading()<<endl;
cout<<"\n\n";
}
double calc_total()
{
total=py+eepm+ds+cpp+dms+dld;
return total;
}
double percentage()
{
percent=(total/600)*100;
return percent;
}
char grading()
{
if(percent>=80)
return 'A';
else if(percent>=70&&percent<80)
return 'B';
else if(percent>=60&&percent<70)
return 'C';
else if (percent>=50&&percent<60)
return 'D';
else
return 'F';
}
void modify()
{
int ch;
cout<<"\n\n";
cout<<"\t|\tEnter the aspect to be modified"<<endl;
cout<<"\t|\t1.Student Name\n\t|\t2.Student Roll 
number\n\t|\t3.Probability and Statistics using Python 
marks\n\t|\t4.Engineering Economics and Project 
Management\n\t|\t5.Data Structures\n\t|\t6.Object Oriented 
Programming using C++\n\t|\t7.Discrete Mathematical 
Structures\n\t|\t8.Digital Logic Design"<<endl;
cout<<"\t\t";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\t|\tEnter the student name for 
modification:"<<endl;
cout<<"\t\t";
cin.ignore();
cin.getline(name,100);
break;
case 2:
cout<<"\t|\tEnter the student roll number for 
modification:"<<endl;
cout<<"\t\t";
cin>>roll_no;
break;
case 3:
cout<<"\t|\tEnter the Probability and Statistics using 
Python marks for modification:"<<endl;
cout<<"\t\t";
cin>>py;
break;
case 4:
cout<<"\t|\tEnter Engineering Economics and Project 
Management marks for modification:"<<endl;
cout<<"\t\t";
cin>>eepm;
break;
case 5:
cout<<"\t|\tEnter Data Structures marks for 
modification:"<<endl;
cout<<"\t\t";
cin>>ds;
break;
case 6:
cout<<"\t|\tEnter Object Oriented Programming using 
C++ marks for modification:"<<endl;
cout<<"\t\t";
cin>>cpp;
break;
case 7:
cout<<"\t|\tEnter Discrete Mathematical Structures 
marks for modification:"<<endl;
cout<<"\t\t";
cin>>dms;
break;
case 8:
cout<<"\t|\tEnter Digital Logic Design marks for 
modification:"<<endl;
cout<<"\t\t";
cin>>dld;
break;
default:
cout<<"Enter valid option"<<endl;
}
cout<<"\t\tData is modified"<<endl;
}
};
int main()
{
Report_card s1;
int c;
while(1)
{
cout<<"\n\n";
cout<<"\t|\tSTUDENT REPORT CARD SYSTEM\t|"<<endl;
cout<<"\t|\tEnter any option\t\t|"<<endl;
cout<<"\t|\tMENU:\t\t\t\t|"<<endl;
cout<<"\t|\t1.Entering student data\t\t|\n\t|\t2.Displaying Student 
Data\t|\n\t|\t3.Modifying Student data\t|\n\t|\t4.Student 
Total\t\t\t|\n\t|\t5.Student Percentage\t\t|\n\t|\t6.Student 
Grade\t\t\t|\n\t|\t7.Exit\t\t\t\t|"<<endl;
cout<<"\t\t\t";
cin>>c;
switch(c)
{
case 1:
s1.get_data();
break;
case 2:
s1.display_data();
break;
case 3:
s1.modify();
break;
case 4:
cout<<"\t\tTotal marks: "<<s1.calc_total()<<endl;
break;
case 5:
cout<<"\t\tPercentage: "<<s1.percentage()<<"%"<<endl;
break;
case 6:
cout<<"\t\tGrade: "<<s1.grading()<<endl;
break;
case 7:
exit(0);
default:
cout<<"Enter valid option"<<endl;
} }
return 0;
}
