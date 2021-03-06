% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/ipriorMod_methods.R
\name{sigma}
\alias{sigma}
\alias{sigma.ipriorMod}
\title{Obtain the standard deviation of the residuals 'sigma'}
\usage{
\method{sigma}{ipriorMod}(object, ...)
}
\arguments{
\item{object}{An object of class \code{ipriorMod}.}

\item{...}{Not used.}
}
\description{
Extract the standard deviation of the residuals. For I-prior models, this is
\code{sigma = 1 / sqrt(psi)}.
}
