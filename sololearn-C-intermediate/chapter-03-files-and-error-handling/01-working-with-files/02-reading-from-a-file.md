## $\textnormal{Reading from a File}$

> - The `stdio.h` library also includes functions for <br />
    reading from an open file.

> - A file can be read one character at a time or an <br />
    entire string can be read into a character `buffer`, <br />
    which is typically a char array used for temporary <br />
    storage.

> - `fgetc(fp)` returns the next character from the file <br />
    pointed to by `fp`.

> - If the end of the file has been reached, then `EOF` is <br />
    returned.

> - `fgets(buff, n, fp)` reads `n-1` characters from the file <br />
    pointed to by `fp` and stores the string in buff.

> - A NULL character `\0` is appended as the last character in <br />
    `buff`.

> - If fgets encounters a newline characters or the end of file <br />
    before `n-1` characters is reached, then only the characters <br />
    up to that point are stored in buff.
