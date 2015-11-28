x1, y1, r1=input().split()
x1, y1, r1=int(x1),int(y1),int(r1)
x2, y2, r2=input().split()
x2, y2, r2=int(x2),int(y2),int(r2)

def dis(a1,a2,b1,b2):
    return ((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2))**.5

d=dis(x1,y1,x2,y2)

if(d>r1+r2) print(0)
elif()
