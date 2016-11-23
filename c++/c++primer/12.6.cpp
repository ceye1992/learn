#include <vector>
#include <string>
#include <iostream>
#include <memory>

using std::vector;

vector<int>* dynamic_vector_generator();
void dynamic_vector_processor(std::vector<int>* ptr_v);
void dynamic_vector_printer(vector<int>* ptr_v);

int main()
{
    vector<int>* ptr_vi = dynamic_vector_generator();//����һ����̬�����vector<int>
    dynamic_vector_processor(ptr_vi);//����������ݱ�����vector��
    dynamic_vector_printer(ptr_vi);//��ӡ���

    delete ptr_vi;

    return 0;
}

vector<int>* dynamic_vector_generator()
{
    vector<int>* ptr_v = new vector<int>();
    return ptr_v;
}

void dynamic_vector_processor(vector<int>* ptr_v)
{
    int i;
    std::cout << "plz enter:\n";
    while (std::cin >> i && i != 999) ptr_v->push_back(i);
}


void dynamic_vector_printer(vector<int>* ptr_v)
{
    for (const auto& e : *ptr_v) std::cout << e << " ";
    std::cout << "\n";
}
