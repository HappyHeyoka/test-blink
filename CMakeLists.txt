set(CMAKE_TOOLCHAIN_FILE /home/dean/wip/arduino/arduino-cmake/cmake/ArduinoToolchain.cmake)

cmake_minimum_required(VERSION 2.8)

project(TestBlink)

generate_arduino_firmware(testblink
	SRCS testblink.cpp "source with spaces.cpp"
    PORT  /dev/ttyACM1
    SERIAL "microcom -p @INPUT_PORT@ -s 57600"
    BOARD ethernet)

    #why doesn't the SERIAL option create a new target?  bastards!
    
# Alternative: by variables
#set(blink_original_SKETCH ${ARDUINO_SDK_PATH}/examples/1.Basics/Blink)
#set(blink_lib_SRCS blink_lib.cpp)
#set(blink_lib_HDRS blink_lib.h)
#set(blink_original_PORT  ${ARDUINO_PORT})
#set(blink_original_BOARD uno)
#
#generate_arduino_firmware(blink_original)


