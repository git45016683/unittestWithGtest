
fp = open(r"../../../src/myAPP/src/head/cacl.h", 'r+')
# fp = open('../../../src/myAPP/src/head/calc.h', 'r+')
filecontent = fp.read()
# print(filecontent)
fp.seek(0, 0)
fp.write('#define private public\n' + filecontent)
fp.close()


