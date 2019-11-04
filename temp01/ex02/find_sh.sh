find . -type f -name "*.sh" | rev | cut -f1 -d"/" | cut -c 4- | rev 
