#ifndef EX7_43_H_INCLUDED
#define EX7_43_H_INCLUDED
//û��Ĭ�Ϲ��캯��
class NoDefault{
public:
    NoDefault(int i) {}
};

//��Ĭ�Ϲ��캯��
class C{
public:
    C(): def(0) {}//C�Ĺ��캯��
private:
    NoDefault def;
};


#endif // EX7_43_H_INCLUDED
