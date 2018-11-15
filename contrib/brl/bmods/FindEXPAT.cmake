#
# Find an Expat library
#
#
# This file is used to manage using either a natively provided Expat library
# or the one in b3p if provided.
#
#
# As per the standard scheme the following definitions are used
# EXPAT_INCLUDE_DIR - where to find expat.h
# EXPAT_LIBRARIES   - the set of libraries to include to use Expat.
# EXPAT_FOUND       - TRUE, if available somewhere on the system.
# EXPATPP_INCLUDE_DIR - where to find expatpp.h
# EXPATPP_LIBRARIES   - the set of libraries to include to use ExpatPP.
# EXPATPP_FOUND       - TRUE, if available somewhere on the system.

# Additionally
# VXL_USING_NATIVE_EXPAT   - True if we are using an Expat library provided outside vxl (or b3p)
# VXL_USING_NATIVE_EXPATPP - True if we are using an ExpatPP library provided outside vxl (or b3p)

# If this FORCE variable is unset or is FALSE, try to find a native library.
if(NOT EXPAT_FOUND)

  # If this FORCE variable is unset or is FALSE, try to find a native library.
  if( NOT VXL_FORCE_B3P_EXPAT )
    find_package(EXPAT)
    if(EXPAT_FOUND)
      set(VXL_USING_NATIVE_EXPAT "YES")
    endif()
    find_package(EXPATPP)
    if(EXPATPP_FOUND)
      set(VXL_USING_NATIVE_EXPATPP "YES")
    endif()
  endif()


  #
  # At some point, in a "release" version, it is possible that someone
  # will not have the b3p expat library, so make sure the headers
  # exist.
  #
  if(NOT EXPAT_FOUND)
    if(EXISTS ${VXL_ROOT_SOURCE_DIR}/contrib/brl/b3p/expat/expat.h)
      set( EXPAT_FOUND "YES" )
      set( EXPAT_LIBRARIES expat )
      set( EXPAT_LIBRARY expat )
      set( EXPAT_INCLUDE_DIRS ${VXL_ROOT_SOURCE_DIR}/contrib/brl/b3p/expat ${BRL_BINARY_DIR}/b3p/expat )
      set( EXPAT_INCLUDE_DIR  ${VXL_ROOT_SOURCE_DIR}/contrib/brl/b3p/expat ${BRL_BINARY_DIR}/b3p/expat )
      set( EXPAT_INSTALL_INCLUDE_DIR ${CMAKE_INSTALL_PREFIX}/include/vxl/contrib/brl/b3p/expat)
    endif()
  endif()

endif()
#mark_as_advanced(EXPAT_INCLUDE_DIR EXPAT_LIBRARY)
