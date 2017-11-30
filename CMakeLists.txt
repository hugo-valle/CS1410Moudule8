cmake_minimum_required(VERSION 3.8)
project(mod8)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES dynamicMem.cpp)
#set(SOURCE_FILES testStrClass.cpp MyString.cpp MyString.h)
#set(SOURCE_FILES dynamicIntArray.cpp)
#set(SOURCE_FILES exception1.cpp)
#set(SOURCE_FILES DistanceException.cpp Distance.cpp Distance.h Person.cpp Person.h)
#set(SOURCE_FILES Const.cpp Person.cpp Person.h)
#set(SOURCE_FILES FreeStore.cpp Resource.cpp Resource.h)
#set(SOURCE_FILES memory.cpp Person.cpp Person.h Resource.cpp Resource.h BankAccount.cpp BankAccount.h)
#set(SOURCE_FILES max.cpp Person.cpp Person.h Resource.h Resource.cpp
#        BankAccount.cpp BankAccount.h)
#set(SOURCE_FILES Acuumulator.cpp Accum.h Person.h Person.cpp
 #       Resource.cpp Resource.h)
set(SOURCE_FILES playVectors.cpp Person.cpp Person.h Resource.h Resource.cpp)

add_executable(mod8 ${SOURCE_FILES})