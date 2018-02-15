#ifndef HASH_H
#define HASH_H

#include <vector>

using namespace std;

struct Pair {
  char *key;
  char *value;
};

class Hash {
   private:
     std::vector<Pair> data;

   public:
     Hash();
     ~Hash();
     bool push(char *key, char *value);
     Pair shift(int index);
};

#endif