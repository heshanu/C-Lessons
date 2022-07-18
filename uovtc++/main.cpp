#include <iostream>
#include<iomanip>

using namespace std;
/*
class AbstractEmployee{
   virtual void AskPromotion()=0;
};*/

class Employee{

private:
    string Name;
    string Company;
    int Age;

public:

    void setName(string name){
        Name=name;
    }

    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company=company;
    }

    string getCompany(){
        return Company;
    }

    void setAge(int age){
        Age=age;
    }

    int getAge(){
        return Age;
    }

    void Intro(){
        cout<<"name\t"<<Name<<endl;
        cout<<"company\t"<<Company<<endl;
        cout<<"age\t"<<Age<<endl;
    }

   virtual void Work(){
        cout<<Name<<"is checking emails";
    }
    Employee(string name,string company,int age){
        Name=name;
        Company=company;
        Age=age;
    }

};

class Developer:public Employee{
public:
    string Favlanguage;
    Developer(string name,string company,int age,string favlanguage):Employee(name,company,age){
        Favlanguage=favlanguage;
    }
    void fixBug(){
        cout<<getName()<<" "<<"fixed by"<<Favlanguage;
    }

     //polymophrism
     void Work(){
        cout<<getName()<<"is checking bugs";
    }
};

//inheritance
class Teacher:public Employee{
public:
    string Subject;
    Teacher(string name,string company,int age,string subject):Employee(name,company,age){
        Subject=subject;
    }
    void preparedLesson(){
       cout<<getName()<<" "<<"learning\t"<<Subject<<endl;
    }

    void Work(){
        cout<<getName()<<"is teaching"<<Subject;
    }

};

int main()
{


 Developer d=Developer("u","ccc",25,"Java");
  //d.fixBug();

  //Developer d=Developer("Heshan1","IN",25,"Java");
  //d.Work();

  Teacher t=Teacher("Heshan","IN",25,"Java");

  Employee *e1=&d;
  Employee *e2=&t;

  e1->Work();
  e2->Work();

  /*
  employee.Name="heshan";
  employee.age=25;
  employee.Company="sl";*/

    return 0;
}








