
#include <iostream>
#include <vector>
#include "../lib/encoder.hpp"

using namespace std;

void init() {

}

int main(int argc, char *argv[])
{
    Encoder model(argv[1]); // argv[1] is the model name given as command line argument
    model.add_layer(2, 1, false, "max", 2); // configure layer structure freely
    model.load(); // loads encoder configurations (if pre-exists)

    vector<vector<vector<float>>> dataset; // load dataset into a vector of 2d vectors

    model.encode(dataset); // runs encoder (padding, convolution, and pooling)
    model.save(); // saves encoder attributes
    return 0;
}
