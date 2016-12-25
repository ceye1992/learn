#ifndef EX15_21_H_INCLUDED
#define EX15_21_H_INCLUDED
#include <string>

class Shape
{
public:
    typedef std::pair<double, double> Coordinate;

    Shape()= default;
    Shape(const std::string& n):
        name(n){}

    virtual double area()   const = 0;
    virtual double perimeter() const = 0;

    virtual ~Shape() = default;
private:
    std::string name;
};

class Rectangle: public Shape
{
public:
    Rectangle() = default;
    Rectangle(const std::string& n,
              const std::string& a,
              const std::string& b,
              const std::string& c,
              const std::string& d):
            Shape(n), a(a), b(b), c(c), D(d){}
    ~Rectangle() = default;
protected:
    Coordinate a;
    Coordinate b;
    Coordinate c;
    Coordinate d;
};

class Square: public Rectangle
{
public:
    Square() = default;
    Square(const std::string& n,
           const std::string& a,
           const std::string& b,
           const std::string& c,
           const std::string& d):
            Rectangle(n, a, b, c, d){}
    ~Square()= default;
};

#endif // EX15_21_H_INCLUDED
