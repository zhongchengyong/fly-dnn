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

#ifndef FLY_DNN_NODE_H
#define FLY_DNN_NODE_H

#include <vector>

namespace dnn {

    class Layer;

    class Edge;

    typedef std::shared_ptr<Edge> edgeptr_t;

    class node : public std::enable_shared_from_this<node> {
    public:
        node(std::size_t inSize, std::size_t outSize) : prev_(inSize), next_(outSize) {}

        virtual ~node() = default;

        const std::vector<edgeptr_t> &prev() const{ return prev_; };
        const std::vector<edgeptr_t> &next() const{ return next_; }

        std::size_t prevPort(const Edge& e) const;
        std::size_t nextPort(const Edge& e) const;

        // delete构造函数应该声明为public
        node() = delete;

    protected:
        mutable std::vector<edgeptr_t> prev_;
        mutable std::vector<edgeptr_t> next_;

    };

    class Layer {

    };

    class Edge {

    };

}


#endif //FLY_DNN_NODE_H
