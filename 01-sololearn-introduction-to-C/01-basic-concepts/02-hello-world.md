### Hello World
#

> - Refer to the sample code `code-hello.c`.

```plaintext
Header File
    - Example is <stdio.h> where the function for generating output is defined.

main()
    - Entry point to a C program.

Code Block {}
    - Indicate the beginning and end of a function.
    - The statements inside the code block determines what the function does.

Escape Sequence
    - Always begin with a backslash (\).
    - Example \n or newline.

Semicolon (;)
    - Indicates the end of statement.

return 0;
    - 0 means that the program executed successfully.
    - Any number indicates something is wrong with the program.
```

> - Below are some of the escape sequence.

```plaintext
\a (Alert or Bell)
    - Hex value in ASCII is "0x07".
    - Produces a bell sound.
    - Note: Tried but doesn't work.

\b (Backspace)
    - Hex value in ASCII is "0x08",
    - Move the cursor back by one position.
    - Example "Hello\b" will result to "Hell".

\f (Form Feed)
    - Hex value in ASCII is "0x0C".
    - Advances the printer to the next page.

\r (Carriage Return)
    - Hex value in ASCII is "0x0D".
    - Moves the cursor to the beginning of the line.

\t (Horizontal Tab)
    - Hex value in ASCII is "0x09".
    - Moves the cursor to the next horizontal stop..

\v (Vertical Tab)
    - Hex value in ASCII is "0x0B".
    - Moves the cursor to the next vertical tab stop.

\\ (Backslash)
    - Hex value in ASCII is "0x5C".
    - Inserts a backslash character.

\' (Single Quote)
    - Hex value in ASCII is "0x27".
    - Inserts a single quote character.

\" (Double Quote)
    - Hex value in ASCII is "0x22".
    - Inserts a double quote character.

\? (Question Mark)
    - Hex value in ASCII is "0x3F".
    - Inserts a question mark character.

\0 (Null Character)
    - Hex value in ASCII is "0x00".
    - Inserts a null character.
    - Note space is not same as null character, NULL has a
      ASCII value 0, while ASCII value of 2.

\nnn (Octal Value)
    - Hex value in ASCII is "0x00" to "0xFF".
    - Insert the equivalent value of octal nnn.

\xhh (Hexadecimal Value)
    - Hex value in ASCII is "0x00" to "0xFF".
    - Insert the equivalent value of hh.
```
