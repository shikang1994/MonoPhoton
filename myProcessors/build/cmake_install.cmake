# Install script for directory: /home/cs004/yuichi/working/MonoPhoton/myProcessors

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/cs004/yuichi/working/MonoPhoton/myProcessors")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
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

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmymarlin.so.0.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmymarlin.so.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmymarlin.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/cs004/yuichi/working/MonoPhoton/myProcessors/lib:/opt/ilcsoft/v01-19-04/Marlin/v01-12/lib:/opt/ilcsoft/v01-19-04/lcio/v02-09/lib:/opt/ilcsoft/v01-19-04/gear/v01-07/lib:/opt/ilcsoft/v01-19-04/CLHEP/2.3.1.1/lib:/opt/ilcsoft/v01-19-04/ilcutil/v01-03/lib:/opt/ilcsoft/v01-19-04/root/6.08.02/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES
    "/home/cs004/yuichi/working/MonoPhoton/myProcessors/build/lib/libmymarlin.so.0.1.0"
    "/home/cs004/yuichi/working/MonoPhoton/myProcessors/build/lib/libmymarlin.so.0.1"
    "/home/cs004/yuichi/working/MonoPhoton/myProcessors/build/lib/libmymarlin.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmymarlin.so.0.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmymarlin.so.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmymarlin.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/opt/ilcsoft/v01-19-04/Marlin/v01-12/lib:/opt/ilcsoft/v01-19-04/lcio/v02-09/lib:/opt/ilcsoft/v01-19-04/gear/v01-07/lib:/opt/ilcsoft/v01-19-04/CLHEP/2.3.1.1/lib:/opt/ilcsoft/v01-19-04/ilcutil/v01-03/lib:/opt/ilcsoft/v01-19-04/root/6.08.02/lib:::::::::::::::::::::::::::::::::::::::::::::::::::::::"
           NEW_RPATH "/home/cs004/yuichi/working/MonoPhoton/myProcessors/lib:/opt/ilcsoft/v01-19-04/Marlin/v01-12/lib:/opt/ilcsoft/v01-19-04/lcio/v02-09/lib:/opt/ilcsoft/v01-19-04/gear/v01-07/lib:/opt/ilcsoft/v01-19-04/CLHEP/2.3.1.1/lib:/opt/ilcsoft/v01-19-04/ilcutil/v01-03/lib:/opt/ilcsoft/v01-19-04/root/6.08.02/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/cs004/yuichi/working/MonoPhoton/myProcessors/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
