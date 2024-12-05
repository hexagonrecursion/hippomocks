set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
  cpptrace
  GIT_REPOSITORY https://github.com/jeremy-rifkin/cpptrace.git
  GIT_TAG        v0.7.3
)
FetchContent_MakeAvailable(cpptrace)

add_executable(
  hippomocks-master
  example.cpp
)
target_include_directories(hippomocks-master PRIVATE HippoMocks)
target_link_libraries(hippomocks-master cpptrace::cpptrace)

add_executable(
  hippomocks-colobot
  example.cpp
)
target_include_directories(hippomocks-colobot PRIVATE hippomocks-from-colobot)
target_link_libraries(hippomocks-colobot cpptrace::cpptrace)
