#include <forward_list>
#include <string>
using std::string; using std::forward_list;

void find_and_insert(forward_list<string> &flst, const string & FindString, const string& InsertString)
{
    auto pro = flst.before_begin();
    auto curr = flst.begin();
    while(curr != flst.end()){
        if(*curr == FindString){
            flst.insert_after(curr, InsertString);
            return;
        }
        else{
            ++curr;
            pro = curr;
        }
    }
    flst.insert_after(pro, InsertString);
}
