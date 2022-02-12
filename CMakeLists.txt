cmake_minimum_required(VERSION 3.19)
project(chat_laboratorio)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(test)

set (SOURCE_FILES Chat.cpp Chat.h User.cpp User.h Message.h Observer.h Subject.h Notifier.cpp Notifier.h )
add_executable (chat_laboratorio main.cpp)
add_library (core ${SOURCE_FILES})
target_link_libraries ( chat_laboratorio core)