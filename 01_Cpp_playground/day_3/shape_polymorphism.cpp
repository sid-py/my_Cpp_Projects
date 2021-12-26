/*----------Why is ploymorsphism used?-----------------*/

/*Imagine a base class 'Shape'. It exposes a 'GetArea' method. 
Imagine a 'Square' class and a 'Rectangle' class, and a 'Circle' class. 
Instead of creating separate 'GetSquareArea', 'GetRectangleArea' and 
'GetCircleArea' methods, you get to implement just one method in 
each of the derived classes. You don't have to know which exact 
subclass of 'Shape' you use, you just call 'GetArea' and you get your 
result, independent of which concrete type is it.*/


# include<iostream>

class Shape{
    public:
    virtual float GetArea() = 0;
};

class Rectangle : public Shape
{
    public:
    Rectangle(float a){this-> a = a;}
    float GetArea() {return a * a;}
    private:
    float a;

};

class Square : public Shape
{
    public:
    Square(float a){this-> a = a;}
    float GetArea() {return a * a;}
    private:
    float a;

};

class Triangle : public Shape
{

};

class Circle : public Shape
{
    public:
    Circle(float r){this-> r = r;}
    float GetArea() {return 3.14f * r * r;}
    private:
    float r;

};

int main()
{
    Shape *circleArea = new Circle(3.0f);
    Shape *rectArea = new Rectangle(7.0f);

    std::cout << circleArea->GetArea() << std::endl;
    std::cout << rectArea->GetArea()<< std::endl; 
}