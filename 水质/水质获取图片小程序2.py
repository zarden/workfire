'''
  正则表达式是一个特殊的字符序列，它能帮助你方便的检查一个字符串是否与某种模式匹配。
  Python 自1.5版本起增加了re 模块，它提供 Perl 风格的正则表达式模式。
  re 模块使 Python 语言拥有全部的正则表达式功能。
'''

'''
re.match函数
re.match 尝试从字符串的起始位置匹配一个模式，如果不是起始位置匹配成功的话，match()就返回none。
函数语法：
        re.match(pattern, string, flags=0)
    pattern: 匹配的正则表达式
    string:  要匹配的字符串。
    flags：  标志位，用于控制正则表达式的匹配方式，如：是否区分大小写，多行匹配等等。参见：正则表达式修饰符 - 可选标志

 修饰符                  描述
 re.I             使匹配对大小写不敏感
 re.L             做本地化识别（locale-aware）匹配
 re.M             多行匹配，影响 ^ 和 $
 re.S             使 . 匹配包括换行在内的所有字符
 re.U             根据Unicode字符集解析字符。这个标志影响 \w, \W, \b, \B.
 re.X             该标志通过给予你更灵活的格式以便你将正则表达式写得更易于理解。
'''
import re
print(re.match('www.r', 'www.runoob.com').span())   # 在起始位置匹配,并返回匹配字符的索引
print(re.match('www.r', 'www.runoob.com').group())  # group()函数可以返回匹配的所有内容
print(re.match('com', 'www.runoob.com'))            # 不在起始位置匹配将返回None
print('==========================================================================')

'''
re.search 扫描整个字符串并返回第一个成功的匹配。
函数语法：
        re.search(pattern, string, flags=0)

    pattern:匹配的正则表达式
    string: 要匹配的字符串。
    flags:  标志位，用于控制正则表达式的匹配方式，如：是否区分大小写，多行匹配等等。
'''
print(re.search('www', 'www.runoob.com').span())         # 在起始位置匹配并返回匹配字符的索引
print(re.search('com', 'www.runoob.com').span())         # 不在起始位置匹配，返回匹配字符的索引
print(re.search('com', 'www.runoob.com').group())        # group()函数可以返回匹配的所有内容
print(re.search('com', 'www.runoob.com').group(0))
# print(re.search('com', 'www.runoob.com').group(1))
print('==========================================================================')

'''
a.*b  匹配最长的已a为起始，b为终止的字符串
a.*?b 匹配最短的已a为起始，b为终止的字符串
'''
line = "Cats are smarter than dogs";
searchObj = re.search(r'(.*) are (.*?) (.*)',line, re.M | re.I)   # 多行匹配或不区分大小写
# searchObj = re.search(r'(.*) are (.*) .*',line, re.M | re.I)
if searchObj:
    print( "searchObj.group() : ", searchObj.group())
    print("searchObj.group(0) : ", searchObj.group(0))            # 返回匹配的所有内容
    print("searchObj.group(1) : ", searchObj.group(1))            # 返回匹配的分组内容
    print("searchObj.group(2) : ", searchObj.group(2))
    print("searchObj.group(3) : ", searchObj.group(3))
else:
    print("Nothing found!!")
print('==========================================================================')


'''
Python 的 re 模块提供了re.sub用于替换字符串中的匹配项。
   语法：re.sub(pattern, repl, string, count=0, flags=0)
   pattern : 正则中的模式字符串。
   repl : 替换的字符串，也可为一个函数。
   string : 要被查找替换的原始字符串。
   count : 模式匹配后替换的最大次数，默认 0 表示替换所有的匹配。
'''
phone = "2004-959-559 # 这是一个国外电话号码"
num = re.sub(r'#.*$', "", phone)   # 删除字符串中的 Python注释 $:匹配到末尾
print("电话号码是: ", num)
print('==========================================================================')

num = re.sub(r'\D', "", phone)     # 删除非数字(-)的字符串 \D:匹配非数字字符串
print("电话号码是 : ", num)
print('==========================================================================')


'''
re.compile 函数
    compile 函数用于编译正则表达式，生成一个正则表达式（ Pattern ）对象，供 match() 和 search() 这两个函数使用。
    语法格式为：
            re.compile(pattern[, flags])
        pattern : 一个字符串形式的正则表达式
        flags : 可选，表示匹配模式，比如忽略大小写，多行模式等，具体参数为：
          re.I 忽略大小写
          re.L 表示特殊字符集 \w, \W, \b, \B, \s, \S 依赖于当前环境
          re.M 多行模式
          re.S 即为 . 并且包括换行符在内的任意字符（. 不包括换行符）
          re.U 表示特殊字符集 \w, \W, \b, \B, \d, \D, \s, \S 依赖于 Unicode 字符属性数据库
          re.X 为了增加可读性，忽略空格和 # 后面的注释
'''
pattern = re.compile(r'\d+')                    # 用于匹配至少一个数字
m = pattern.match('one12twothree34four')        # 查找头部，没有匹配
print(m)
m = pattern.match('one12twothree34four',2,10)
print(m)
m = pattern.match('one12twothree34four', 3, 10) # 从'1'的位置开始匹配，正好匹配
print(m)                                         # 返回一个 Match 对象
print(m.group(0))   # 可省略 0
print(m.start(0))   # 可省略 0
print(m.end(0))     # 可省略 0
print(m.span(0))    # 可省略 0
print('==========================================================================')

pattern = re.compile(r'([a-z]+) ([a-z]+)', re.I)   # re.I 表示忽略大小写
m = pattern.match('Hello World Wide Web')
print(m)                                              # 匹配成功，返回一个 Match 对象
print('==========================================================================')
print('返回匹配成功的整个子串为：\n',m.group(0))        # 返回匹配成功的整个子串
print('==========================================================================')
print('返回匹配成功的整个子串的索引为：\n',m.span(0))    # 返回匹配成功的整个子串的索引
print('==========================================================================')
print('返回第一个分组匹配成功的子串为：\n',m.group(1))         # 返回第一个分组匹配成功的子串
print('==========================================================================')
print('返回第一个分组匹配成功的子串的索引为：\n',m.span(1))                       # 返回第一个分组匹配成功的子串的索引
print('==========================================================================')
print('返回第二个分组匹配成功的子串为：\n',m.group(2))                           # 返回第二个分组匹配成功的子串
print('==========================================================================')
print('返回第二个分组匹配成功的子串的索引为：\n',m.span(2))                      # 返回第二个分组匹配成功的子串
print('==========================================================================')
print(m.groups())                            # 等价于 (m.group(1), m.group(2), ...)
print('==========================================================================')
# print(m.group(3))                            # 不存在第三个分组

'''
findall：在字符串中找到正则表达式所匹配的所有子串，并返回一个列表，如果没有找到匹配的，则返回空列表。
    注意： match 和 search 是匹配一次 findall 匹配所有。
    语法格式为：
            findall(string[, pos[, endpos]])
    参数：
      string : 待匹配的字符串。 
      pos : 可选参数，指定字符串的起始位置，默认为 0。 
      endpos : 可选参数，指定字符串的结束位置，默认为字符串的长度。
'''
pattern = re.compile(r'\d+')  # 查找数字
result1 = pattern.findall('runoob 123 google 456')
result2 = pattern.findall('run88oob123google456', 0, 10)
print(result1)
print('==========================================================================')
print(result2)