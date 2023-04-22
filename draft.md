令 $I=\int_{-\infty}^{+\infty} e^{-x^2/a^2} dx$，则$I^2=\left(\int_{-\infty}^{+\infty} e^{-x^2/a^2} dx\right)\left(\int_{-\infty}^{+\infty} e^{-y^2/a^2} dy\right)$。

将$I^2$转换为极坐标系下的二重积分：$I^2=\iint_{-\infty}^{+\infty} e^{-(x^2+y^2)/a^2} dxdy=\int_0^{2\pi}\int_0^{+\infty} e^{-r^2/a^2}rdrd\theta$。

令 $u=r^2/a^2$，则 $du=2r/a^2, dr$，从而可以将上述二重积分转化为单变量积分：$I^2=\frac{1}{2}\int_0^{2\pi}\int_0^{+\infty} e^{-u}a^2,du d\theta=a^2\pi$。

因此，$I=\int_{-\infty}^{+\infty} e^{-x^2/a^2} dx=a\sqrt{\pi}$。

$\int_{-\infty}^{+\infty}$
