#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

template<class T1, class T2, class Pred = std::less<T2> >
struct sort_pair_by_second {
    bool operator()(const std::pair<T1, T2> &left, const std::pair<T1, T2> &right) {
        Pred p;
        return p(left.second, right.second);
    }
};

vector<int> optimalPoints(vector<std::pair<int, int>> segments) {

//     sort the vector in descending order according to the end points
    std::sort(segments.begin(), segments.end(), sort_pair_by_second<int, int, std::less<> >());

    vector<int> points; // create a vector to store the common points in the segments
    int point = segments[0].second; // set the point to the first end point i-e shortest end point
    points.push_back(point);

    for (size_t i = 1; i < segments.size(); ++i) {
        if (point < segments[i].first || point > segments[i].second) { // if the point is not in the segment
            point = segments[i].second; // update the point to the end point of the current segment
            points.push_back(point); // store it in the vector
        }
    }


    return points;
}

int main() {
    unsigned int n;
    std::cin >> n;
    vector<std::pair<int, int>> segments(n);
    for (auto &segment : segments) {
        std::cin >> segment.first >> segment.second;
    }
    vector<int> points = optimalPoints(segments);
    std::cout << points.size() << "\n";
    for (int point : points) {
        std::cout << point << " ";
    }
}


//3
//1 3
//2 5
//3 6

//4
//4 7
//1 3
//2 5
//5 6


