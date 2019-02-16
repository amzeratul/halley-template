cmake_minimum_required (VERSION 3.0)

project (halleyproj)

set(HALLEY_PROJECT_EMBED 1)
#set(HALLEY_PATH "" CACHE FILEPATH "Path to the Halley root")
set(HALLEY_PATH ${CMAKE_CURRENT_SOURCE_DIR}/halley)
set(HOTRELOAD 0 CACHE BOOL "Sets whether to hot-reload this project")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${HALLEY_PATH}/cmake/")
include(HalleyProject)

if(NOT (DEFINED HALLEYPROJ_BIN_DIR))
	set(HALLEYPROJ_BIN_DIR "bin")
endif()

set (SOURCES
	"prec.cpp"

	)

set (HEADERS
	"prec.h"

	)

set (GEN_DEFINITIONS
	)

halleyProject(halleyproj "${SOURCES}" "${HEADERS}" "${GEN_DEFINITIONS}" ${CMAKE_CURRENT_SOURCE_DIR}/${HALLEYPROJ_BIN_DIR})

target_link_libraries(halleyproj halley-steam)
