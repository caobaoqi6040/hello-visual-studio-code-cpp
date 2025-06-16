# How to

WHAT !? | WHY | HOW

## How to 创建新的 vsc 配置

![image-20250616102756133](./assets/image-20250616102756133.png)

![image-20250616102803189](./assets/image-20250616102803189.png)

## How to 创建新的 cpp 文件

1. 新建文件 `demo03_hello_cxk.cpp`

![image-20250616101319694](./assets/image-20250616101319694.png)

2. 通过 CMake 生成配置

![image-20250616101432899](./assets/image-20250616101432899.png)

![image-20250616101445941](./assets/image-20250616101445941.png)

3. 编写代码

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, cxk!" << endl;
    return 0;
} 
```

4. 运行

[参见 How to 生成 exe](#How to 生成 exe)

## How to 生成 exe

![image-20250616101828660](./assets/image-20250616101828660.png)

![image-20250616101901004](./assets/image-20250616101901004.png)

## How to 重新配置 cpp 拓展

> [!TIP]
>
> 重新配置后 请清理并重新配置生成项目

![image-20250616101151449](./assets/image-20250616101151449.png)

## How to 控制台中文乱码问题

ummm 还是尽量 英格力士 吧，网上搜了很多解决方案都不怎么好..........