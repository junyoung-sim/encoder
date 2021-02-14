
a simple encoder built for encoding any kind of data (images, financial time series... whatever!)

1. mkdir ./models/<model_name> ./models/<model_name>/kernels
2. vim ~/src/main.cpp ---> edit code to load inputs and add/change layer configurations
3. ./build
4. ./encoder <model_name>
5. encoded samples are saved in ./temp/encoded with each sample flattened in one line
6. kernels and layer configurations are saved in ./models/<model_name>

