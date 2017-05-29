#' Standard input
#' @export
marryme <- function()
{
  ans <- readline("will you marry me? (y/n) > ")
  return(ans == "y")
}
