from PIL import Image
import numpy as np
import os
import re
path = 'C:/Users/Think/Desktop/images/'
def getimgnames(path=path):
    filenames = os.listdir(path=path)
    imgnames = []
    for i in filenames:
        name = re.findall(r'\b\d_\d+\.jpg',i)
        imgnames.extend(name)
    return imgnames

def Var(rd=None):
    #求三阶矩的立方根
    mid = np.mean((rd-rd.mean())**3)
    return np.sign(mid)*abs(mid)**(1/3)

imgnames = getimgnames(path=path)  #获取图片名称
print('图片名称为：\n',imgnames)
print('====================================================')
n = len(imgnames)
print('图片总个数为：\n',n)
print('====================================================')
data = np.zeros([n,9])                                          # 建立一个由n个9维数组组成的数组
print('n个9维数组组成的数组(其中每个元素都维零),\n',data)
print('====================================================')
labels = np.zeros([n])  #样本标签
print('放标签的数组\n',labels)
print('====================================================')
img = Image.open('C:/Users/Think/Desktop/images/'+imgnames[0])  # 读入第一张图片
print('打开第一张图片:\n',img)
print('====================================================')
img.show()                                                      # 显示图片
M,N =img.size                                                   # 图片大小
print('图片大小为：\n',M,N)
print('====================================================')
img = img.crop((M/2-50,N/2-50,M/2+50,N/2+50))                   # 截取中心区域
print('裁剪后大大小为,',img.size)
print('====================================================')
r,g,b = img.split()                                             # 把颜色通道分开
print('图片的红色通道取值为:\n',r)
print('====================================================')
r1 = np.asarray(r)                                               # 转化变量格式
print('将r转化为数组r1后的形式为：\n',r1)
print('r1的形状为：\n',r1.shape)
print('====================================================')
g1 = np.asarray(g)                                               # 转化变量格式
print('将g转化为数组g1后的形式为：\n',g1)
print('g1的形状为：\n',g1.shape)
print('====================================================')
b1 = np.asarray(b)                                               # 转化变量格式
print('将b转化为数组b1后的形式为：\n',b1)
print('b1的形状为：\n',b1.shape)
print('====================================================')
data[0,0] = np.mean(r1);data[0,1] = np.mean(g1);data[0,2] = np.mean(b1)  # 计算一阶矩
data[0,3] = np.std(r1); data[0,4] = np.std(g1); data[0,5] = np.std(b1)   # 计算二阶矩
data[0,6]=Var(r1);    data[0,7]=Var(g1);    data[0,8]=Var(b1)            # 计算三阶矩
print('r1的三阶矩等于：\n',Var(r1))
print('====================================================')
print('data的第一个元素为：\n',data[0])
labels[0] = imgnames[0][0]
print()