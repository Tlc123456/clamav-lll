cmake_minimum_required(VERSION 3.16)

# # 添加 vcpkg 的工具链
set(CMAKE_TOOLCHAIN_FILE "C:/ProgramData/vcpkg/scripts/buildsystems/vcpkg.cmake")

project(helloworld1226 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
# 查找 OpenSSL
find_package(OpenSSL REQUIRED)

find_library(CLAMAV_LIB clamav HINTS "E:/C++_project/helloworld_test/clamav")

#链接QtTest
find_package(Qt6 REQUIRED COMPONENTS Core Gui Test)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(helloworld1226
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        clamav.h
        clamav-types.h
        clamavthread.h
        clamavengine.h
        clamavengine.cpp
        clamavthread.cpp
        ScanResultModel.h
        qttest.h qttest.cpp
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET helloworld1226 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(helloworld1226 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(helloworld1226
            ${PROJECT_SOURCES}
        )
    endif()
endif()

# 查找clamav库文件
link_directories("E:/C++_project/helloworld_test/clamav")

target_link_libraries(helloworld1226 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets OpenSSL::SSL OpenSSL::Crypto Qt6::Core Qt6::Gui Qt6::Test)

#链接clamav库
if(CLAMAV_LIB)
    target_link_libraries(helloworld1226 PRIVATE ${CLAMAV_LIB})
else()
    message(FATAL_ERROR "CLAMAV library not found.")
endif()

#链接QtTest
# target_link_libraries(helloworld1226 Qt6::Core Qt6::Gui Qt6::Test)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.helloworld1226)
endif()
set_target_properties(helloworld1226 PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS helloworld1226
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(helloworld1226)
endif()
