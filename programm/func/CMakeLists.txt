add_library(func func.cpp)
install(TARGETS func DESTINATION lib)
install(FILES lib.h DESTINATION include)