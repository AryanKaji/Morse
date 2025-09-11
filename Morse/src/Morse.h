#ifndef MORSE_H
#define MORSE_H

#include <string.h>

// Morse lookup table
struct MorseMap {
  const char* code;
  char letter;
};

const MorseMap morseTable[] = {
  {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'},
  {"..-.", 'F'}, {"--.", 'G'}, {"....", 'H'}, {"..", 'I'}, {".---", 'J'},
  {"-.-", 'K'}, {".-..", 'L'}, {"--", 'M'}, {"-.", 'N'}, {"---", 'O'},
  {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'}, {"...", 'S'}, {"-", 'T'},
  {"..-", 'U'}, {"...-", 'V'}, {".--", 'W'}, {"-..-", 'X'}, {"-.--", 'Y'},
  {"--..", 'Z'},
  {"-----", '0'}, {".----", '1'}, {"..---", '2'}, {"...--", '3'}, {"....-", '4'},
  {".....", '5'}, {"-....", '6'}, {"--...", '7'}, {"---..", '8'}, {"----.", '9'},
};

const int morseTableSize = sizeof(morseTable) / sizeof(morseTable[0]);

// Decode a Morse sequence (e.g. ".-" -> 'A')
inline char decodeMorse(const char* code) {
  for (int i = 0; i < morseTableSize; i++) {
    if (strcmp(code, morseTable[i].code) == 0) {
      return morseTable[i].letter;
    }
  }
  return '?'; // Return '?' for unknown codes
}

#endif
