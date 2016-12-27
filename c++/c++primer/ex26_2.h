#ifndef EX26_2_H_INCLUDED
#define EX26_2_H_INCLUDED

template <typename T> int compare(const T& lhs, const T& rhs)
{
    if(lhs<rhs)
        return -1;
    else if(rhs <lhs)
        return 1;
    return 0;
}

#endif // EX26_2_H_INCLUDED
