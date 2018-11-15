# brl/bpro/CMakeLists.txt
# main package for processing operations

FIND_PACKAGE(EXPAT REQUIRED)
FIND_PACKAGE(EXPATPP REQUIRED)
if(EXPAT_FOUND)

# Basic process classes
add_subdirectory(bprb)

# Brown core processing
add_subdirectory(core)

# Brown batch processing (Python)
add_subdirectory(bpro_batch)

endif()
