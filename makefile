push:
	git add -A
	git commit -m"push from makefile"
	git pull origin master
	git push origin master

