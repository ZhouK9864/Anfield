#from icecream import ic
import re
import argparse

parser = argparse.ArgumentParser(description='Test for argparse')
parser.add_argument('--fileName', '-fn', help='属性，必要参数', required=True, type=str)
args = parser.parse_args()
TXTtemp = open('./../am-kernels/tests/cpu-tests/build/' + args.fileName + '-riscv64-nemu.txt', "r+")
txtbuffer = TXTtemp.readlines()
linData = []
saveData = []
f2 = open('code.mem', 'w')
for i in range(0, len(txtbuffer)):
    linData = txtbuffer[i]
    if(re.match('    8', linData)) :
        #ic(linData)
        saveData = (linData[14:22])
        #ic(saveData)
        f2.writelines(saveData)
        f2.write('\r\n')
TXTtemp.close()
f2.close()
