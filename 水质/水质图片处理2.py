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
n = len(imgnames)
data = np.zeros([n,9])  #样本自变量
labels = np.zeros([n])  #样本标签
for i in range(n):
    img = Image.open('C:/Users/Think/Desktop/images/'+imgnames[i])  #读入图片
    M,N = img.size  #图片大小
    img = img.crop((M/2-50,N/2-50,M/2+50,N/2+50))  #截取中心区域
    r,g,b = img.split() #把颜色通道分开
    #===将图片数据转为成数组array
    rd = np.asarray(r)
    gd = np.asarray(g)
    bd = np.asarray(b)
    #===求图片的特征值(一、二、三阶颜色矩)
    data[i,0]=np.mean(rd);data[i,1]=np.mean(gd);data[i,2]=np.mean(bd)
    data[i,3]=np.std(rd); data[i,4]=np.std(gd); data[i,5]=np.std(bd)
    data[i,6]=Var(rd);    data[i,7]=Var(gd);    data[i,8]=Var(bd)
    labels[i] = imgnames[i][0]  #图片标签
    print(labels[i])