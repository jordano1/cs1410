//clean up array in left hand object (this)
delete[] this->theString;
//create a new array big enough to hold right hand object's data
size = rho.size;
this->theString = new char[size];
//copy the data
for (int i = 0; i < size; i++)
{
	this->theString[i] = rho.theString[i];
}
//return this object
return *this;