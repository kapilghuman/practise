def stock_list(listOfArt, listOfCat):
	ls=[]
	if(len(listOfCat)==0 or len(listOfArt)==0):
		string=""
	else:
		for i in listOfCat:
			value = 0
			for j in listOfArt:
				if(i==j[0]):
					s=j.split()
					value=value + int(s[1])
			ins="("+i+" : "+str(value)+")"
			ls.append(ins)
		string=" - ".join(ls)
	return string
a=stock_list(["ABART 20","CDXEF 50","BKWRK 25","BTSQZ 89","DRTYM 60"],["A","B","C","W"])
print(a)