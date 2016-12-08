#ifndef EX13_28_H_INCLUDED
#define EX13_28_H_INCLUDED
#include <string>

class TreeNode{
public:
    TreeNode(): value(new std::string()), count(new int(1)), left(nullptr), right(nullptr){}

    TreeNode(const TreeNode&rhs): value(rhs.value), count(rhs.count), left(rhs.left), right(rhs.right){++*count;}

    TreeNode operator=(const TreeNode&rhs)
    ~TreeNode()
    {
        if (--*count == 0) {
            if (left) {
                delete left;
                left = nullptr;
            }
            if (right) {
                delete right;
                right = nullptr;
            }
            delete count;
            count = nullptr;
        }
    }

private:
    std::string value;
    int *count;
    TreeNode *left;
    TreeNode *right;
};

TreeNode::TreeNode(const TreeNode &rhs)
{
    ++*rhs.count;
    if(--*count == 0){
        if(left){
            delete left;
            left = nullptr;
        }
        if(right){
            delete right;
            right = nullptr;
        }
        delete count;
        count = nullptr;
    }

    value = rhs.value;
    count = rhs.count;
    left = rhs.left;
    right = rhs.right;
}

class BinStrTree{
public:
    BinStrTree(): root(new TreeNode()){}
    BinStrTree(const BinStrTree& bst): root(new TreeNode(bst.root)){}
    BinStrTree operator=(const BinStrTree & bst)
    {
        BindStrTree* new_root = new BindStrTree(*bes.root);
        delete root;
        root = new_root;
        return *this;

    }
    ~BindStrTree(){delete root}
private:
    TreeNode *root;
};

#endif // EX13_28_H_INCLUDED
