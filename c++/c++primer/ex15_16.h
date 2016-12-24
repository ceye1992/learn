#ifndef EX15_16_H_INCLUDED
#define EX15_16_H_INCLUDED

#include "ex15_15.h"

class Limit_quote : public Disc_quote
{
public:
    Limit_quote() = default;
    Limit_quote(const std::string& b, double p, std::size_t max, double disc):
        Disc_quote(b, p, max, disc)  {   }

    double net_price(std::size_t n) const override
    { return n * price * (n < quantity ? 1 - discount : 1 ); }

    void debug() const override;
};

#endif // EX15_16_H_INCLUDED
