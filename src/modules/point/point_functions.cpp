module point;

import std;

std::string DebugPoint(const Point& p) noexcept {
    constexpr auto fmt{"Point: {}"};
    return std::format(fmt, p);
}
