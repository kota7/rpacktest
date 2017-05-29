loadModule("test_module", TRUE)


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



loadModule("b_module", TRUE)

#' bbbb
#' @export
b <- function()
{
  obj <- B$new()
  obj$set_value(5)
  print(obj$get_value())
  obj$set_value(50)
  print(obj$get_value())
}