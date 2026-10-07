CXX := g++
CXXFLAGS := -std=c++20 -Wall -Wextra -g -O0

.PHONY: clean

%:
	@test -n "$(SOURCES)" || (echo "Usage: make name SOURCES=\"a.cpp b.cpp\""; exit 1)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $@

clean:
	@test -n "$(TARGET)" || (echo "Usage: make clean TARGET=name"; exit 1)
	rm -f -- "$(TARGET)"
