add_executable( imesh_algo_test_include test_include.cxx )
target_link_libraries( imesh_algo_test_include imesh_algo)

add_executable( imesh_algo_test_template_include test_template_include.cxx )
target_link_libraries( imesh_algo_test_template_include imesh_algo)

include( ${VXL_CMAKE_DIR}/FindNetlib.cmake )
