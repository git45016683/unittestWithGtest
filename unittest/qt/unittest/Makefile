TARGET_NAME = testAPP

CXX = g++

INCS = ../../src/gtest/head \
../../src/gtest/head/gtest \
../../src/gtest/head/gtest/internal \
../../src/head \
../../../src/myAPP/src/head 

LIBPATH = ../../src/gtest/lib \
../../src/gtest/gmock/lib 

SRCS = ./main.cpp \
../../src/test_src/test_Calculate.cpp \
../../../src/myAPP/src/*.cpp


PWD:=$(shell pwd)
PRE_BUILD1:=$(shell $(PWD)/callPY.sh 1)
PRE_BUILD:=$(shell callPY.sh 1)

all:
	$(PRE_BUILD)
	 $(CXX) -o $(TARGET_NAME) $(SRCS) $(addprefix -I,$(INCS)) $(addprefix -L,$(LIBPATH)) -lgtest -lgmock -lpthread -ldl -fpermissive

clean:
	rm testAPP
