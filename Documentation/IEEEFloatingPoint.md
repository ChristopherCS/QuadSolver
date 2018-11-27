IEEE Float point: 
1. Floating point representation uses scientific notation to encode numbers, with a base number and an exponent. For example, 123.456 could be represented as 1.23456 × 102.

2. IEEE floating point numbers have three basic components: the sign, the exponent, and the mantissa. The mantissa is composed of the fraction and an implicit leading digit. The exponent base (2) is implicit and need not be stored. 

3. Single precision floating-point value is 32-bit where it is divided as the following
	Sign:1-bit
	Exponent: 8-bit
	Fraction: 23-bit

3. double precision floating-point value is 64-bit where it is divided as the following
	Sign:1-bit
	Exponent: 11-bit
	Fraction: 52-bit

4. If the sign is 0, it means positive value

5. If the sign is 1, it means negative value

6. The bias for single precision is 127 whereas the bias for the double precision is 1023.

7. The range for single precision denormalized value is ± 2^−149 to (1−2^−23)×2^−126, while the range for normalized value is ± 2^−126 to (2−2^ −23)×2^127

8. The range for double precision denormalized value is ± 2^−1074 to (1−2^−52)×2^−1022, while the range for normalized value is ± 2^−1022 to (2−2^−52)×2^1023 

reference:
https://steve.hollasch.net/cgindex/coding/ieeefloat.html
