cmake_minimum_required(VERSION 3.24)
project(C___ex)

set(CMAKE_CXX_STANDARD 17)

add_executable(C___ex main.cpp day01/FirstStep.cpp day02/scope1.cpp day02/scope2.cpp day02/constEx.cpp day02/lifetime.cpp day02/CircleArea.cpp
        day03/controlEx.cpp
        day03/structEx.cpp
        day03/classEx.cpp
        day03/arrayEx.cpp
        day03/simplePt.cpp
        day04/funcEx.cpp
        day04/convFtoC.cpp
        day04/SwapInt.cpp
        day04/Round.cpp
        day04/TimeCalc.cpp
        day05/Counter.h
        day05/CntMain.cpp)
