/* Copyright (C) 2015-2017 Michele Colledanchise - All Rights Reserved
*
*   Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
*   to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
*   and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
*   The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
*
*   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*   WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#ifndef PARALLEL_NODE_H
#define PARALLEL_NODE_H

#include <control_node.h>
#include <string>

namespace BT
{
class ParallelNode : public ControlNode
{
public:
    // Constructor
    explicit ParallelNode(std::string name, int threshold_M);
    ~ParallelNode();
    int DrawType();
    BT::ReturnStatus Tick();
    void Halt();

    unsigned int get_threshold_M();
    void set_threshold_M(unsigned int threshold_M);

private:
    unsigned int threshold_M_;
    unsigned int success_childred_num_;
    unsigned int failure_childred_num_;
};
}  // namespace BT
#endif  // PARALLEL_NODE_H
