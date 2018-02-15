/*
Разбор HTTP заголовков:

query: GET /?param=value HTTP/1.1
Host: localhost:5000
User-Agent: Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:58.0) Gecko/20100101 Firefox/58.0
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,
...
*/
#ifndef HTTP_HEADERS_PARSER_H
#define HTTP_HEADERS_PARSER_H
#include "../hash/hash.h"

class HttpHeadersParser {
  private:
    char *query[];
    char *method;
    Hash *params;
    void parse();

  public:
    HttpHeadersParser(char *query);
    ~HttpHeadersParser();
    char** getQuery();
    Hash* getParams();
    char* getMethod();
};

#endif