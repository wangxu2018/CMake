# CMake
CMake项目构建工具的使用

通过x个简单的项目，一步步学习使用cmake

由浅入深。

## project_1
    - 描述：无头文件、cpp文件和CMakeList.txt文件在同一个目录下面的情况
    - 目录结构
        - main.cpp
        - CMakeLists.txt
    - 操作步骤：
        - Step1: mkdir build; cd buid
        - Step2: cmake -G"Unix Makefiles" .. (or cmake -G"MinGW Makefiles" ..)
        - Step3: make
        - Step4: ./calc.exe