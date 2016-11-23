#include <iostream>
#include <vector>
using std::cin; using std::endl; using std::cout;
using std::vector; using std::end; using std::begin;
int main()
{
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {2, 3, 4};
    //比较数组的大小
    if((end(arr1) - begin(arr1)) != (end(arr2) - begin(arr2)))
        cout << "arr1 and arr2 are not equal "<< endl;
    else
        for(int *ip1 = arr1, *ip2 = arr2; ip1 != end(arr1) && ip2 != end(arr2); ++ip1, ++ip2){
            if(*ip1 != *ip2){
                cout << "arr1 and arr2 are not equal " << endl;
                //return 0;
        }
    }

    //比较vector的大小
    vector<int> vec1= {0, 1, 3};
    vector<int> vec2= {2, 3, 4};
    if(vec1 == vec2)
        cout <<"vec1 and vec2 are equal" <<endl;
    else
        cout <<"vec1 and vec2 are not equar"<<endl;

    return 0;

}
