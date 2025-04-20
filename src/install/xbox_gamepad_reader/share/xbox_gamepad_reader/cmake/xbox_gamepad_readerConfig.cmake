# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_xbox_gamepad_reader_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED xbox_gamepad_reader_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(xbox_gamepad_reader_FOUND FALSE)
  elseif(NOT xbox_gamepad_reader_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(xbox_gamepad_reader_FOUND FALSE)
  endif()
  return()
endif()
set(_xbox_gamepad_reader_CONFIG_INCLUDED TRUE)

# output package information
if(NOT xbox_gamepad_reader_FIND_QUIETLY)
  message(STATUS "Found xbox_gamepad_reader: 0.0.0 (${xbox_gamepad_reader_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'xbox_gamepad_reader' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT xbox_gamepad_reader_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(xbox_gamepad_reader_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${xbox_gamepad_reader_DIR}/${_extra}")
endforeach()
