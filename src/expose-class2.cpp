#include <Rcpp.h>
using namespace Rcpp;


/*
 * Experiment: define two classes,
 * one uses the other
 * and expose only one of them to R
*/

struct A
{
  int x;

};

struct B
{
  A a;
  B() { }
  void set_value(int i) { a.x = i; }
  int get_value() { return a.x; }
};



RCPP_EXPOSED_CLASS(B);


RCPP_MODULE(b_module) {

  class_<B>("B")

  .constructor("sets initial value")

  .method("set_value", &B::set_value, "set value")
  .method("get_value", &B::get_value, "get value")
  ;
}




