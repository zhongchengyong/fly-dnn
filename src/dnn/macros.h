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

#ifndef FLY_DNN_MACROS_H
#define FLY_DNN_MACROS_H

#include <boost/preprocessor/seq/for_each.hpp>

#define INSTANTIATE_CLASS_HELPER(R, CLASSNAME, T)\
template class CLASSNAME<T>;

#define INSTANTIATE_CLASS_1T(CLASSNAME, T) \
BOOST_PP_SEQ_FOR_EACH(INSTANTIATE_CLASS_HELPER, CLASSNAME, T);


#endif //FLY_DNN_MACROS_H
