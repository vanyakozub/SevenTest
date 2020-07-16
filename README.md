## Содержание
 1. Об API
 2. Предварительная подготовка
 3. Сборка API
 4. Подключение API к проекту
 ***
 ### Об API
 Данная библиотека предназначена для верификации прав пользователя. Для работы необходимо только подключить библиотеку к проекту.
 ***
 ### Предварительная подготовка
 Для сборки API и примеров, приведенных ниже Вам потребуется скачать несколько сторонних программ:
 - СMake необходим для сборки API и присоединения API к проекту.
 - MinGW для Windows. Требуется для сборки проектов на основе Сmake makefile.
 ***
  ### Сборка API
  1. Запустить командную стоку
  2. Зайти в папку, где хранится CMakeLists.txt
  3. Ввести в командную строку следующую команду ***cmake.-G"MinGW Makefiles"***
  4. После вводим следующую команду ***mingw32-make***
  5. Собранная библиотека должна появится в папке /bin/ в виде .dll файла
***
### Подключение API
1. Для подключения библиотеки к проекту необходимо поместить следующие команды в файл CMakeLists.txt
```
cmake_minimum_required(VERSION 3.16)
    set(PROJECT YourProjectName)
    project(${PROJECT})
    
    #пути до файлов Вашего проекта
    set(YOUR_PROJECT_SOURCES main.cpp)
    #можете поменять путь для исполяемого файла .exe на свой
    #изменив "/bin" на свое название папки в CMAKE_RUNTIME_OUTPUT_DIRECTORY
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
    
    #Исполняемый файл
    add_executable(${PROJECT} ${YOUR_PROJECT_SOURCES})
    
    #Сюда пишем путь до папки include проекта
    set(AUTHO_HEADERS "include/")
    #Сюда пишем путь до файла .dll
    set(AUTHO_LIB "/bin/")
    
    #Добавляем директории с библиотеками
    include_directories(${AUTHO_HEADERS})
    include_directories(${AUTHO_LIB})
    #Вводим переменную в которой хранится путь до .dll файла
    set(LIB ${AUTHO_LIB}SevenTest.dll)
    #привязываем библиотеку к проекту
    target_link_libraries(${PROJECT} ${LIB})
```
2. Ввести в командную строку следующую команду ***cmake.-G"MinGW Makefiles"***
3. После вводим следующую команду ***mingw32-make***
***

