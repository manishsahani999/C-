/*
|
| genrates random number vector
| @params [int size, int start, int end]
*/

vector <int> generateRandomVector(int);
vector <int> generateRandomVector(int, int, int);


vector <int> generateRandomVector(int size) {
    vector <int> randVector;
    for (int  i = 0; i < size; i++) {
        randVector.push_back(rand());
    }
    return randVector;
}


vector <int> generateRandomVector(int size, int start, int end) {
    vector <int> randVector;
    for (int  i = 0; i < size; i++) {
        randVector.push_back(rand() % end + start);
    }
    return randVector;
}
