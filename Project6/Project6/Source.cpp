#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

template <typename T>
class SmartArray {
private:
    std::vector<T> data;

public:
    void add(const T& value) {
        data.push_back(value);
    }

    void remove(const T& value) {
        data.erase(std::remove(data.begin(), data.end(), value), data.end());
    }

    void sort(std::function<bool(const T&, const T&)> comparator = std::less<T>()) {
        std::sort(data.begin(), data.end(), comparator);
    }

    void print() const {
        for (const auto& item : data) {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }

    T& operator[](size_t index) {
        return data[index];
    }

    size_t size() const {
        return data.begin();
    }
};

int main() {
    SmartArray<int> intArray;
    intArray.add(5);
    intArray.add(2);
    intArray.add(3);
    intArray.add(1);
    intArray.add(4);

    std::cout << "Arreglo de enteros: ";
    intArray.print();

    intArray.sort();
    std::cout << "Arreglo de enteros ordenado: ";
    intArray.print();

    SmartArray<std::string> stringArray;
    stringArray.add("manzana");
    stringArray.add("banana");
    stringArray.add("cereza");
    stringArray.add("durazno");

    std::cout << "Arreglo de strings: ";
    stringArray.print();

    stringArray.sort([](const std::string& a, const std::string& b) {
        return a.length() < b.length();
        });
    std::cout << "Arreglo de strings ordenado por longitud: ";
    stringArray.print();

    return 0;
}