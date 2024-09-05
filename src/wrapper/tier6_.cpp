// this code is auto-generated, do not edit manually
    
#include "pycle_wrapper.hpp"
#include "tier6.hpp"

namespace py = pybind11;

auto tier6_(py::module &m) -> void {
m.def("_dilate_labels", &cle::tier6::dilate_labels_func, "Call cle::tier6::dilate_labels_func from C++ CLIc.",
    py::return_value_policy::take_ownership,
    py::arg("device"), py::arg("src"), py::arg("dst"), py::arg("radius"));

    m.def("_erode_labels", &cle::tier6::erode_labels_func, "Call cle::tier6::erode_labels_func from C++ CLIc.",
    py::return_value_policy::take_ownership,
    py::arg("device"), py::arg("src"), py::arg("dst"), py::arg("radius"), py::arg("relabel"));

    m.def("_gauss_otsu_labeling", &cle::tier6::gauss_otsu_labeling_func, "Call cle::tier6::gauss_otsu_labeling_func from C++ CLIc.",
    py::return_value_policy::take_ownership,
    py::arg("device"), py::arg("src0"), py::arg("dst"), py::arg("outline_sigma"));

    m.def("_masked_voronoi_labeling", &cle::tier6::masked_voronoi_labeling_func, "Call cle::tier6::masked_voronoi_labeling_func from C++ CLIc.",
    py::return_value_policy::take_ownership,
    py::arg("device"), py::arg("src"), py::arg("mask"), py::arg("dst"));

    m.def("_voronoi_labeling", &cle::tier6::voronoi_labeling_func, "Call cle::tier6::voronoi_labeling_func from C++ CLIc.",
    py::return_value_policy::take_ownership,
    py::arg("device"), py::arg("src"), py::arg("dst"));

    m.def("_remove_holes", &cle::tier6::remove_holes_func, "Call cle::tier6::remove_holes_func from C++ CLIc.",
    py::return_value_policy::take_ownership,
    py::arg("device"), py::arg("src"), py::arg("dst"), py::arg("max_size"));
}