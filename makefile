ifdef m
	MESSAGE=${m}
else
	MESSAGE=push from makefile
endif

push:
	ac/.submissioncrawler.sh
	git add -A
	git commit -m"${MESSAGE}"
	git push origin HEAD
