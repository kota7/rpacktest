#include <Rcpp.h>
#include <string>
#include "useHeader.h"


//' Declares that I read a famous textbook.
//' @export
// [[Rcpp::export]]
void prml()
{
  Book b("Bishop", "Pattern Recognition and Machine Learning");
  Rcpp::Rcout << "I read ";
  b.print();
  Rcpp::Rcout << "\n";
}
