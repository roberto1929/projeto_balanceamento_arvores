cmake_minimum_required(VERSION 3.29)
project(projeto_balanceamento_arvores C)

set(CMAKE_C_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
        libprg
        GIT_REPOSITORY https://github.com/roberto1929/libprg
        GIT_TAG origin/main
        # GIT_TAG 0.0.1
        # You can reference a local directory instead
        # URL file:///${CMAKE_CURRENT_SOURCE_DIR}/../libprg
)
FetchContent_MakeAvailable(libprg)

add_executable(projeto_balanceamento_arvores main.c)


target_link_libraries(projeto_balanceamento_arvores PUBLIC libprg)