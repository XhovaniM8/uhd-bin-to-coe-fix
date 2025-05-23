//
// Copyright 2015 National Instruments Corp.
//
// SPDX-License-Identifier: GPL-3.0-or-later
//

#pragma once

#include <uhd/config.hpp>
#include <string>

namespace uhd { namespace build_info {

//! Return the version of Boost this build was built with.
UHD_API const std::string boost_version();

//! Return the date and time (GMT) this UHD build was built.
UHD_API const std::string build_date();

//! Return the C compiler used for this build.
UHD_API const std::string c_compiler();

//! Return the C++ compiler used for this build.
UHD_API const std::string cxx_compiler();

//! Return the C flags passed into this build.
UHD_API const std::string c_flags();

//! Return the C++ flags passed into this build.
UHD_API const std::string cxx_flags();

//! Return the UHD components enabled for this build, comma-delimited.
UHD_API const std::string enabled_components();

//! Return the default CMake install prefix for this build.
UHD_API const std::string install_prefix();

//! Return the version of libusb this build was built with.
UHD_API const std::string libusb_version();

//! Return the version of DPDK this build was built with.
UHD_API const std::string dpdk_version();

//! Return the value of PKG_DATA_DIR at build time (e.g., "share/uhd").
UHD_API const std::string pkg_data_dir();
}} // namespace uhd::build_info
