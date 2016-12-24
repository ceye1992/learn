#ifndef EX15_5_H_INCLUDED
#define EX15_5_H_INCLUDED
#include "ex15_3.h"

class Bulk_quote: public Quote{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& b, double p, std::size_t q, double disc):
        Quote(b, p), min_qty(q), discount(disc){}

    double net_price(std::size_t n) const override;

private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};

double Bulk_quote::net_price(std::size_t cnt) const
{
    if(cnt >= min_qty)
        return cnt * (1 - discount) * price;
    else
        return cnt * price;
}


#endif // EX15_5_H_INCLUDED
