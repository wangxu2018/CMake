# 限制cmake版本
CMAKE_MINIMUM_REQUIRED (VERSION 3.0)

# 项目名称
PROJECT (Calculator)

# 设置C++版本
SET (CMAKE_CXX_STANDARD 11)

# 添加src子文件夹目录，并且生成bin文件夹保存src生成的文件
ADD_SUBDIRECTORY (src bin)