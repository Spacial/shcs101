### Makefile to make sure that will compile insecure code
# options:
# -g :
# -fno-stack-protector :
# -no-pie :
# -z execstack : 
# -Wl:
# -z,norelro:
# -fno-builtin:
# -std=c99:
# -Wno-deprecated-declarations:
# -U_FORTIFY_SOURCE:
# -D_FORTIFY_SOURCE=0:
#  

CC = gcc
CFLAGS = -g -fno-stack-protector -no-pie -z execstack -Wl,-z,norelro -U_FORTIFY_SOURCE -D_FORTIFY_SOURCE=0 -Wno-deprecated-declarations -std=c99 -fno-builtin
LDFLAGS = 

## change for your code name
ORIGIN = 0x00MEM_sysconf
SRC = $(ORIGIN).c
OBJ = $(SRC:.c=.o)
BIN = $(ORIGIN)

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BIN)