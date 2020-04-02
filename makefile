ifdef m
	MESSAGE=${m}
else
	MESSAGE=push from makefile
endif

push:
	git add -A
	git commit -m"${MESSAGE}"
	git push origin HEAD
	ac/.submissioncrawler.sh
