# 保存sub.cpp文件为SRC_LIST变量
SET (SRC_LIST sub.cpp)

# 生成静态库sub
ADD_LIBRARY (sub ${SRC_LIST})