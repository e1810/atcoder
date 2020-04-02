ifdef m
	MESSAGE=${m}
else
	MESSAGE=push from makefile
endif

push:
	git add -A
	ac/.submissioncrawler.sh
	git commit -m"${MESSAGE}"
	git push origin HEAD
