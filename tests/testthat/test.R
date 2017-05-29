library(testthat)

test_that("input", {
  marryme <- function() {
    ans <- readline("will you marry me? (y/n) > ")
    return(ans == "y")
  }

  expect_false(marryme())  # this is good
  #expect_true(marryme())   # this is no good
})
