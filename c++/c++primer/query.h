#ifndef QUERY_H_INCLUDED
#define QUERY_H_INCLUDED
class Query{
    friend Query operator~(const Query &);
    friend Query operator|(const Query &, const Query &);
    friend Query operator&(const Query &, const Query &);

public:
    Query(const std::string&);//����һ���µ�wordquery

    QueryResult eval(const TextQuery&t) const
    {
        return q->eval(t);
    }
    std::string rep() const {return q->rep();}
private:
    Query(std::shared_ptr<Query_base>query): q(query){}//����shared_ptr�Ĺ��캯��
    std::shared_ptr<Query_base> q;
};


#endif // QUERY_H_INCLUDED
