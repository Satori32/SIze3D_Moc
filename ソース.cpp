#include <stdio.h>

template<class T>
struct Size3D {
	T X = 0;
	T Y = 0;
	T Z = 0;
};

template<class T>
Size3D<T> ConstructSize3D(T X, T Y, T Z) {
	Size3D<T> S;
	S.X = X;
	S.Y = Y;
	S.Z = Z;

	return S;
}
template<class T>
bool Resize(Size3D<T>& S,T X, T Y, T Z) {
	S.X = X;
	S.Y = Y;
	S.Z = Z;

	return true;
}

template<class T>
bool ResizeX(Size3D<T>& In, T V) {
	In.X = V;
	return true;
}
template<class T>
bool ResizeY(Size3D<T>& In, T V) {
	In.Y = V;
	return true;
}
template<class T>
bool ResizeZ(Size3D<T>& In, T V) {
	In.Z = V;
	return true;
}

template<class T>
T Width(Size3D<T>& In) {
	return In.X;
}
template<class T>
T Height(Size3D<T>& In) {
	return In.Y;

}template<class T>
//T Depth(Size3D<T>& In){
T Z(Size3D<T>& In) {
	return In.Z;
}

int main() {
	Size3D<int> S = ConstructSize3D<int>(1, 1, 1);
	return 0;
}