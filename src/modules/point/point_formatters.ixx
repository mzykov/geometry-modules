export module point:formatters;

import std;
import :types;

namespace std {
	template <>
	struct formatter<Point, char> {
		constexpr auto parse(std::format_parse_context &ctx) const { return ctx.begin(); }

		template <typename FormatContext>
		auto format(const Point &p, FormatContext &ctx) const {
			return format_to(ctx.out(), "({}, {}, {})", p.x, p.y, p.z);
		}
	};
}  // namespace std
