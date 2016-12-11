#ifndef EX13_44_H_INCLUDED
#define EX13_44_H_INCLUDED

#include <memory>
#include <algorithm>
#include <iostream>

//string的简化版本
class String{
public:
    String():String(" "){} //默认构造函数
    String(const char *) ;//接受一个c风格字符串指针参数的构造函数
    String(const String&);
    String &operator=(const String&);
    ~String();

    const char *c_str() const { return elements; }
    size_t size() {return end - elements;}
    size_t length() {return end - elements - 1;}

private:
    std::pair<char*, char*> alloc_n_copy(const char*, const char*);
    void range_initializer(const char*, const char*);
    void free();

    char* elements;
    char* end;
    std::allocator<char> alloc;
};

std::pair<char*, char*>
String::alloc_n_copy(const char *p, const char *e)
{
    auto str = alloc.allocate(e - p);//创建足够多的内存空间
    return {str, std::uninitialized_copy(p , e, str)}; //列表初始化，返回开头以及拷贝的结尾
}

void String::range_initializer(const char *first, const char *last)
{
    auto new_str = alloc_n_copy(first, last);
    elements = new_str.first;
    end = new_str.second;
}

String::String(const char *s)
{
    char *sl = const_cast<char*>(s); //去除const
    while (*sl) //求出尾后迭代器
        ++sl;
    range_initializer(s, ++sl);
}

String::String(const String& rhs)
{
    range_initializer(rhs.elements, rhs.end);
    std::cout << "copy constructor" << std::endl;
}

void String::free()
{
    if (elements) {
        std::for_each(elements, end, [this](char &c){ alloc.destroy(&c); });//消除每一个元素的值
        alloc.deallocate(elements, end - elements); //释放分配空间
    }
}

String::~String()
{
    free();
}

String & String::operator = (const String &rhs)
{
    auto newstr = alloc_n_copy(rhs.elements, rhs.end);
    free();
    elements = newstr.first;
    end = newstr.second;
    std::cout << "copy-assignment" << std::endl;
    return *this;
}


#endif // EX13_44_H_INCLUDED
