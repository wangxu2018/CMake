# CMake
CMake项目构建工具的使用

通过9个简单的项目，一步步学习使用cmake

由浅入深。

## project_1
    - 描述：无头文件、cpp文件和主CMakeList.txt文件在同一个目录下面的情况
    - 目录结构
        main.cpp
        CMakeLists.txt
    - 操作步骤：
        - Step1: mkdir build; cd buid
        - Step2: cmake -G"Unix Makefiles" .. (or cmake -G"MinGW Makefiles" ..)
        - Step3: make
        - Step4: ./calc.exe

## project_2
    - 描述：无头文件、cpp文件和主CMakeList.txt文件不在同一个目录下面的情况
    - 目录结构
        - src
            main.cpp
            CMakeList.txt
        CMakeLists.txt
    - 操作步骤：
        - Step1: mkdir build; cd buid
        - Step2: cmake -G"Unix Makefiles" .. (or cmake -G"MinGW Makefiles" ..)
        - Step3: make
        - Step4: ./calc.exe

## project_3
    - 描述：头文件、cpp文件和主CMakeList.txt文件不在同一个目录下面的情况
    - 目录结构
        - include
            include.h
        - src
            main.cpp
            CMakeList.txt
        CMakeLists.txt
    - 操作步骤：
        - Step1: mkdir build; cd buid
        - Step2: cmake -G"Unix Makefiles" .. (or cmake -G"MinGW Makefiles" ..)
        - Step3: make
        - Step4: ./calc.exe

## project_4
    - 描述：多个（头文件、cpp文件）搭配的目录情况
    - 目录结构
        - add
            add.h
            add.cpp
            CMakeList.txt
        - sub
            sub.h
            sub.cpp
            CMakeList.txt
        - mul
            mul.h
            mul.cpp
            CMakeList.txt
        - div
            div.h
            div.cpp
            CMakeList.txt
        main.cpp
        CMakeLists.txt

    - 操作步骤：
        - Step1: mkdir build; cd buid
        - Step2: cmake -G"Unix Makefiles" .. (or cmake -G"MinGW Makefiles" ..)
        - Step3: make
        - Step4: ./calc.exe

## project_4_simple
    - 描述：多个（头文件、cpp文件）搭配的目录情况，项目4简化版实现
    - 目录结构
        - add
            add.h
            add.cpp
        - sub
            sub.h
            sub.cpp
        - mul
            mul.h
            mul.cpp
        - div
            div.h
            div.cpp
        main.cpp
        CMakeLists.txt

    - 操作步骤：
        - Step1: mkdir build; cd buid
        - Step2: cmake -G"Unix Makefiles" .. (or cmake -G"MinGW Makefiles" ..)
        - Step3: make
        - Step4: ./calc.exe

## project_5
    - 描述：头文件、cpp文件分开存放情况
    - 目录结构
        - include
            add.h
            sub.h
            mul.h
            div.h
        - src
            add.cpp
            sub.cpp
            mul.cpp
            div.cpp
            CMakeLists.txt
        main.cpp
        CMakeLists.txt

    - 操作步骤：
        - Step1: mkdir build; cd buid
        - Step2: cmake -G"Unix Makefiles" .. (or cmake -G"MinGW Makefiles" ..)
        - Step3: make
        - Step4: ./calc.exe

## project_6
    - 描述：生成静态库
    - 目录结构
        main.cpp
        CMakeLists.txt

    - 操作步骤：
        - Step1: mkdir build; cd buid
        - Step2: cmake -G"Unix Makefiles" .. (or cmake -G"MinGW Makefiles" ..)
        - Step3: make
        - Step4: ./calc.exe

## project_7
    - 描述：使用静态库
    - 目录结构
        main.cpp
        CMakeLists.txt

    - 操作步骤：
        - Step1: mkdir build; cd buid
        - Step2: cmake -G"Unix Makefiles" .. (or cmake -G"MinGW Makefiles" ..)
        - Step3: make
        - Step4: ./calc.exe

## project_8
    - 描述：生成动态库
    - 目录结构
        main.cpp
        CMakeLists.txt

    - 操作步骤：
        - Step1: mkdir build; cd buid
        - Step2: cmake -G"Unix Makefiles" .. (or cmake -G"MinGW Makefiles" ..)
        - Step3: make
        - Step4: ./calc.exe

## project_9
    - 描述：使用动态库
    - 目录结构
        main.cpp
        CMakeLists.txt

    - 操作步骤：
        - Step1: mkdir build; cd buid
        - Step2: cmake -G"Unix Makefiles" .. (or cmake -G"MinGW Makefiles" ..)
        - Step3: make
        - Step4: ./calc.exe