#include "./hash.h"

using namespace std;

Hash::Hash() {};

bool Hash::push(char *key, char *value) {
  try {
     Pair el;
     el.key = key;
     el.value = value;
     this->data.push_back(el);
     return true;
  } catch (...) {
     return false;
  }
};

Pair Hash::shift(int index) {
  if (index > this->data.size() || index < 0) { return (Pair){}; }
  return this->data[index];
};
