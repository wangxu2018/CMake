# 限制cmake版本
CMAKE_MINIMUM_REQUIRED (VERSION 3.0)

# 项目名称
PROJECT (Calculator)

# 设置C++版本
SET (CMAKE_CXX_STANDARD 11)

# main所需的头文件目录
INCLUDE_DIRECTORIES (${CMAKE_SOURCE_DIR}/include)

# 生成可执行文件calc
ADD_EXECUTABLE (calc main.cpp)

# 添加src子目录
ADD_SUBDIRECTORY (src src)

# 将功能函数生成的静态库链接到二进制文件
TARGET_LINK_LIBRARIES(calc func)