# This is contrib/brl/bbas/bkml/tests/CMakeLists.txt
FIND_PACKAGE(EXPAT REQUIRED)
FIND_PACKAGE(EXPATPP REQUIRED)

add_executable(bkml_test_all
                test_driver.cxx
                test_bkml.cxx
              )

if(EXPAT_FOUND)
  if(EXPATPP_FOUND)
    target_link_libraries(bkml_test_all bkml expatpp expat ${VXL_LIB_PREFIX}vgl ${VXL_LIB_PREFIX}testlib )
    add_test( NAME bkml_test_bkml COMMAND $<TARGET_FILE:bkml_test_all> test_bkml)

    add_executable(bkml_test_include test_include.cxx )
    target_link_libraries( bkml_test_include bkml expatpp expat)
  endif()
else()
  target_link_libraries(bkml_test_all bkml ${VXL_LIB_PREFIX}vgl ${VXL_LIB_PREFIX}testlib )
  add_test( NAME bkml_test_bkml COMMAND $<TARGET_FILE:bkml_test_all> test_bkml)

  add_executable(bkml_test_include test_include.cxx )
  target_link_libraries( bkml_test_include bkml )
endif()
