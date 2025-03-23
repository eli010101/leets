#!/usr/bin/env python3

def interpreter(x):
   dict={'%':'q','\\':'w','|':'e','=':'r','[':'t',']':'y','<':'u','>':'i','{':'o','}':'p','@':'a','#':'s','$':'d','_':'f','&':'g','-':'h','+':'j','(':'k',')':'l','*':'z','"':'x',"'":'c',':':'v',';':'b','!':'n','?':'m'," ":" "}
   if x == None:
       return "error404:no arguments found!"
   for key, value in dict.items():
        x = x.replace(key, value)
   return x

if __name__ == "__main__":
	inter=input("enter encoded message:")
	x=interpreter(inter)
	print(x)
