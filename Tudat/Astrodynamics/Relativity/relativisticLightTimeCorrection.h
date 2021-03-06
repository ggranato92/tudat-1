/*    Copyright (c) 2010-2017, Delft University of Technology
 *    All rigths reserved
 *
 *    This file is part of the Tudat. Redistribution and use in source and
 *    binary forms, with or without modification, are permitted exclusively
 *    under the terms of the Modified BSD license. You should have received
 *    a copy of the license with this file. If not, please or visit:
 *    http://tudat.tudelft.nl/LICENSE.
 */

#ifndef TUDAT_RELATIVISTICLIGHTTIMECORRECTIONS_H
#define TUDAT_RELATIVISTICLIGHTTIMECORRECTIONS_H

#include "Tudat/Astrodynamics/BasicAstrodynamics/physicalConstants.h"
#include <cmath>
#include <vector>

#include <boost/function.hpp>
#include <boost/lambda/lambda.hpp>

#include <Eigen/Core>

#include "Tudat/Basics/basicTypedefs.h"

namespace tudat
{

namespace relativity
{

//! Function to calculate first order relativistic light time correction due to a gravitating point mass.
/*!
 *  Function to calculate first order relativistic light time correction due to a gravitating point mass,
 *  according to Eq. (11.17) of 2010 IERS conventions.
 *  \param bodyGravitationalParameter Gravitational parameter of gravitating body.
 *  \param transmitterPosition Position of origin of electromagnetic signal (at time of transmission).
 *  \param receiverPosition Position of target of electromagentic signal (at time of reception)
 *  \param centralBodyPosition Position of perturbing body (at certain time during signal propagation).
 *  \param ppnParameterGamma Parametric post-Newtonian parameter gamma, a measure for the space-time curvature due to a unit rest mass (1.0 in GR)
 *  \return Light time correction (in seconds) due to the gravitating point mass.
 */
double calculateFirstOrderLightTimeCorrectionFromCentralBody( const double bodyGravitationalParameter,
                                                              const Eigen::Vector3d& transmitterPosition,
                                                              const Eigen::Vector3d& receiverPosition,
                                                              const Eigen::Vector3d& centralBodyPosition,
                                                              const double ppnParameterGamma = 1.0 );
} // namespace relativity

} // namespace tudat
#endif // TUDAT_RELATIVISTICLIGHTTIMECORRECTIONS_H
