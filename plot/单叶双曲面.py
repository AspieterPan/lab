#!/usr/bin/env python3
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# 生成 x 和 y 的网格数据
x, y = np.meshgrid(np.linspace(-4, 4, 1000), np.linspace(-4, 4, 1000))

# 计算 z 坐标
z = np.sqrt(x**2 + y**2 - 1)

# 绘制单叶双曲面
ax.plot_surface(x, y, z, cmap='coolwarm', alpha=0.8)
ax.plot_surface(x, y, -z, cmap='coolwarm', alpha=0.8)

plt.show()
