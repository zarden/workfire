import numpy as np
array1 = [[1,2,3],[1,2,3],[1,2,4]]
array2 = np.asarray(array1)
print(array2)
mean1 = array2.mean()           # 计算数组的一阶矩
print(mean1)
std1 = array2.std()             # 计算数组的二阶中心矩的平方根
print(std1)

def Var(rd=None):
    #求三阶矩的立方根
    mid = (np.mean((rd-rd.mean())**3))**(1/3)
    return mid
print(Var(array2))

def Var(rd=None):
    #求三阶矩的立方根
    mid = np.mean((rd-rd.mean())**3)
    return np.sign(mid)*abs(mid)**(1/3)
print(Var(array2))