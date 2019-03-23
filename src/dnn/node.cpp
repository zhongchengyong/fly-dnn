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

#include "node.h"

std::size_t dnn::node::prevPort(const dnn::Edge &e) const {
    auto it = std::find_if(prev_.begin(), prev_.end(), [&](edgeptr_t ep) { return ep.get() == &e; });
    return static_cast<size_t>(std::distance(prev_.begin(), it));
}

std::size_t dnn::node::nextPort(const dnn::Edge &e) const {
    auto it = std::find_if(next_.begin(), next_.end(), [&](edgeptr_t ep){ return ep.get() == &e;});
    return static_cast<size_t>(std::distance(next_.begin(), it));
}
