#pragma once

namespace clib {
template <typename CharT>
struct BasicFormatParser {
	template <typename FormatParseContext>
	constexpr auto parse(FormatParseContext& pc) const {
		return pc.begin();
	}
};

using FormatParser = BasicFormatParser<char>;
} // namespace clib