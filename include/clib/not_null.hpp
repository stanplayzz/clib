#pragma once
#include <cassert>

namespace clib {
template <typename T>
class not_null {
  public:
	not_null(T ptr) : m_ptr(ptr) { assert(m_ptr != nullptr); }

	not_null(std::nullptr_t) = delete;

	T get() const { return m_ptr; }
	operator T() const { return m_ptr; }

	T operator->() const { return m_ptr; }
	auto& operator*() const { return *m_ptr; }

  private:
	T m_ptr;
};
} // namespace clib