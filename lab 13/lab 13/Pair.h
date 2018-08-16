//template class 
template<class T>
class Pair
{
public:
	Pair(const T&, const T&);
	T get_first();
	T get_second();
private:
	T first;
	T second;
};


template <class T>
//parameterized constructer which takes two values and sets them to the first and second private variables
Pair<T>::Pair(const T& first_val, const T& second_val) : first(first_val), second(second_val)
{};

template <class T>
//gets the first value
T Pair<T>::get_first()
{
	return first;
}

template <class T>
//gets the second value
T Pair<T>::get_second()
{
	return second;
}