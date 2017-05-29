#include <Rcpp.h>
#include "useHeader.h"


Book::Book(std::string a, std::string t)
{
  author = a;
  title = t;
}

void Book::print()
{
  Rcpp::Rcout << title << " written by " << author;
}


