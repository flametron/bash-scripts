#!/bin/bash
grade(){
    x=$1
    case $x in
    100|9[0-9]) echo "O";;
    8[0-9]) echo "E";;
    7[0-9]) echo "A";;
    6[0-9]) echo "B";;
    5[0-9]) echo "C";;
    4[0-9]) echo "D";;
    *) echo "F";;
    esac
}
file=$1
if [ -f $file ]; then
    echo -n "$file accepted as input file."
    exec<$file
    printf "Name\t\t\t\tRoll No\t\tMarks\t\tGrade\n">student_result.txt
    while read line; do
        set `echo $line`
        name=$1" "$2
        grad=`grade $4`
        printf "$name\t\t\t$3\t\t$4\t\t$grad\n">>student_result.txt
    done
fi
echo
cat student_result.txt
