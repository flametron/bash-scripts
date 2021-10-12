echo ~
echo {1..10}
echo {001..100}
touch file_{01..15}{a..d}
greeting="Hello there!"
echo $greeting
echo ${greeting:6}
echo ${greeting:6:3}
man bash
echo ${greeting/there/everybody}
echo ${greeting//e/_}
echo ${greeting/e/_}
uname -r
echo "The kernel is $(uname -r)."
echo "Result: $(python3 -c 'print("Hello from Python")' | tr [a-z] [A-Z])"
echo $(( 2 + 2 ))
echo $(( 4 * 5 ))
