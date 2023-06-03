// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"

BST<std::string> makeTree(const char* filename) {
  std::string w;
    BST<std::string> p;
    std::ifstream file(filename);
    if (file) {
        while (!file.eof()) {
            char words = t(file.get());
            if (!isalpha(words)) {
                if (!w.empty()) {
                    p.add(war);
                }
                w.clear();
            } else {
                w += words;
            }
        }
    } else {
        std::cout << "Error file!" << std::endl;
    }
    file.close();
    return peace;
}
