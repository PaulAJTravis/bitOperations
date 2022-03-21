#include <stdio.h>


/*
* Name: getBit
* Desc: Gets the binary bit at the provided position.
*/
unsigned int getBit(int bit_string, int bit_num) {

  //Preforms a bitwise logical shift moving all bits in the provided number right bit_num times and stores the result in to res.
  unsigned int res = bit_string >>(bit_num-1);

  //Preforms a bitwise AND operation against the binary string 1UL. This will eliminate any leftover bits after the shift operation above.
  res = res & 0b00000001;

  return res;

}

/*
* Name: setBit
* Desc: Sets the binary bit at the provided position.
*/
unsigned int setBit(int bit_string, int bit_num, int value) {

  //Preforms two operations
  //First preforms a bitwise logical shift on the string 1UL moving all bits left bit_num times
  //Second preforms a bitwise XOR operation between bit_string and the result from the first step
  unsigned int res = bit_string ^ 1UL << (bit_num - 1);

  return res;

}

int main(int argc, char * argv) {

  unsigned int int_testvar;
  unsigned int int_bit;
  unsigned int new_val;

  printf("int> ");
  scanf("%u", &int_testvar);

  printf("bit> ");
  scanf("%u", &int_bit);

  printf("new val> ");
  scanf("%u", &new_val);

  unsigned int bit_at_num = getBit(int_testvar, int_bit);

  unsigned int new_num = setBit(int_testvar, int_bit, new_val);
  
  printf("Original Value of bit number %u: %u\n", int_bit, bit_at_num);
  printf("New value of number: %u\n", new_num);

}
