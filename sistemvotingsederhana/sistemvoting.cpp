#include <iostream>
#include <cassert>

// Fungsi yang akan di-test
int tambah(int a, int b) {
    return a + b;
}

// Fungsi untuk test
void test_tambah() {
    std::cout << "Testing fungsi tambah...\n";
    
    // Test case 1
    assert(tambah(2, 3) == 5);
    std::cout << "Test 1 passed: 2 + 3 = 5\n";
    
    // Test case 2
    assert(tambah(-1, 1) == 0);
    std::cout << "Test 2 passed: -1 + 1 = 0\n";
    
    // Test case 3
    assert(tambah(0, 0) == 0);
    std::cout << "Test 3 passed: 0 + 0 = 0\n";
    
    // Test case 4
    assert(tambah(-5, -3) == -8);
    std::cout << "Test 4 passed: -5 + (-3) = -8\n";
    
    std::cout << "Semua test berhasil!\n";
}

int main() {
    test_tambah();
    return 0;
}