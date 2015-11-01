void displayProcessed();
void displayRaw();
void findEmptySpot(short maxSpeed, char speed, int searchVal);
void prioToInparkeren(char automatic, short maxSpeed, char speed, double radiusWheel, double radiusBetweenWheels, double turnTimes, int sensorValFromEdge); // automatic 'Y' means one scripted move, automatic 'N' will mean dynamically.
void inparkeren(short maxSpeed, char speed, double radius/*or float*/, short minParkWidth);
double degreeTimes(short distance, double radius /*or float*/);
bool measureHole(short maxSpeed, char speed, int holeSearchVal, double radius, short minParkWidth);
void park(short maxSpeed, char speed, double radiusWheel, double radiusBetweenWheels, double turnTimes, int sensorValFromEdge);
double getDistanceFromCircle(double radius, double turnTimes);
short getTargetFromDistance(double distance, double radius);