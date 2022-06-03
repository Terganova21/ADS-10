// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
std::string or = tree[n - 1];
std::vector<char> prm;
for (int k = 0; k < or.length(); k++) {
prm.push_back(or[k]);
}
return prm;
}
