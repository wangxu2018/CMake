# 索引所需的头文件目录
INCLUDE_DIRECTORIES (${CMAKE_SOURCE_DIR}/include)

# 保存main.cpp文件为SRC_LIST变量
SET (SRC_LIST main.cpp)

# 生成可执行文件calc
ADD_EXECUTABLE (calc ${SRC_LIST})