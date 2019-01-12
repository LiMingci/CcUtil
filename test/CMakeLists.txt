
FOREACH( tests testString testFileSystem)
ADD_SUBDIRECTORY(${tests})
    
SET_PROPERTY(TARGET ${tests} PROPERTY FOLDER "Tests")

ENDFOREACH( tests )