//
// Copyright 2013-2014 Ettus Research LLC
// Copyright 2018 Ettus Research, a National Instruments Company
//
// SPDX-License-Identifier: GPL-3.0-or-later
//

#pragma once

#include <uhdlib/transport/nirio/nirio_resource_manager.h>
#include <uhdlib/transport/nirio/niriok_proxy.h>

namespace uhd { namespace niusrprio {

class UHD_API nifpga_lvbitx
{
public:
    typedef std::shared_ptr<nifpga_lvbitx> sptr;

    virtual ~nifpga_lvbitx(){};

    virtual const char* get_bitfile_path()       = 0;
    virtual const char* get_signature()          = 0;
    virtual const char* get_bitstream_checksum() = 0;

    virtual size_t get_input_fifo_count()       = 0;
    virtual const char** get_input_fifo_names() = 0;

    virtual size_t get_output_fifo_count()       = 0;
    virtual const char** get_output_fifo_names() = 0;

    virtual size_t get_control_count()       = 0;
    virtual const char** get_control_names() = 0;

    virtual size_t get_indicator_count()       = 0;
    virtual const char** get_indicator_names() = 0;

    virtual void init_register_info(nirio_register_info_vtr& vtr) = 0;
    virtual void init_fifo_info(nirio_fifo_info_vtr& vtr)         = 0;

protected:
    std::string _get_bitstream_checksum(const std::string& file_path);
};

}} // namespace uhd::niusrprio
