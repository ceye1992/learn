#ifndef EX15_11_H_INCLUDED
#define EX15_11_H_INCLUDED
#include <string>
#include <iostream>

class Quote{
public:
    Quote()= default;
    Quote(const std::string &book, double sales_price):
        bookNo(book), price(sales_price){}
    std::string isbn() const {return bookNo;}
    virtual void debug()const
    {
        std::cout << "Data numbers of this class:\n"
                  << "bookNo= " <<this->bookNo << " "
                 << "price= " <<this->price<< " ";
}
    }

    virtual double net_price(std::size_t n) const
    {
        return n * price;
    }
    virtual ~Quote() = default;
private:
    std::string bookNo;

protected:
    double  price = 0.0;

};


#endif // EX15_11_H_INCLUDED
