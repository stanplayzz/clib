#pragma once

namespace clib {
class Polymorphic {
  public:
	Polymorphic() = default;
	virtual ~Polymorphic() = default;

	Polymorphic(Polymorphic const&) = default;
	Polymorphic(Polymorphic&&) = default;
	auto operator=(Polymorphic const&) -> Polymorphic& = default;
	auto operator=(Polymorphic&&) -> Polymorphic& = default;
};

class MoveOnly {
  public:
	MoveOnly(MoveOnly const&) = delete;
	auto operator=(MoveOnly const&) = delete;

	MoveOnly() = default;
	~MoveOnly() = default;
	MoveOnly(MoveOnly&&) = default;
	auto operator=(MoveOnly&&) -> MoveOnly& = default;
};
} // namespace clib