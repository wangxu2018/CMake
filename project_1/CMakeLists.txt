# 限制cmake版本
CMAKE_MINIMUM_REQUIRED (VERSION 3.0)

# 项目名称
PROJECT (Calculator)

# 设置C++版本
SET (CMAKE_CXX_STANDARD 11)

# 保存main.cpp文件为SRC_LIST变量
SET (SRC_LIST main.cpp)

# 生成可执行文件calc
ADD_EXECUTABLE (calc ${SRC_LIST})