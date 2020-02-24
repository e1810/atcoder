ifdef m
	MESSAGE=${m}
else
	MESSAGE=push from makefile
endif

push:
	git add -A
	git commit -m"${MESSAGE}"
	git pull origin master
	git push origin master
