Rcpp::loadModule("test_module", TRUE)


#' aaaa
#' @export
#' @import Rcpp
#' @import methods
module_test <- function()
{
  a <- Test$new(2)
  b <- Test$new(3)
  print(a$getValue())
  a$merge(b)
  print(a$getValue())
}