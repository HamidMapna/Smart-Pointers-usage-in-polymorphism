# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Source Codes/codePracticing/Composite_DP/Smart-Pointers-usage-in-polymorphism/tests/smarttests/build/_deps/gtestlib-src"
  "D:/Source Codes/codePracticing/Composite_DP/Smart-Pointers-usage-in-polymorphism/tests/smarttests/build/_deps/gtestlib-build"
  "D:/Source Codes/codePracticing/Composite_DP/Smart-Pointers-usage-in-polymorphism/tests/smarttests/build/_deps/gtestlib-subbuild/gtestlib-populate-prefix"
  "D:/Source Codes/codePracticing/Composite_DP/Smart-Pointers-usage-in-polymorphism/tests/smarttests/build/_deps/gtestlib-subbuild/gtestlib-populate-prefix/tmp"
  "D:/Source Codes/codePracticing/Composite_DP/Smart-Pointers-usage-in-polymorphism/tests/smarttests/build/_deps/gtestlib-subbuild/gtestlib-populate-prefix/src/gtestlib-populate-stamp"
  "D:/Source Codes/codePracticing/Composite_DP/Smart-Pointers-usage-in-polymorphism/tests/smarttests/build/_deps/gtestlib-subbuild/gtestlib-populate-prefix/src"
  "D:/Source Codes/codePracticing/Composite_DP/Smart-Pointers-usage-in-polymorphism/tests/smarttests/build/_deps/gtestlib-subbuild/gtestlib-populate-prefix/src/gtestlib-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Source Codes/codePracticing/Composite_DP/Smart-Pointers-usage-in-polymorphism/tests/smarttests/build/_deps/gtestlib-subbuild/gtestlib-populate-prefix/src/gtestlib-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Source Codes/codePracticing/Composite_DP/Smart-Pointers-usage-in-polymorphism/tests/smarttests/build/_deps/gtestlib-subbuild/gtestlib-populate-prefix/src/gtestlib-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
