#pragma once
#include <vector>
#include <iterator>

void printVector(const std::vector<int>& v);

template<class T_it>
void printRange(T_it begin, T_it end);

