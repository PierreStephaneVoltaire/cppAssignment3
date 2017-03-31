# GNU Make workspace makefile autogenerated by Premake

ifndef config
  config=debug
endif

ifndef verbose
  SILENT = @
endif

ifeq ($(config),debug)
  Assignment3_config = debug
endif
ifeq ($(config),release)
  Assignment3_config = release
endif

PROJECTS := Assignment3

.PHONY: all clean help $(PROJECTS) 

all: $(PROJECTS)

Assignment3:
ifneq (,$(Assignment3_config))
	@echo "==== Building Assignment3 ($(Assignment3_config)) ===="
	@${MAKE} --no-print-directory -C . -f Assignment3.make config=$(Assignment3_config)
endif

clean:
	@${MAKE} --no-print-directory -C . -f Assignment3.make clean

help:
	@echo "Usage: make [config=name] [target]"
	@echo ""
	@echo "CONFIGURATIONS:"
	@echo "  debug"
	@echo "  release"
	@echo ""
	@echo "TARGETS:"
	@echo "   all (default)"
	@echo "   clean"
	@echo "   Assignment3"
	@echo ""
	@echo "For more information, see http://industriousone.com/premake/quick-start"