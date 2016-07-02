#include <Rcpp.h>
#include <string>

class Person
{
  std::string name;

public:
  void setName(std::string n)
  {
    name = n;
  }
  void selfIntroduce(); // declare and define later
};


// you can define a class functions outside the class definition
// this makes the code readable for a long function.
void Person::selfIntroduce()
{
  Rcpp::Rcout << name << " desu!\n";
}



// Rcpp::export only export the function from cpp to R.
// But the function is not exported to the package users.
// You need roxygen code with @export for putting your function
// to the frontend

//' Perfume members introduce themselves on your console
//' @export
// [[Rcpp::export]]
void perfumeNames()
{
  std::vector<Person> members(3);
  members[0].setName("a-chan");
  members[1].setName("nocchi");
  members[2].setName("kashiyuka");

  for (int i = 0; i < members.size(); i++)
    members[i].selfIntroduce();
}


