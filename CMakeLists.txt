cmake_minimum_required(VERSION 3.0)

project(IntentRecognizer)

set(SOURCE 
src/main.cpp 
src/intent_recognizer.cpp)

add_executable(${PROJECT_NAME} ${SOURCE})