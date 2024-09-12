find_package(fmt CONFIG REQUIRED)

pybind11_add_module(_sk_vcpkg_example
	module.cpp
)

target_link_libraries(_sk_vcpkg_example PRIVATE fmt::fmt)

install(TARGETS _sk_vcpkg_example LIBRARY DESTINATION sk_vcpkg_example)
