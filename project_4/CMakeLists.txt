# 限制cmake版本
CMAKE_MINIMUM_REQUIRED (VERSION 3.0)

# 项目名称
PROJECT (Calculator)

# 设置C++版本
SET (CMAKE_CXX_STANDARD 11)

# 添加add/div/mul/sub子文件夹目录，
# 并且生成add/div/mul/sub文件夹保存其对应生成的文件
ADD_SUBDIRECTORY (add add)
ADD_SUBDIRECTORY (div div)
ADD_SUBDIRECTORY (mul mul)
ADD_SUBDIRECTORY (sub sub)

# 链接main所需的头文件目录
INCLUDE_DIRECTORIES (
    ${CMAKE_SOURCE_DIR}/add
    ${CMAKE_SOURCE_DIR}/div
    ${CMAKE_SOURCE_DIR}/mul
    ${CMAKE_SOURCE_DIR}/sub
    )

# 保存main.cpp文件为SRC_LIST变量
SET (SRC_LIST main.cpp)

# 生成可执行文件calc
ADD_EXECUTABLE (calc ${SRC_LIST})

# 将生成的静态库链接到可执行文件calc
TARGET_LINK_LIBRARIES (calc add div sub mul)