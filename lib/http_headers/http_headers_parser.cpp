#include "./http_headers_parser.h"
#include "../hash/hash.h"

HttpHeadersParser::HttpHeadersParser(char *query) {
  this->query = query;
  this->params->push((char*)"key1", (char*)"val1");
  this->params->push((char*)"key2", (char*)"val2");
  this->params->push((char*)"key3", (char*)"val3");
  this->method = (char*)"GET";
};

void HttpHeadersParser::parse() {
};

char** HttpHeadersParser::getQuery() {
  return this->query;
};

Hash* HttpHeadersParser::getParams() {
  return this->params;
};

char* HttpHeadersParser::getMethod() {
  return this->method;
};