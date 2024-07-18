def remove_whitespace_and_lines(input_string):
    # Xóa tất cả các khoảng trắng
    no_whitespace = ''.join(input_string.split())
    
    # Xóa các dòng trống
    no_empty_lines = "\n".join([line for line in no_whitespace.split("\n") if line.strip() != ""])
    
    return no_empty_lines

# Ví dụ sử dụng
input_string = """
#include <iostream>
#include <cmath>

int main() { int test_case; std::cin >> test_case; if (test_case < 1 
	|| test_case > pow(10, 4)) {
		return 0;
	}
	int *n = new int(test_case); int count = 1; 
	for (int i = 0; i < test_case; i++) {
		int tmp; std::cin >> tmp; if (tmp < 3) { *(n + i) = 
			0; continue;
		}
		if (tmp % 2 == 0) { *(n + i) = tmp / 2 - 1; 
			continue;
		}
		else { *(n + i) = tmp / 2;
		}
	}
	for (int i = 0; i < test_case; i++) { std::cout << *(n + i) 
		<< std::endl;
	}
	delete[] n; n = nullptr; return 0;
}


"""
cleaned_string = remove_whitespace_and_lines(input_string)
print(cleaned_string)
