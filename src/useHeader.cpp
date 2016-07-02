#include <Rcpp.h>
#include "useHeader.hpp"


Book::Book(std::string a, std::string t)
{
  author = a;
  title = t;
}

void Book::print()
{
  Rcpp::Rcout << title << " written by " << author;
}


