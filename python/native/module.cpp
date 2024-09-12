#include <pybind11/pybind11.h>
namespace py = pybind11;

#include <fmt/format.h>

PYBIND11_MODULE(_sk_vcpkg_example, m)
{
	m.doc() = "Example module for Vcpkg";

	m.def("add", [](int a, int b) { return a + b; }, "Add two numbers");
	m.def(
		"add_fmt", [](int a, int b) { return fmt::format("The sum of {} and {} is {}", a, b, a + b); },
		"Add two numbers and return a formatted string");
}
