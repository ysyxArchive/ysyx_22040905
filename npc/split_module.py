import os

#当前工作目录
path=os.getcwd()


# 读取 top.v 文件内容
with open(path+'/vsrc/top.v', 'r') as file:
    verilog_code = file.read()

# 分割模块
modules = verilog_code.split("module ")

# 移除第一个空白元素
modules = modules[1:]

# 移除原始的 top.v 文件
os.remove(path+'/vsrc/top.v')

# 遍历每个模块
for module in modules:
    # 提取模块名称
    module_name = module[:module.index("(")].strip()

    # 构建新的模块文件名
    module_file_name = module_name + ".v"

    # 构建新的模块文件路径
    module_file_path = path + "/vsrc/" + module_file_name

    # 写入模块内容到新文件
    with open(module_file_path, 'w') as file:
        file.write("module " + module)
