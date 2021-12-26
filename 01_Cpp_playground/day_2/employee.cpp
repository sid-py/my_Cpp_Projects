# include<iostream>

// An example of abstraction.
class AbstractEmployee{
    virtual void AskForPromotion()=0; // A vistual function.
    };

    /*A pure virtual function is a virtual function in C++ for
    which we need not to write any function definition and only 
    we have to declare it. It is declared by assigning 0 in declaration.*/

class Employee: AbstractEmployee{
public:
    std::string Name;
    std::string Company;
    int Age;

    //Constructor definition
    Employee(std::string name, std::string company, int age){
        Name= name;
        Company = company;
        Age= age;
    }

    //Method definition
    void empIntro(){
        std::cout << "Hello! "<< "\nMy name is "<< Name <<"."<<std::endl;
        std::cout << "I work for "<< Company <<"."<<std::endl;
        std::cout << "I am "<< Age <<" years old."<< std::endl;
    }

    //Setters and getters
    void setName(std::string name){
        Name = name;
    }

    std::string getName(){
        return Name;

    }

    void AskForPromotion(){
        if(Age > 30){
            std::cout << Name << " got promoted!"<< std::endl;
        }
        else{
            std::cout << "Sorry!" << Name << " is not promoted!"<< std::endl;        
        }
    }
/*An Example of Polymorphism.*/
    virtual void Work(){
        std::cout << Name << " is checking email, task backlog, performing tasks..."<<std::endl;

    }
};

//Example of Inheritence. Class Developer is inherited from Employee. To access 
// Employee variables,and methods, notice mention of "public" key word in front of Emplyee below.
class Developer: public Employee {
public:
std::string FavProgLang;
void FixBug(){
    std::cout<< Name <<" fixed Bugs using " << FavProgLang << std::endl;
}
// CArefully note the way of defining the constructor below.
Developer(std::string name, std::string company, int age, std::string favProgLang): Employee(name, company, age)
{
    FavProgLang = favProgLang;

}
/*An Example of Polymorphism.*/
void Work(){
    std::cout << Name << " is writing code in C++."<< std::endl;
}
};


class Teacher: public Employee{
    public:
    std::string Subject;
    void PrepareLesson(){
        std::cout << Name << " is preparing " << Subject << " lesson." << std::endl;
    }
    Teacher(std::string name, std::string company, int age, std::string subject): Employee(name, company, age){
        Subject = subject;
    }
/*An Example of Polymorphism.*/
void Work(){

    std::cout << Name << " is teaching " << Subject << std::endl;
}
};



int main(){
    //Instantiation and invoking the constructor
    // Employee emp1=Employee("Siddhesh", "Merit Automotive", 35);
    // Employee emp2=Employee("Susan", "Google", 32);
    // emp1.empIntro();
    // emp2.empIntro();

    //Name setting
    // emp2.setName("Teju");
    //Printing the set name on the console.
    // std::cout << emp2.getName();
    // emp2.empIntro();

    // emp1.AskForPromotion();
    // emp2.AskForPromotion();
//Instantiating developer d--Class created by Inheritence
    Developer d = Developer("Siddhesh", "Merit", 35, "C++");
    // d.FixBug();

    Teacher t = Teacher("Peter", "CMS Academy", 38, "Algorithm");
/*An Example of Polymorphism.*/

/*----------Why is ploymorsphism used?-----------------*/

/*Imagine a base class 'Shape'. It exposes a 'GetArea' method. 
Imagine a 'Square' class and a 'Rectangle' class, and a 'Circle' class. 
Instead of creating separate 'GetSquareArea', 'GetRectangleArea' and 
'GetCircleArea' methods, you get to implement just one method in 
each of the derived classes. You don't have to know which exact 
subclass of 'Shape' you use, you just call 'GetArea' and you get your 
result, independent of which concrete type is it.*/
    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->Work();
    e2->Work();
    e1->AskForPromotion();
    e2->AskForPromotion();

    
}