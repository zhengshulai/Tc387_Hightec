#
# Makefile to generate the "Dhrystone" benchmark program
# (TriBoard-TC38xA Board part CPU0)
#
# Copyright HighTec EDV-Systeme GmbH 1982-2020
#
ROOT = $(dir $(realpath $(lastword $(MAKEFILE_LIST))))

include files.mk

HTCPATH = C:/HighTec/toolchains/tricore/v4.9.4.1/bin
CC = $(HTCPATH)/tricore-gcc.exe
LD = $(CC)
LINK = $(HTCPATH)/tricore-ld.exe
OBJCOPY = $(HTCPATH)/tricore-objcopy.exe
SIZE = $(TCPREFIX)-size
MCPU = tc38xx
CEXTRA = -fno-common --std=c99
CWARN  = -Wall -W -Werror -Wno-unused-parameter -Wno-sign-compare
DEFAULT_COPTS = -gdwarf-2 -pipe -fno-builtin -maligned-data-sections -Wl,--gc-sections -Wl,--mem-holes -Wl,--no-warn-flags

BSP_CDEFS	= -DTRIBOARD_TC38XA
CDEFS	= $(BSP_CDEFS)
COPTS	= $(DEFAULT_COPTS) -Os

CFLAGS	= -g $(COPTS) $(CDEFS) $(CEXTRA) $(CWARN) -I$(HTCPATH)/../tricore/include $(addprefix -I, $(HEADERS))


STARTFILE_OPTION = -nostartfiles
LSF_OPTION	= -Wl,-T,"$(ROOT)ld/tc387_memory.ld"
#LSF_OPTION	+= -L$(ROOT)ld
PROJECT = TC387_StartUp
ELFTYP = .elf
HEXTYP = .hex

LDFLAGS	= $(STARTFILE_OPTION) $(LSF_OPTION) -Wl,-Map="$(PROJECT).map" -Wl,--extmap="a" -Wl,--gc-sections -Wl,--no-warn-flags -Wl,-n -mtc162


define CBUILD
$2: $1
	@echo "Compling $1"
	@$(CC) -mcpu=$(MCPU) $(CFLAGS) -c $1 -o $2
endef

define CBUILDFILE
	$(eval $(call CBUILD,$1,$(OBJ_PATH)/$(basename $(notdir $1)).o))
	OBJ	+= $(OBJ_PATH)/$(basename $(notdir $1)).o
endef
ifeq ($(MAKECMDGOALS),$(filter $(MAKECMDGOALS),all))
$(foreach file, $(CFILES), $(eval $(call CBUILDFILE,$(file))))
endif

TARGET_ELF	= $(PROJECT)$(ELFTYP)
TARGET_HEX	= $(PROJECT)$(HEXTYP)

.PHONY: all

all: $(TARGET_HEX)

$(TARGET_ELF): $(OBJ)
	@$(LD) -mcpu=$(MCPU) $(LDFLAGS) -o $@ $^
	@echo "Gen ELF END============="

$(TARGET_HEX): $(TARGET_ELF)
	@$(OBJCOPY) -O ihex $< $@
	@echo "Gen HEX END============="
