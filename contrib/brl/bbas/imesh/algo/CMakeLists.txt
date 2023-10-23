# brl/bbas/imesh/algo/CMakeLists.txt
# indexed mesh library algorithms
include( ${VXL_CMAKE_DIR}/FindNetlib.cmake )
include_directories( ${GEL_INCLUDE_DIR}/mrc )

set(imesh_algo_sources
    imesh_transform.cxx          imesh_transform.h
    imesh_intersect.cxx          imesh_intersect.h
    imesh_operations.cxx         imesh_operations.h
    imesh_pca.cxx                imesh_pca.h
    imesh_project.cxx            imesh_project.h
    imesh_detect.cxx             imesh_detect.h
    imesh_kd_tree.cxx            imesh_kd_tree.h      imesh_kd_tree.hxx
    imesh_render.cxx             imesh_render.h
    imesh_imls_surface.cxx       imesh_imls_surface.h imesh_imls_surface.hxx
   )
aux_source_directory(Templates imesh_algo_sources)

vxl_add_library(LIBRARY_NAME imesh_algo LIBRARY_SOURCES ${imesh_algo_sources} )

target_link_libraries( imesh_algo imesh ${VXL_LIB_PREFIX}vpgl ${VXL_LIB_PREFIX}vgl_algo ${VXL_LIB_PREFIX}vgl ${VXL_LIB_PREFIX}vnl_algo ${VXL_LIB_PREFIX}vnl ${VXL_LIB_PREFIX}vil )


if( BUILD_TESTING )
  add_subdirectory(tests)
endif()
