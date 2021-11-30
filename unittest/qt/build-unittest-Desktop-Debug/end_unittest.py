
fr = open(r"../../../src/myAPP/src/head/cacl.h", 'r')
# fp = open('../../../src/myAPP/src/head/calc.h', 'r+')
filecontent = fr.readlines()
fr.close()
# print(filecontent)

fw = open(r"../../../src/myAPP/src/head/cacl.h", 'w')
for l in filecontent :
    if '#define private public\n' == l :
        continue
    else:
        fw.write(l)

fw.close()



# fp = open(r"../../../src/myAPP/src/head/cacl.h", 'r')
# print(fp.read())
# fp.close()

