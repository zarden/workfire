'''
   OS模块是Python标准库中的一个用于访问操作系统功能的模块，
   OS模块提供了一种可移植的方法使用操作系统的功能。
   使用OS模块中提供的接口，可以实现跨平台访问。
   但是在OS模块中的接口并不是所有平台都通用，有些接口的实现是依靠特定平台下的接口的。
   在OS模块中提供了一系列访问操作系统功能的接口，便于编写跨平台的应用。
'''
import os
os.name                                                         # 查询操作系统名称
print('操作系统名称为：\n',os.name)                              # windows,nt;  linux,posix;
print('=========================================================')
os.sep                                                          # 查询操作系统使用的文件路径分隔符
print('操作系统的文件分隔符为：\n',os.sep)                        # windows,\;
print('=========================================================')
os.linesep                                                      # 查询操作系统的行终止符
print('操作系统的行终止符为:\n',os.linesep)
print('=========================================================')
path = os.getcwd()                                              # 查询python的工作路径
print('当前工作路径为,\n',path)
print('=========================================================')
os.listdir(path)                                                # 查询当前工作目录下的文件
print('当前工作目录下的文件为：\n',os.listdir(path))
print('=========================================================')
os.remove( 'C:/Users/Lufer/Desktop/水质/空.py')         # 删除指定文件
print('当前工作目录下的文件为：\n',os.listdir(path))
print('=========================================================')
file_name = 'C:/Users/Think/PycharmProjects/水质/my_file'
os.mkdir(file_name)                                             # 创建文件夹
print('创建文件夹后，当前工作目录下的文件为：\n',os.listdir(path))
print('=========================================================')
os.rmdir(file_name)                                             # 删除文件夹（只能删除空文件夹）
print('删除文件夹后，当前工作目录下的文件为：\n',os.listdir(path))