import fileinput
n=[]
for line in fileinput.input():
  n.append(float(line[1:]))
b=n[1]/3.78541/0.75/n[0]
if b<1:
	print('American gas is',b,'times cheaper.')
else:
	print('Canadian gas is',1/b,'times cheaper.')