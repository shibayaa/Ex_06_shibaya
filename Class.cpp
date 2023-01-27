#include <iostream>
using namespace std;
#include "Class.h"

class Box {
public:
	float width, height, depth;

	Box(float width, float height, float depth)
	{
		this->width = width;
		this->height = height;
		this->depth = depth;
	}
	float GetVolume()
	{
		return width * height * depth;
	}
	float GetSurface()
	{
		return (width * height + height * depth + depth * width) * 2;
	}
};
int Main()
{
	float width, height, depth;
	cout << "•" << endl;
	cin >> width;
	cout << "‚‚³" << endl;
	cin >> height;
	cout << "‰œs‚«" << endl;
	cin >> depth;
	Box* box = new Box(width, height, depth);
	cout << "box‚Ì•\–ÊÏ" << box->GetSurface() << "box‚Ì‘ÌÏ " << box->GetVolume();
	delete box;
}