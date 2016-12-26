#ifndef QUERY_BASE_H_INCLUDED
#define QUERY_BASE_H_INCLUDED
class Query_base{
    friend class Query;
protected:
    using line_no = TextQuery::line_no; //ÓÃÓÚevalº¯Êý
    virtual ~Query_base() = default;

private:
    virtual QueryResult eval(const TextQuery&) const = 0;

    virtual std::strin rep() const = 0;
};


#endif // QUERY_BASE_H_INCLUDED
