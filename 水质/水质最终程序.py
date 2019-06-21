'''基于水色图像的水质识别'''
from PIL import Image
import numpy as np
import os
import re
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
path = 'C:/Users/Think/Desktop/images/'
def getimgnames(path=path):
    '''
    #获取指定文件夹中的图片名称
    :param path:  文件夹路径
    :return:
    '''
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
print('数据集为：\n',data)
print('====================================================')
print('标签集为：\n',labels)
print('====================================================')

'''
 train_test_split是交叉验证中常用的函数，功能是从样本中随机的按比例选取train data和test data
 这里的data为数据集，labels为结果，test_size为样本占比，random_state为随机数的种子
 
'''
data_tr,data_te,label_tr,label_te = train_test_split(data,labels,test_size=0.2,random_state=10) #数据拆分,训练集、测试集
print('训练数据集为：\n',data_tr)
print('训练数据集所含数据量:\n',len(data_tr))
print('====================================================')
print('标签训练集为：\n',label_tr)
print('标签训练集所含数据量:\n',len(label_tr))
print('====================================================')
print('测试数据集为：\n',data_te)
print('测试数据集所含数据量:\n',len(data_te))
print('====================================================')
print('标签测试集为：\n',label_te)
print('标签测试集所含数据量:\n',len(label_te))
model = DecisionTreeClassifier(random_state=5).fit(data_tr,label_tr) # 构建模型
pres = model.predict(data_te)  #模型预测
print('通过决策树预测得到的标签集:\n',pres)
sum(pres==label_te)/len(pres)  #模型精度
print('预测的正确率为：\n',sum(pres==label_te)/len(pres))
