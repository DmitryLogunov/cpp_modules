#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "lib/hash/hash.h"
#include "lib/http_headers/http_headers_parser.h"

using namespace std;


int main(int argc, char *argv[]) {
  Pair el;
  Hash *params;
  char *query;
  HttpHeadersParser *headers = new HttpHeadersParser((char*)"test query");

  query = headers->getQuery();

/*
  data->push((char*)"key11", (char*)"val11");
  data->push((char*)"key2", (char*)"val2");
  data->push((char*)"key3", (char*)"val3");
  el = data->shift(2);
  printf("key: %s  val:%s\n", el.key, el.value);
*/
  printf("query: %s\n", query);

  return 0;
}