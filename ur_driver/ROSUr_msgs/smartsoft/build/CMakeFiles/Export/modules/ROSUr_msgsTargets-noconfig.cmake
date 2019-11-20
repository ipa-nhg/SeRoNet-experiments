#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ROSUr_msgs" for configuration ""
set_property(TARGET ROSUr_msgs APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ROSUr_msgs PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libROSUr_msgs.so.1.0.0"
  IMPORTED_SONAME_NOCONFIG "libROSUr_msgs.so.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS ROSUr_msgs )
list(APPEND _IMPORT_CHECK_FILES_FOR_ROSUr_msgs "${_IMPORT_PREFIX}/lib/libROSUr_msgs.so.1.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
