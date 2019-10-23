# step-by-step-3d
一步一步学3D

### 目录列表
- step1

第一步，演示eigen向量操作。
- ogre1

OGRE渲染引擎演示第一步。模块从Samples/2.0/Tutorials/EmptyProject拷贝。文档参阅：https://ogrecave.github.io/ogre-next/api/2.1/_using_ogre_in_your_app.html
！！！重要：把ogre目录链接到对应目录mklink /D on Windows, ln -s in Linux

需使用VS调试的还需要把工作目录(默认为$(ProjectPath))设置为$(TargetPath):在项目属性->配置属性>调试->工作目录
