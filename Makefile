TARGET = bin/run
INCLUDE_DIR = include
SRC_DIR = src
CXX = g++
FLAGS = -Wall -Wextra -I $(INCLUDE_DIR)

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
#Tạo danh sách các file object (.o) tương ứng từ các file nguồn.
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(SRC_DIR)/%.o)

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(OBJECTS)
	@mkdir -p $(dir $@)
	$(CXX) $(FLAGS) $(OBJECTS) -o $@

# Quy tắc để tạo file object từ file .cpp
$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJECTS)