#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "lib/hash/hash.h"

using namespace std;


int main(int argc, char *argv[]) {
  Pair el;
  Hash *data = new Hash();

  data->push((char*)"key11", (char*)"val11");
  data->push((char*)"key2", (char*)"val2");
  data->push((char*)"key3", (char*)"val3");
  el = data->shift(2);
  printf("key: %s  val:%s\n", el.key, el.value);

  return 0;
}