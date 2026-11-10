# Build, test and format every lab program.
#
#   make              build all programs into build/
#   make test         build and run the input/output tests
#   make sanitize     build with AddressSanitizer + UBSan, then run the tests
#   make format       reformat all sources with clang-format
#   make format-check fail if any source is not formatted
#   make clean        remove build/

CC      ?= gcc
CFLAGS  ?= -std=c11 -Wall -Wextra -Wpedantic -Werror -O2
LDLIBS  ?= -lm
PYTHON  ?= python3
CLANG_FORMAT ?= clang-format

SRCS := $(sort $(wildcard lab*/*.c))
HEADERS := $(wildcard include/*.h)
BINS := $(patsubst %.c,build/%,$(SRCS))

.PHONY: all test sanitize format format-check clean

all: $(BINS)

build/%: %.c $(HEADERS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

test: all
	$(PYTHON) -m unittest discover -s tests -p 'test_*.py'
	$(PYTHON) tests/run_tests.py build

sanitize:
	$(MAKE) clean
	$(MAKE) test CFLAGS="$(CFLAGS) -g -fsanitize=address,undefined -fno-sanitize-recover=all"

format:
	$(CLANG_FORMAT) -i $(SRCS) $(HEADERS)

format-check:
	$(CLANG_FORMAT) --dry-run --Werror $(SRCS) $(HEADERS)

clean:
	rm -rf build
