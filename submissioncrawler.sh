get_extension(){
  case "$1" in
    *Awk* ) echo "awk" ;;
    *C#* ) echo "cs" ;;
    *C++* ) echo "cpp" ;;
    *Bash* ) echo "sh" ;;
    *Brainfuck* ) echo "bf" ;;
    *COBOL* ) echo "cobol" ;;
    *Clojure* ) echo "clj" ;;
    *Lisp* ) echo "lisp" ;;
    *Crystal* ) echo "cr" ;;
    *Fortran* ) echo "f" ;;
    *Go* ) echo "go" ;;
    *Haskell* ) echo "hs" ;;
    *JavaScript* ) echo "js" ;;
    *Java* ) echo "java" ;;
    *Julia* ) echo "jl" ;;
    *Kotlin* ) echo "kt" ;;
    *MoonScript* ) echo "moon" ;;
    *Nim* ) echo "nim" ;;
    *OCaml* ) echo "ml" ;;
    *Objective* ) echo "m" ;;
    *Octave* ) echo "m" ;;
    *PHP* ) echo "php" ;;
    *Pascal* ) echo "pas" ;;
    *Perl* ) echo "pl" ;;
    *Python* ) echo "py" ;;
    *Ruby* ) echo "rb" ;;
    *Scala* ) echo "scala" ;;
    *Scheme* ) echo "ss" ;;
    *Sed* ) echo "sed" ;;
    *Swift* ) echo "swift" ;;
    *Text* ) echo "txt" ;;
    *TypeScript* ) echo "ts" ;;
    *Unlambda* ) echo "unl" ;;
    *Basic* ) echo "vb" ;;
    *ML* ) echo "sml" ;;
    *F#* ) echo "fs" ;;
    *C* ) echo "c" ;;
    *D* ) echo "d" ;;
    ** ) echo "unknown";;
  esac
}

username="y61mpnl"

exists=()

for exist_id in $(ls -R -1 | grep -E ^[0-9]\{7,\}\\. | cut -d . -f 1); do
  exists[$exist_id]=1
done

submissions=$(\
   curl -so- --compressed https://kenkoooo.com/atcoder/atcoder-api/results?user=$username \
   | jq -c '.[]' \
   | sort -k 2,2 -t ",")

COUNT=0

IFS=$'\n'
for submission in $submissions; do
  for cmd in $(echo $submission | jq -r 'to_entries|map("\(.key)=\"\(.value)\"")|.[]'); do
    eval $cmd
  done

  if [ ! $result = "AC" ] || [ "${exists[$id]}" = "1" ]; then continue; fi

  echo "fetching submission #${id}..."

  directory="${contest_id}/${problem_id}"
  name="${id}.$(get_extension $language)"
  filename="ac/${directory}/${name}"

  submission_url="https://atcoder.jp/contests/${contest_id}/submissions/${id}"
  code=$(curl -so- $submission_url \
    | dos2unix \
    | xmllint --xpath '//*[@id="submission-code"]/text()' --html - 2>/dev/null \
    | sed 's/&amp;/\&/g; s/&lt;/\</g; s/&gt;/\>/g; s/&quot;/\"/g; s/#&#39;/\'"'"'/g;')

  mkdir -p "ac/${directory}"
  echo -e "${code}" > $filename


  git add .
  git commit -a -m"add ${filename}" --date="$(date -d @$epoch_second -R)"

  let count++

  sleep 0.5
done

git add -A
if [$# -e 1]; then
	 git commit -m"$1"
else
	git commit -m"auto-commit"
fi
git push origin master

