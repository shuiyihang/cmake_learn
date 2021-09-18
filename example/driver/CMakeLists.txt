project(driver)

add_library(${PROJECT_NAME} src/oled.c)

add_library(driver::oled ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    INTERFACE
    ${PROJECT_SOURCE_DIR}/inc)