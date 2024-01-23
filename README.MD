# 从零搭建跨平台音乐播放器

项目地址:https://github.com/sAkuraOfficial/MusicPlayer

## 第一节课-创建简单窗口

### 添加子模块

```bash
$ cd externalLib
$ git submodule add https://github.com/sAkuraOfficial/hello_imgui hello_imgui
$ cd hello_imgui/external
$ git submodule init
$ git submodule update
```

### CMake 安装字体文件

```cmake
install(FILES ./assets/微软雅黑.ttf DESTINATION ${CMAKE_BINARY_DIR}/assets)
```
