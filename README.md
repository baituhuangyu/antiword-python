# antiword-python
## python api for antiword

- 优势：通常在网络流中或者spark streaming中输入可能是二进制流，需要直接将doc二进制流转化为txt字符串，而不需要再写个临时文件。
- 目前是用系统调用实现的，在子进程中执行antiword，将doc转化txt等格式。 后面计划用python+c，用动态链接库实现。

## 步骤
- 编译antiword可执行文件，注意需要对应自己的运行系统进行编译。

```
cd antiword-0.37
make
make install
```

- 调用python接口
```python

import transform_doc

YOUR_DOC = "./demo.doc"
with open(YOUR_DOC, "rb") as fp:
    content = fp.read()

txt = transform_doc.transform_doc_stream(content)
print(txt)

```

# 参考：http://www.winfield.demon.nl/



