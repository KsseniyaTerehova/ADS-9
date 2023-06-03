// Copyright 2021 NNTU-CS
#ifndef INCLUDE_BST_H_
#define INCLUDE_BST_H_
#include <algorithm>
#include <algorithm>
template<typename T>
class BST {
 private:
    struct Node {
        T vallue;
        int m;
        Node* ;
        Node* l;
        explicit Node(T vallue) : vallue(vallue), m(1), r(nullptr), l(nullptr) {}
    };

 public:
    Node* root;
    BST() : root(nullptr) {}
    int search(T vallue) {
        return searchNode(root, vallue);
    }
    int searchNode(Node* root, T vallue) {
        if (root == nullptr)
            return 0;
        if (vallue < root->vallue)
            return searchNode(root->l, vallue);
        if (root->vallue == vallue)
            return root->m;
        else
            return searchNode(root->r, vallue);
    }
    int dep() {
        return getDep(root) - 1;
    }
    int getDep(Node* root) {
        if (root)
            return std::max(getDep(root->l), getDep(root->r)) + 1;
        else
            return 0;
    }
    void add(T vallue) {
        root = insertWords(root, vallue);
    }
    Node* insertWords(Node* ptr, T words) {
        if (!ptr) {
            ptr = new Node(words);
        } else if (ptr->vallue > words) {
            ptr->l = insertWords(ptr->l, words);
        } else if (ptr->vallue < words) {
            ptr->r = insertWords(ptr->r, words);
        } else if (ptr->vallue == words) {
            ptr->m++;
        }
        return ptr;
    }
};
#endif  // INCLUDE_BST_H_
