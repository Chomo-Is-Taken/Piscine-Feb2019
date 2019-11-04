cat /etc/passwd | grep -v '\#' | cut -f1 -d : | sed -n 'n;p' | rev | sort -r | sed -n $FT_LINE1,$FT_LINE2\p | xargs | sed 's/\ /,/g' | sed "s/..$/\./" | tr -d '\n'
