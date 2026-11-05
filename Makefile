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

SRCS := $(sort $(wildcard lab*/*.c))
BINS := $(patsubst %.c,build/%,$(SRCS))

.PHONY: all test sanitize format format-check clean

all: $(BINS)

build/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

test: all
	@sh tests/run_tests.sh build

sanitize:
	$(MAKE) clean
	$(MAKE) test CFLAGS="$(CFLAGS) -g -fsanitize=address,undefined -fno-sanitize-recover=all"

format:
	clang-format -i $(SRCS)

format-check:
	clang-format --dry-run --Werror $(SRCS)

clean:
	rm -rf build
