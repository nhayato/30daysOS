#Makefile

CC = gcc
CFLAGS = -nostdlib -m32 -fno-builtin -O0

TARGET_DIR = ../../../bin/app
DIST_DIR = $(TARGET_DIR)/dist
TMP_DIR = $(TARGET_DIR)/tmp/crack4
APP = $(DIST_DIR)/crack4
APP_SRC = crack4.s

$(APP): $(APP_SRC)
	mkdir -p $(DIST_DIR)
	mkdir -p $(TMP_DIR)
	$(CC) -c $(CFLAGS) -o $(TMP_DIR)/$(APP_SRC:.s=.o) $(APP_SRC)
	objcopy -O binary $(TMP_DIR)/$(APP_SRC:.s=.o) $(APP)

clean:
	rm -rf $(TMP_DIR)
	rm -f $(APP)
