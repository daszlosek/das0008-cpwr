#include <Rcpp.h>
using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

//[[Rcpp::export]]
NumericVector timesTwo(NumericVector x) {
  return x * 2;
}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
timesTwo(42)
*/


evalCpp("2 * 2")
  
  
#include <RcppArmadillo.h>
  //[[Rcpp::depends(RcppArmadillo)]]
  using namespace Rcpp;
  //[[Rcpp::export]]
  List My_Function(
      double my_double,
      int some_number,
      arma::vec a_vector,
      arma::mat example_matrix,
      arma::cube my_array,
      List some_vectors
  ){
    double new_double = 100*my_double;
    
    List to_return(1);
    to_return[0] = new_double;
    return to_return;
  }