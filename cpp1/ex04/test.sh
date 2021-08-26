echo "-------------------------------------------"
echo './replace test1.txt 1 "*"\n'
./replace test1.txt 1 "*"
diff test1.txt out.replace
echo "-------------------------------------------"
echo './replace test1.txt 12 "!"\n'
./replace test1.txt 12 "!"
diff test1.txt out.replace
echo "-------------------------------------------"
echo './replace test2.txt " " "@"\n'
./replace test2.txt " " "@"
diff test2.txt out.replace
echo "-------------------------------------------"
echo './replace test2.txt "123" "^"\n'
./replace test2.txt "123" "^"
diff test2.txt out.replace
echo "-------------------------------------------"
echo './replace test2.txt "ggg" "@"\n'
./replace test2.txt "ggg" "@"
diff test2.txt out.replace
echo "-------------------------------------------"
echo './replace test2.txt "" "@"\n'
./replace test2.txt "" "@"
diff test2.txt out.replace
echo "-------------------------------------------"
echo './replace test2.txt "ggg" "@" ""\n'
./replace test2.txt "ggg" "@" ""
diff test2.txt out.replace
echo "-------------------------------------------"
chmod -r test2.txt
echo './replace test2.txt "ggg" "@"\n'
./replace test2.txt "ggg" "@"
diff test2.txt out.replace
chmod +r test2.txt
echo "\n-------------------------------------------"
