cmake_minimum_required(VERSION 3.19)
project(chat_laboratorio)

set(CMAKE_CXX_STANDARD 14)

add_executable(chat_laboratorio main.cpp Chat.cpp Chat.h User.cpp User.h Message.h)