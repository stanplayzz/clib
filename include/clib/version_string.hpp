#pragma once
#include "clib/format_parser.hpp"
#include "clib/version.hpp"
#include <format>

template <>
struct std::formatter<clib::Version> : clib::FormatParser {
	static auto format(clib::Version const& version, std::format_context& fc) -> std::format_context::iterator;
};
