// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"
#include <string>

std::vector<char> getPerm(const Tree& tree, int n) {
std::string origin = tree[n - 1];
std::vector<char> prm;
for (int i = 0; i < origin.length(); i++) {
prm.push_back(origin[i]);
}
return prm;
}
