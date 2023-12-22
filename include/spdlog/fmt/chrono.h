//
// Copyright(c) 2016 Gabi Melman.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)
//

#pragma once
//
// include bundled or external copy of fmtlib's chrono support
//
#include <spdlog/tweakme.h>

#if !defined(SPDLOG_USE_STD_FORMAT)
    #include <fmt/chrono.h>
#endif
