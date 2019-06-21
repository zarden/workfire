import os
import re
path = 'C:/Users/Lufer/Desktop/images/'
print('路径为:\n',path)

'''
获取指定文件夹中的图片名称
输入: 文件夹路径
返回: 文件名称
'''
def getimgnames(path=path):
    filenames = os.listdir(path=path)
    imgnames = []
    for i in filenames:
        name = re.findall(r'\b\d_\d+\.jpg',i)
        imgnames.extend(name)
    return imgnames
print(getimgnames(path))
print(getimgnames(path)[3])
