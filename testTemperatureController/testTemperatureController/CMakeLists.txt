file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(tesTemperatureController ${SRCS})

TARGET_LINK_LIBRARIES(tesTemperatureController
    lib
    libgtest
    libgmock
)

add_test(NAME testTemperatureController
         COMMAND testTemperatureController)
