SET(THIS_LIB_NAME CcFileSystem)

ADD_DEFINITIONS("-DMAKE_CCFILESYSTEM_DLL")

########################################### GRAB SOURCE FILES ##########################################
FILE(GLOB THIS_LIB_SRCS RELATIVE_PATH ${CMAKE_CURRENT_SOURCE_DIR} "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
									)
																										
############################### GRAB HEADERS #####################################
FILE(GLOB THIS_LIB_HEADERS RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" 
									"${CMAKE_CURRENT_SOURCE_DIR}/../../include/CcFileSystem/*.h"
									)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/../../include)
ADD_LIBRARY(${THIS_LIB_NAME} SHARED ${THIS_LIB_SRCS} ${THIS_LIB_HEADERS})
#ADD_DEPENDENCIES(${THIS_LIB_NAME} CcString)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../bin)
