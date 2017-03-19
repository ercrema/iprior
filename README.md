# R/iprior: An R package for I-prior regression

[![Build Status](https://travis-ci.org/haziqjamil/iprior.svg?branch=master)](https://travis-ci.org/haziqjamil/iprior)
[![CRAN Status Badge](http://www.r-pkg.org/badges/version/iprior)](https://cran.r-project.org/package=iprior)
[![CRAN downloads](http://cranlogs.r-pkg.org/badges/grand-total/iprior)](https://cran.r-project.org/package=iprior)

Based on the manuscript entitled "Regression with I-priors" by Wicher Bergsma [2017, unpublished]. In a linear regression setting, priors can be assigned to the regression function using a vector space framework, and the posterior estimate of the regression function obtained. I-priors are a class of such priors based on the principle of maximum entropy.

This package performs linear regression modelling using I-priors in R. It is intuitively designed to be similar to `lm`, with both formula and non-formula based input. The parameters of an I-prior model are the scale parameters of the reproducing kernel Hilbert space (RKHS) over the set of covariates, `lambda`, and the standard deviation of model errors, `sigma`. While the main interest of I-prior modelling is prediction, inference is also possible, e.g. via log-likelihood ratio tests.

For installation instructions and some examples of I-prior modelling, continue reading below. The package is documented with help files, and the [wiki](https://github.com/haziqjamil/iprior/wiki/) is a good source to view some discussion topics and further examples.

## Installation

Install R/iprior either by downloading the latest CRAN release

```r
install.packages("iprior")
library(iprior)
```

or the developmental version from this GitHub repository. R/iprior makes use of several C++ code, so as a prerequisite, you must have a working C++ compiler. To get it:

-   On Windows, install [Rtools](https://cran.r-project.org/bin/windows/Rtools/).
-   On Mac, install Xcode from the app store.
-   On Linux, `sudo apt-get install r-base-dev` or similar.

The easiest way to then install from this repo is by using the [devtools](https://github.com/hadley/devtools) package. Install this first.

``` r
install.packages("devtools")
```

Then, run the following code to install and attach the `iprior` package.

``` r
devtools::install_github("haziqjamil/iprior", build_vignettes = TRUE)
library(iprior)
```

*Note: The option `build_vignettes = TRUE` builds the package vignettes for viewing, but takes slightly longer. Set `build_vignettes = FALSE`, or remove this option entirely, to skip building the vignettes.*

## Syntax

To fit an I-prior model to `mod` regressing `y` against `x`, where these are contained in the data frame `dat`, the following syntax are equivalent.

``` r
mod <- iprior(y ~ x, data = dat)  # formula based input
mod <- iprior(y = dat$y, x = dat$x)  # non-formula based input
```

The call to `iprior()` can be accompanied by model options in the form of `model = list()`, such as choosing the RKHS, number of scale parameters, and others. Control options for the EM algorithm fit is done through the option `control = list()`. Find the full list of options by typing `?iprior` in R.

## Resources

View the package vignettes by typing `browseVignettes("iprior")` in R. Also, visit the the [wiki](https://github.com/haziqjamil/iprior/wiki/Vignette-examples) page for some usage examples and other topics of discussions.
