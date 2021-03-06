/*
Copyright [2019] [kode]

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef FLY_DNN_DEFINITION_H
#define FLY_DNN_DEFINITION_H

#include <vector>
#include <iostream>
#include <memory>


typedef std::vector<double> d_vec;
typedef std::vector<int> int_vec;
typedef unsigned int uint_t;




namespace dnn {
    //Common functions and classes from std and boost that framework often uses.
    using std::fstream;
    using std::ios;
    using std::vector;
    using std::shared_ptr;
    using std::make_shared;
} // namespace dnn

#endif //FLY_DNN_DEFINITION_H
