import fileinput
for line in fileinput.input():
  #print(line)
  #print(line.split())
  a=line.split()
#  print(ord(a[1][0]))
#  print(a[1][1])
  diff=int(a[1][1])-int(a[0][1])
  x=chr(ord(a[0][0])+diff)
  y=chr(ord(a[0][0])-diff)
  #print(chr(ord(a[0][0])+diff))
  if (x == a[1][0] or  y==a[1][0]):
  	print('captured')
  else:
  	print('safe')
  #print(x)
#  print(y)