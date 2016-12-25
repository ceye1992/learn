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

    //��������
    Quote(const Quote& q): bookNo(q.bookNO), price(q,price){std::cout << "��������\m"<<std::endl;}
    //�ƶ���������
    Quote(Quote&& q)noexcept : bookNo(std::move(q.bookNo)), price(std::move(q.price)){std::cout <<"�ƶ���������\n"<<std::endl;}
    //������ֵ����
    Quote& operator=(const Quote& rhs)
    {
        if(*this != rhs)
        {
            bookNo = rhs.bookNo;
            price = rhs.price;
        }
        std::cout <<"������ֵ����\n"<<std::endl;
        return *this;
    }
    //�ƶ���ֵ����
    Quote& operator=(Quote&& rhs)
    {
        if(*this != rhs)
        {
            bookNo = std::move(rhs.bookNo);
            price = std::move(rhs.price);
        }
        std::cout <<"�ƶ���ֵ����\n"<<std::endl;
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
