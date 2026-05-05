#include "clib/version_string.hpp"

auto std::formatter<clib::Version>::format(clib::Version const& version, std::format_context& fc)
	-> std::format_context::iterator {
	return format_to(fc.out(), "v{}.{}.{}", version.major, version.minor, version.patch);
}