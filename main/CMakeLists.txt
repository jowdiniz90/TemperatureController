set(Main_SRCS
    main.cpp
)

add_executable(TemperatureController
    ${Main_SRCS}
)

# Specify here the libraries this program depends on
target_link_libraries(
lib
)

install(TARGETS TemperatureController DESTINATION bin)
