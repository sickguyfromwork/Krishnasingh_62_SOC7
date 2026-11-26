#include<iostream>
using namespace std;

class Person
{
 private:
 string name;
 public:
 void read()
{
 cout<<"THE PERSON IS READING BOOK"<<endl;
}
};

class Student : public Person
{
 private:
 int rollno;
 public:
 void read()
{
 cout<<"THE STUDENT IS READING ONE PIECE"<<endl;
}
};

int main()
{
 Person p;
 Student s;
 p.read();
 s.read();
 return 0;
}
