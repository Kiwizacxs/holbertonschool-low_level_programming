#!/bin/bash
echo "File Name?"
read filename
echo "#!/bin/bash" > $filename

chmod u+x $filename
echo "New line:"
read newline
echo $newline >> $filename
git add $filename
echo 'Commit name?'
read commitname
git commit -m "$commitname"
git push
