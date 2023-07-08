echo Compiling Source Files... 
mkdir builds 
echo Compiling Chapter 1 source files...
clang chap1/bank.c -o builds/chap1_bank.exe
clang chap1/circle.c -o builds/chap1_circle.exe
clang chap1/money.c -o builds/chap1_money.exe
clang chap1/poly2.c -o builds/chap1_poly2.exe
clang chap1/polynomial.c -o builds/chap1_polynomial.exe
clang chap1/stars.c -o builds/chap1_stars.exe
clang chap1/tax.c -o builds/chap1_tax.exe
echo Done compiling Chapter 1 source files

echo Compiling Chapter 2 source files 
clang chap2/cashier.c -o builds/chap2_cashier.exe
clang chap2/date.c -o builds/chap2_date.exe
clang chap2/fractions.c -o builds/chap2_fractions.exe
clang chap2/grid.c -o builds/chap2_grid.exe
clang chap2/isbn.c -o builds/chap2_isbn.exe
clang chap2/telephone.c -o builds/chap2_telephone.exe
echo Done compiling Chapter 2 source files

pause 
