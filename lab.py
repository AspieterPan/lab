import matplotlib.pyplot as plt
import numpy as np
from mpl_toolkits.mplot3d import Axes3D

# 定义参数范围
theta = np.linspace(0, 2 * np.pi, 100)
phi = np.linspace(0, np.pi, 100)

# 参数化曲线
x_curve = np.sqrt(2) * np.outer(np.cos(theta), np.sin(phi))
y_curve = np.sqrt(2) * np.outer(np.sin(theta), np.sin(phi))
z_curve = 2 + np.outer(np.ones(100), np.cos(phi))

# 绘制曲线
fig = plt.figure()
ax = fig.add_subplot(111, projection="3d")
ax.plot_surface(
    x_curve, y_curve, z_curve, color="b", alpha=0.5, rstride=100, cstride=100
)

# 设置坐标轴标签
ax.set_xlabel("X")
ax.set_ylabel("Y")
ax.set_zlabel("Z")

# 显示图形
plt.show()
