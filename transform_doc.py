import subprocess


def transform_doc_stream(stream):
    """
    将ms doc的二进制流转化为txt的字符串
    :param stream: ms doc的二进制流
    :return: str
    """
    out = subprocess.check_output(["antiword -", ], input=stream, shell=True)
    return out.decode()

