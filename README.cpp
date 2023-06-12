#include<iostream.h> #include<conio.h>
class student {
char name[100]; int age,rollno; float per;
public:
void gate_data()
{
cout<<"enter name:"; cin>>name; cout<<"enter age:"; cin>>age; cout<<"enter rollno:"; cin>>rollno; cout<<"enter per:"; cin>>per;
}
student & max (student & s1,student & s2) {
if(per>s1.per&&per>s2.per)
{
return * this;
}
else if(s1.per>per && s2.per>s2.per)
{
Practical:13
   
         return s1;
}
else if(s2.per>per && s2.per>s1.per)
{
return s2; }
}
void display()
{
cout<<"name:"<<name<<endl; cout<<"age:"<<age<<endl; cout<<"rollno:"<<rollno<<endl; cout<<"per:"<<per<<endl;
}
};
int main()
{
clrscr();
student s,s1,s2,s3;
s1.gate_data();
cout<<endl;
s2.gate_data();
cout<<endl;
s3.gate_data();
cout<<endl;
s=s3.max(s1,s2);
cout<<"student with max percentage:"<<endl; s.display();
getch(); return 0;
   
         }
