#ifndef 16_39_H_INCLUDED
#define 16_39_H_INCLUDED

template <typename T>
int compare(const T &v1, const T &v2)
{
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

#endif // 16_39_H_INCLUDED
