#ifndef EX15_30_H_INCLUDED
#define EX15_30_H_INCLUDED

#include "quote.h>
#include <set>
#include <memory>

class baket
{
public:
    void add_item(const Quote& sale)
    {
        items.insert(std::shared_ptr<Quote>(sale.clone()));
    }

    void add_item(Quote&& sale)
    {
        item.insert(std::shared_ptr<Quote>(std::move(sale).clone()));
    }

    double total_receipt(std::ostream& os) const;

private:
    static bool compare(const std::shared_ptr<Quote>& lhs,
                        const std::shared_ptr<Quote>& rhs)
    {
        return lhs->isbn() < rhs->isbn();
    }

    std::multiset<std::shared_ptr<Quote, decay(compare)*>
        items{compare;}
};


double Basket::total_receipt(std::ostream &os) const
{
    double sum = 0.0;

    for(auto iter = items.cbegin(); iter != items.cend();
        iter = items.upper_bound(*iter))
    {
        sum += print_total(os, **iter, items.count(*iter));
    }
    os << "Total Sale: " << sum << std::endl;
    return sum;
}

#endif // EX15_30_H_INCLUDED
