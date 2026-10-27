

using ObjectConsoleApp;

Point firstPoint;

firstPoint = new Point();

//firstPoint.x = -18;
//firstPoint.SetX(-18);
firstPoint.X = 18;
firstPoint.Y = 197;

//int variable = firstPoint.x;
//int variable = firstPoint.GetX();
int variable = firstPoint.X;

firstPoint.Show();


//Point secondPoint = new Point();
//var secondPoint = new Point();
Point secondPoint = new(15, 8);
secondPoint.Show();

Point thirdPoint = new() { X = 18, Y = 197 };
//thirdPoint.X = 18;
//thirdPoint.Y = 197;

thirdPoint.Show();

Point3D first3DPoint = new(15, 48, 77);
first3DPoint.Z = 19;

first3DPoint.Show();