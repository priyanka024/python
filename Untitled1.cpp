def rKN(x,fx,n,hs)
k1=[]
k2=[]
k3=[]
k4=[]
xk=[]
for i in range(n):
	ki.append(fx[i](x)*hs)
for i in range(n):
	xk.append(x[i]+k1[i]*0.5)
for i in range(n):
	k2.append(fx[i](xk)*hs)
for i in range(n):
	xk[i]=x[i]+k2[i]*0.5 
	
for i in range(n):
	k3.append(fx[i](xk)*hs)
	
for i in range(n):
	xk[i]=x[i]+k3[i]
for i in range(n):
	k4.append(fx[i](xk)*hs)
	
for i in range(n):
	x[i]=x[i]+(k1[i]+2*(k2[i]+k3[i])+k2[i])/6
return x
