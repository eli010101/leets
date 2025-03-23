#!/usr/bin/env python3

def interpreter(x):
   dict={'%':'q','\\':'w','|':'e','=':'r','[':'t',']':'y','<':'u','>':'i','{':'o','}':'p','@':'a','#':'s','$':'d','_':'f','&':'g','-':'h','+':'j','(':'k',')':'l','*':'z','"':'x',"'":'c',':':'v',';':'b','!':'n','?':'m'}

   for key, value in dict.items():
        x = x.replace(key, value)
    return x

if __name__ == "__main__":
	import argparse
	parser=argparse.ArgumentParser(description="interprets somethings")
	parser.add_argument("-i","--inter",help="-i <toInterpret>")
	args=parser.parse_args()
	inter=args.inter
	interpreter(inter)
