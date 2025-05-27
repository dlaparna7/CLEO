/*
 * Copyright (c) 2024 MPI-M, Clara Bayley
 *
 *
 * ----- CLEO -----
 * File: communicator.hpp
 * Project: initialise
 * Created Date: Tuesday 06 May 2025
 * Author: Lakshmi Aparna Devulapalli
 * Additional Contributors:
 * -----
 * Last Modified:
 * Modified By: CB
 * -----
 * License: BSD 3-Clause "New" or "Revised" License
 * https://opensource.org/licenses/BSD-3-Clause
 * -----
 * File Description:
 * Header file for members of Config struct which determine CLEO's required configuration
 * parameters read from a config file.
 */
#ifndef LIBS_INITIALISE_COMMUNICATOR_HPP_
#define LIBS_INITIALISE_COMMUNICATOR_HPP_

#include <mpi.h>
#include <filesystem>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include "config.hpp"



class init_communicator {
 public:
  static int yac_comp_id;
  static MPI_Comm comm;
  bool yac_present;
  explicit init_communicator(const Config &config);
  static MPI_Comm get_communicator();
};

#endif  // LIBS_INITIALISE_COMMUNICATOR_HPP_
