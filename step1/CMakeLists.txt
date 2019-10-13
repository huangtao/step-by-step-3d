# 指定生成目标
add_executable(step1 main.cpp)
if (WIN32)
    set_property (TARGET step1 PROPERTY WIN32_EXECUTABLE TRUE)
endif () 

# 添加链接库
# target_link_libraries(step1 glfw3 glfw3dll opengl32 glew CEGUIBase-0 CEGUIOpenGLRenderer-0)