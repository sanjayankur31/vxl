# Adapted from https://github.com/jirihnidek/verse-ply-uploader/blob/master/build_files/cmake/modules/FindEXPATPP.cmake
# This module tries to find EXPATPP library and include files
#
# EXPATPP_INCLUDE_DIR, where to find verse.h
# EXPATPP_LIBRARY_DIR, where to find libverse.so
# EXPATPP_LIBRARIES, the library to link against
# EXPATPP_FOUND, IF false, do not try to use Verse
#

FIND_PATH ( EXPATPP_INCLUDE_DIR expatpp.h
    /usr/include
    /usr/include/expatpp
    /usr/local/include
    /usr/local/include/expatpp
)

FIND_LIBRARY ( EXPATPP_LIBRARIES
    NAMES expatpp libexpatpp
    PATHS /usr/local/lib /usr/local/lib64 /usr/lib /usr/lib64
)

GET_FILENAME_COMPONENT( EXPATPP_LIBRARY_DIR ${EXPATPP_LIBRARIES} PATH )

SET ( EXPATPP_FOUND "NO" )
IF ( EXPATPP_INCLUDE_DIR )
    IF ( EXPATPP_LIBRARIES )
        SET ( EXPATPP_LIBRARY ${EXPATPP_LIBRARIES} )
        SET ( EXPATPP_FOUND "YES" )
    ENDIF ( EXPATPP_LIBRARIES )
ENDIF ( EXPATPP_INCLUDE_DIR )

MARK_AS_ADVANCED (
    EXPATPP_LIBRARY_DIR
    EXPATPP_INCLUDE_DIR
    EXPATPP_LIBRARIES
    EXPATPP_LIBRARY
)
