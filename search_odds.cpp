//
// Created by rudri on 9/6/2020.
//

#include "search_odds.h"

map<int, int> m;

collection_t search_odds(collection_t data) { 
  collection_t vec;
  m.clear();
  for(auto iter=data.begin(); iter!=data.end(); ++iter) {
    if(m.find(*iter)->first) {
      int x = m.find(*iter)->second;
      x++;
      m[*iter] = x;
    } else m[*iter] = 1;
  }
  
  for(auto iter=m.begin(); iter!=m.end(); ++iter) {
    if((*iter).second % 2 != 0) {
      vec.push_back((*iter).first);
    }
  }
  return vec;
}