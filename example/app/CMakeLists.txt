project(main)

add_executable(main main.c)

set(DIRS
    ${PROJECT_BINARY_DIR}/../../../include)

message("print val:")
message(${DIRS})

target_include_directories(${PROJECT_NAME}
    PRIVATE
    ${DIRS}
    )

target_link_libraries(${PROJECT_NAME} 
    driver::oled)

