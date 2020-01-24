# Install script for directory: /home/nhg/workspace/ROSUr_msgs/smartsoft

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/nhg/SOFTWARE/smartsoft")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/modules" TYPE FILE FILES "/home/nhg/workspace/ROSUr_msgs/smartsoft/build/ROSUr_msgsConfigVersion.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/modules" TYPE FILE FILES "/home/nhg/workspace/ROSUr_msgs/smartsoft/build/ROSUr_msgsConfig.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libROSUr_msgs.so.1.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libROSUr_msgs.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libROSUr_msgs.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/build/libROSUr_msgs.so.1.0.0"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/build/libROSUr_msgs.so.1"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/build/libROSUr_msgs.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libROSUr_msgs.so.1.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libROSUr_msgs.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libROSUr_msgs.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/nhg/SOFTWARE/smartsoft/repos/UtilityRepository/smartXml/build:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/modules/ROSUr_msgsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/modules/ROSUr_msgsTargets.cmake"
         "/home/nhg/workspace/ROSUr_msgs/smartsoft/build/CMakeFiles/Export/modules/ROSUr_msgsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/modules/ROSUr_msgsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/modules/ROSUr_msgsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/modules" TYPE FILE FILES "/home/nhg/workspace/ROSUr_msgs/smartsoft/build/CMakeFiles/Export/modules/ROSUr_msgsTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/modules" TYPE FILE FILES "/home/nhg/workspace/ROSUr_msgs/smartsoft/build/CMakeFiles/Export/modules/ROSUr_msgsTargets-noconfig.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ROSUr_msgs" TYPE FILE FILES
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src/ROSUr_msgs/Ur_msgs_SetSpeedSliderFractionResponse.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src/ROSUr_msgs/Ur_msgs_RobotModeDataMsg.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src/ROSUr_msgs/Ur_msgs_RobotStateRTMsg.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src/ROSUr_msgs/Ur_msgs_SetIOResponse.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src/ROSUr_msgs/Ur_msgs_SetSpeedSliderFractionRequest.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src/ROSUr_msgs/Ur_msgs_ToolDataMsg.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src/ROSUr_msgs/Ur_msgs_SetPayloadResponse.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src/ROSUr_msgs/Ur_msgs_Analog.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src/ROSUr_msgs/Ur_msgs_Digital.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src/ROSUr_msgs/Ur_msgs_SetPayloadRequest.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src/ROSUr_msgs/Ur_msgs_SetIORequest.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src/ROSUr_msgs/Ur_msgs_MasterboardDataMsg.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src/ROSUr_msgs/Ur_msgs_IOStates.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetSpeedSliderFractionResponseCore.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetSpeedSliderFractionRequestACE.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetIOResponseCore.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetPayloadResponseCore.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/enumUr_msgs_AnalogType.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetIOResponseACE.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetIORequestCore.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetPayloadResponseData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetPayloadRequestCore.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_AnalogCore.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_ToolDataMsgData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetPayloadRequestACE.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_ToolDataMsgACE.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_ToolDataMsgCore.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_RobotModeDataMsgCore.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetPayloadResponseACE.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/enumUr_msgs_ToolDataMsgTypeData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/enumUr_msgs_SetPayloadType.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetSpeedSliderFractionResponseData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/enumUr_msgs_SetPayloadTypeData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_RobotStateRTMsgData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_IOStatesData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_AnalogData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/enumUr_msgs_SetSpeedSliderFractionTypeData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_DigitalACE.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/enumUr_msgs_AnalogTypeData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetSpeedSliderFractionResponseACE.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_IOStatesACE.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_RobotStateRTMsgCore.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_RobotModeDataMsgACE.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/enumUr_msgs_ToolDataMsgType.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetIORequestACE.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetIORequestData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetSpeedSliderFractionRequestCore.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_IOStatesCore.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetIOResponseData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/enumUr_msgs_SetIOTypeData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_AnalogACE.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_RobotModeDataMsgData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_MasterboardDataMsgCore.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_DigitalCore.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/enumUr_msgs_SetSpeedSliderFractionType.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetSpeedSliderFractionRequestData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_DigitalData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_RobotStateRTMsgACE.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_MasterboardDataMsgACE.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_MasterboardDataMsgData.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/enumUr_msgs_SetIOType.hh"
    "/home/nhg/workspace/ROSUr_msgs/smartsoft/src-gen/ROSUr_msgs/Ur_msgs_SetPayloadRequestData.hh"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ROSUr_msgs" TYPE FILE FILES "/home/nhg/workspace/ROSUr_msgs/smartsoft/build/hash.hh")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/nhg/workspace/ROSUr_msgs/smartsoft/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
