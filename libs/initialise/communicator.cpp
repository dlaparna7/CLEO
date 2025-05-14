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

#include "initialise/communicator.hpp"

init_communicator::init_communicator(const Config &config) {
  yac_present = std::isnan(config.get_yac_dynamics().lower_longitude);
  if (yac_present) {
    std::cout << "yac is present";
  } else {
    std::cout << "yac is not present";
  }
};
