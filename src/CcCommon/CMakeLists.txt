SET(THIS_LIB_NAME CcCommon)

#ADD_DEFINITIONS("-DMAKE_CCCOMMON_DLL")
########################################### GRAB SOURCE FILES ##########################################
FILE(GLOB THIS_LIB_SRCS RELATIVE_PATH ${CMAKE_CURRENT_SOURCE_DIR} "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
									)
																										

############################### GRAB HEADERS #####################################
FILE(GLOB THIS_LIB_HEADERS RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" 
									"${CMAKE_CURRENT_SOURCE_DIR}/../../include/CcCommon/*.h"
									)								
                  
IF(WIN32)         
	LIST(APPEND THIS_LIB_SRCS "${CMAKE_CURRENT_SOURCE_DIR}/dllMain.cpp")
ENDIF(WIN32)


ADD_LIBRARY(${THIS_LIB_NAME} SHARED ${THIS_LIB_SRCS} ${THIS_LIB_HEADERS})

SET(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../bin)

