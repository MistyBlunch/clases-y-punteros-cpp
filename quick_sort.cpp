//
// Created by rudri on 9/6/2020.
//

#include "quick_sort.h"

number_t partition(vector<number_t*>& vec, number_t lo, number_t hi) {
  int pivot = *vec[hi];
  int i = (lo - 1);

  for(int j = lo; j < hi; j++) {
    if(*vec[j] <= pivot) {
      i++;
      if(i != j) swap(vec[i], vec[j]);
    }
  }

  swap(vec[i + 1], vec[hi]);
  return (i + 1);
}

void quicksort(vector<number_t*>& vec, number_t lo, number_t hi) {
  if(lo < hi) {
    number_t pivot = partition(vec, lo, hi);
    quicksort(vec, lo, pivot - 1);
    quicksort(vec, pivot + 1, hi);
  }
}

quicksort_t& operator<<(quicksort_t& qs, const std::string& file_name) {
  string n;

  ifstream inFile(file_name);
  if(inFile.is_open())
    while(getline(inFile, n)) {
      qs.data_ = new number_t(stoi(n));
      qs.vec.push_back(qs.data_);
    }
  inFile.close();
  return qs;
}

quicksort_t& operator>>(quicksort_t& qs, const std::string& file_name) {
  qs.size_ = qs.vec.size();
  ofstream outFile(file_name);

  quicksort(qs.vec, 0, qs.size_-1);

  for(int i=0; i<qs.vec.size(); ++i) {
    number_t* a = qs.vec[i];
    outFile << *a << '\n';
  }
 
  outFile.close();

  return qs;
}
