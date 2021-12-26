# include<iostream>
# include<sstream>
# include<algorithm>

template <typename T>
class dynamic_array
{
    T*data;
    size_t n;
    public:
    dynamic_array(int n)
    {
        this ->n=n;
        data = new T[n];
    }
    dynamic_array(const dynamic_array<T>& other)
    {
        n = other.n;
        data = new T[n];
        for(int i = 0; i<n; i++){
            data[i] = other[i];
        }
    }
    T& operator[](int index)
    {
        return data[index];
    }
    const T& operator[](int index) const
    {
        return data[index];

    }
    T& at(int index)
    {
        if(index <n)
        return data[index];
        throw "index out of range";
    }

    size_t size() const
    {
        return n;
    }

    ~dynamic_array()
    {
        delete[] data; // A destrcutor to prevent memory leak.
    }

    T* begin()
    {
        return data;
    }
    const T* begin() const
    {
        return data;
    }
    T* end()
    {
        return data + n;

    }

    friend dynamic_array<T> operator+(const dynamic_array<T>& arr1, dynamic_array<T>& arr2)
    {
        dynamic_array<T> result(arr1.size() + arr2.size());
        std::copy(arr1.begin(), arr1.end(), result.begin());
        std::copy(arr2.begin(), arr2.end(), result.begin() + arr1.size());
        return result;
    }
};