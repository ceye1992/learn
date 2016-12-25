#ifndef EX15_26_H_INCLUDED
#define EX15_26_H_INCLUDED

#include <iostream>
#include <string>

class Quote
{
    friend bool operator !=(const Quote& lhs, const Quote& rhs);
public:
    Quote() {std::cout << "using Quote() \n"<<std::endl;}
    Quote(const std::string&b, double& p):
        bookNo(b), price(p){std::cout <<" using Quote(const std::string&b, double& p)\n" <<std::endl;}

    //¿½±´º¯Êý
    Quote(const Quote& q): bookNo(q.bookNO), price(q,price){std::cout << "¿½±´º¯Êý\m"<<std::endl;}
    //ÒÆ¶¯¿½±´º¯Êý
    Quote(Quote&& q)noexcept : bookNo(std::move(q.bookNo)), price(std::move(q.price)){std::cout <<"ÒÆ¶¯¿½±´º¯Êý\n"<<std::endl;}
    //¿½±´¸³Öµº¯Êý
    Quote& operator=(const Quote& rhs)
    {
        if(*this != rhs)
        {
            bookNo = rhs.bookNo;
            price = rhs.price;
        }
        std::cout <<"¿½±´¸³Öµº¯Êý\n"<<std::endl;
        return *this;
    }
    //ÒÆ¶¯¸³Öµº¯Êý
    Quote& operator=(Quote&& rhs)
    {
        if(*this != rhs)
        {
            bookNo = std::move(rhs.bookNo);
            price = std::move(rhs.price);
        }
        std::cout <<"ÒÆ¶¯¸³Öµº¯Êý\n"<<std::endl;
        return *this;
    }

    std::string isbn()const {return bookNo;}
    virtual double net_price(std::size_t n) const {return n * price;}
    virtual void debug()const;

private:
    std::string bookNo;
protected:
    double price = 10.0;
};

inline bool operator!=(const Quote& lhs, const Quote& rhs)
{
    return lhs.bookNo != rhs.bookNo
        && lhs.price != rhs.price;
}


#endif // EX15_26_H_INCLUDED
