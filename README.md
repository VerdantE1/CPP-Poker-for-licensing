# CPP Poker for licensing
 C++以OOP方式设计一个扑克发牌器
 
功能：52张牌随机分配4个人，不加大王小王，简单的实现分牌功能，若要做成斗地主规矩，需要加大王小王，推荐泛化Card做大王小王这样可以容易做逻辑判断。
设计思想：对象Card为牌，对象Player为玩家。CardPool为媒介，连接Card与Player。CardPool相当于启动器，直接CardPool()即可启动。CardPool提供一个接口，即显示每个人手上的牌。
使用方法如下：
![image](https://user-images.githubusercontent.com/78347791/202852197-cd238475-e66d-4735-84f9-e2acbdc9212b.png)

