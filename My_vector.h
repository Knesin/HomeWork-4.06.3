#pragma once
template <class T>
class My_vector {
public:
	My_vector();
	My_vector(const My_vector& copy);
	~My_vector();
	My_vector& operator=(const My_vector& other);
	unsigned size();
	unsigned capacity();
	T at(const unsigned index);
	void push_back(const T& value);
	T pop_back();
private:
	unsigned size_;
	unsigned capacity_;
	T* data_;
};

template <class T>
My_vector<T>::My_vector()
	:size_{0}, capacity_{4}
{
	data_ = new T[capacity_];
}

template <class T>
My_vector<T>::My_vector(const My_vector& copy)
	:size_{ copy.size_ }, capacity_{ copy.capacity_ }
{
	data_ = new T[capacity_];
	for (unsigned i = 0; i < size_; ++i) {
		data_[i] = copy.data_[i];
	}
}


template <class T>
My_vector<T>::~My_vector()
{
	delete[] data_;
}

template <class T>
My_vector<T>& My_vector<T>::operator=(const My_vector& other)
{
	//if (*this == other) {
	//	return *this;
	//}
	delete[] data_;
	size_ = other.size_;
	capacity_ = other.capacity_;
	data_ = new T[capacity_];
	for (unsigned i = 0; i < size_; ++i) {
		data_[i] = other.data_[i];
	}
	return *this;
}

template <class T>
unsigned My_vector<T>::size() {
	return size_;
}

template <class T>
unsigned My_vector<T>::capacity() {
	return capacity_;
}

template <class T>
T My_vector<T>::at(const unsigned index) {
	if (index < 0 || index > (size_ - 1)) {
		throw "Error index";
	}
	return data_[index];
}

template <class T>
void My_vector<T>::push_back(const T& value) {
	if (size_ == capacity_) {
		capacity_ *= 1.5;
		T* tmp_data = new T[capacity_];
		T* tmp_swap;
		for (int i = 0; i < size_; ++i) {
			tmp_data[i] = data_[i];
		}
		tmp_swap = data_;
		data_ = tmp_data;
		delete[] tmp_swap;
	}
	data_[size_] = value;
	++size_;
}

template <class T>
T My_vector<T>::pop_back() {
	if (size_ == 0) {
		throw "Vector empty";
	}
	size_--;
	return data_[size_];
}