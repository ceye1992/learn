#include <vector>
#include <list>
#include <iostream>
using std::list; using std::vector; using std::end;
using std::endl; using std::cin; using std::cout;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8 ,13, 22, 55, 89};
    //��ia������vector��list��
    vector<int> vec(ia, end(ia));
    list<int> ils(vec.begin(), vec.end());

    //��list��ɾ������Ԫ��

  for(auto iter = ils.begin() ; iter != ils.end();){
        if(*iter % 2)
            iter = ils.erase(iter);
        else
            ++iter;
    }
    for(auto iter = vec.begin() ; iter != vec.end();){
        if(! (*iter % 2))
           iter = vec.erase(iter);
        else
            ++iter;
    }

    for(auto i : ils)
        cout << i <<endl;
    for(auto i : vec)
        cout << i <<endl;
    return 0;
}
