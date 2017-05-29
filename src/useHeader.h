#include <Rcpp.h>
#include <string>

class Book
{
  std::string author;
  std::string title;

public:
  Book() {};
  Book(std::string a, std::string t);
  void print();
};


