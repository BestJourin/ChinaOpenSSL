# NIT SSL Code

> RoboCup中国公开赛 小型组 浙大宁波理工学院小场代码

---

目录：

* Client使用cmake构建的客户端，内嵌sim模块（修改自开源grSim）
* Medusa策略核心代码
* ZBin使用lua完成的策略脚本



问题：

* 底层四种基本情况的整合Real·UniversalKick
* 前场跑点算法缺少车辆与中心点连线与椭圆无交点情况!!!
--解决方法：在这种情况时采取球与球与中心连线与椭圆交点的情况
* 热力图的X轴概率算法不能用均值概率进行分析应类似正太分布集中概率在其他区域
--解决方法：可以用K值聚类
* 热力图的Y轴概率算法不能用均值概率且自身因子需固定，以防跑点相同问题
--解决方法：待解决————加设pre状态、且需要定时更新



更新：

* 底层四种基本情况（Inter、chase、static、touch）的拿球加踢球，可通过上层参数链式控制是否踢球。
* 门将跑出问题解决了调用了InterceptKick进行清球，TouchKick可以进禁区。
* 加快了普通球员转速
* 整合了chase、inter的情况（static状态有冗余情况后期可能删除）、同时加入了踢球精度控制
* 前场跑点算法更新
* 基于热力图的概率算法


跳转

* [编译](INSTALL.md)

* [已知问题](ISSUE.md)

* [Wiki](https://rocos.readthedocs.io/zh_CN/latest/index.html)

主要贡献名单：

| github                                      | 贡献模块      |
| ------------------------------------------- | ------------- |
| [Wayne](https://github.com/zijinoier)       | VisionModule  |
| [Luckky](https://github.com/guodashun)      | LogModule     |
| [Mark](https://github.com/ZJUMark)          | GUI           |
| [BestJourin](https://github.com/BestJourin) | UniversalKick |

-----

Linux使用发射机可能会遇到串口权限不足的问题

```bash
sudo usermod -a -G dialout $USER
or
sudo usermod -777 /dev/ttyUSB0
```

执行上述语句后Log Out，再次进入可以获取权限

-----

使用方法

```bash
git clone git@github.com:NIT-SSL/NIT_ROCOS_LF.git

./auto_linux.sh
```

执行上述语句后，打开Qt进行构建即可(但Medusa需要先进行Qmake)

-----

如遇到版本更新

```bash
git pull [版本号]
```
执行上述语句即可获得最新版本