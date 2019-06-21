import os
import re
path = 'C:/Users/Think/Desktop/images/'
print('路径为:\n',path)
print('==========================================================================')
filenames = os.listdir(path=path)
print('该路径下的文件名为：\n',filenames)
print('==========================================================================')
imgnames = []
for i in filenames:
    name = re.findall(r'\b\d_\d+\.jpg', i)
    print(name)
    print('==========================================================================')
    imgnames.extend(name)
print(imgnames)