#ifndef EX15_27_H_INCLUDED
#define EX15_27_H_INCLUDED

#include "ex15_15.h"

class Bulk_quote : public Disc_quote
{

public:
    Bulk_quote() { std::cout << "default constructing Bulk_quote\n"; }

    using Disc_quote::Disc_quote;

    Bulk_quote(const Bulk_quote& ba): Disc_quote(ba){}

    Bulk_quote(Bulk_quote&& ba): Disc_quote(std::move (ba)){}

    Bulk_quote& operator=(const Bulk_quote &rhs)
    {
        Disc_quote::operator=(rhs);

        return *this;
    }
    Bulk_quote& operator=(Bulk_quote&& rhs)
    {
        Disc_quote::operator=(std::move(rhs));
        return *this;
    }

        double net_price(std::size_t n) const override;
    void  debug() const override;

    ~Bulk_quote() override
    {
        std::cout << "destructing Bulk_quote\n";
    }
};

#endif // EX15_27_H_INCLUDED
