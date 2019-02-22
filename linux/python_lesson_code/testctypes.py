print("Test Ctypes")
from ctypes import *
# 导入库 window中dll后缀名不用加
lib = CDLL("testctypes")
lib.TestCtypes()