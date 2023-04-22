#!/usr/bin/env python3
import numpy as np
import matplotlib.pyplot as plt

# 生成负偏态分布的数据
mu, sigma = 2, 1
data = np.random.normal(mu, sigma, 1000)
data = data[data < mu]  # 取左侧部分的数据

# 绘制负偏态分布的直方图
plt.hist(data, bins=30, density=True, alpha=0.5, color='blue')

# 绘制正态分布曲线作为对比
x = np.linspace(data.min(), data.max(), 100)
y = 1/(sigma * np.sqrt(2 * np.pi)) * np.exp(-(x - mu)**2/(2 * sigma**2))
plt.plot(x, y, color='red')

# 添加标题和标签
plt.title("Negative Skewed Distribution")
plt.xlabel("Data Values")
plt.ylabel("Frequency Density")

plt.show()
