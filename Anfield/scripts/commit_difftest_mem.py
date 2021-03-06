import sys
import difflib
 
 
def readfile(file1):
    try:
        fd=open(file1,"r")
        text=fd.read().splitlines()  #读取之后进行行分割
        return text
    except Exception as e:
        print("read file error")
        print(e)
        sys.exit()
 
 
 
def Compare(file_1,file_2):
    if file_1 =="" or file_2 == "":
        print("file 1 or file 2 not empty")
        sys.exit()
 
    text1=readfile(file_1)
    text2=readfile(file_2)
 
    diff=difflib.HtmlDiff() #创建一个diff对象
    result=diff.make_file(text1,text2)  #得出比较结果
 
    try:
        fd_diff=open("diff_mem.html","w")
        fd_diff.write(result)
 
    except Exception as e:
        print("write html file error")
        print(e)
        sys.exit()
 
 
if __name__ == '__main__':
    Compare("./difftest/RefRegAddr_Rtrace.txt","./difftest/RegCommitAddr_Rtrace.txt")
