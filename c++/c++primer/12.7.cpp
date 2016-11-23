#include <vector>
#include <string>
#include <iostream>
#include <memory>
using std::shared_ptr;
using std::vector;

shared_ptr<vector<int>> dynamic_vector_generator();
void dynamic_vector_processor(shared_ptr<vector<int>> ptr_v);
void dynamic_vector_printer(shared_ptr<vector<int>> ptr_v);

int main()
{
    shared_ptr<vector<int>>ptr_vi = dynamic_vector_generator();//����һ����̬�����vector<int>
    dynamic_vector_processor(ptr_vi);//����������ݱ�����vector��
    dynamic_vector_printer(ptr_vi);//��ӡ���

    return 0;
}

shared_ptr<vector<int>> dynamic_vector_generator()
{
    return std::make_shared <vector<int>>();

}

void dynamic_vector_processor(shared_ptr<vector<int>> ptr_v)
{
    int i;
    std::cout << "plz enter:\n";
    while (std::cin >> i && i != 999) ptr_v->push_back(i);
}


void dynamic_vector_printer(shared_ptr<vector<int>> ptr_v)
{
    for (const auto& e : *ptr_v) std::cout << e << " ";
    std::cout << "\n";
}
