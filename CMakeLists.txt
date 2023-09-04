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
        day05/CntMain.cpp
        day06/CounterM.h
        day06/mainFunc.cpp
        day06/VecF.h
        day06/NameObj.h
        day07/CharStack.h
        day07/CharStack.cpp
        day07/CSMain.cpp
        day07/Complex1.h
        day07/Complex1.cpp
        day08/operatorEx.h
        day08/Pencils.h
        day08/Pencils.cpp
        day09/homework01.cpp
        day09/homework02.cpp
        day09/homework03.cpp
        day09/homework04.cpp
        day09/homework05.cpp
        day10/VFMain3.cpp
        day10/SafeIntArray.h)
