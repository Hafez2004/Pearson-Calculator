#pragma once

#include <vector>

class Pearson
{
private:
    std::vector<float> x_values_;
    std::vector<float> y_values_;
    float correlation_coefficient_;

    void Calculate_Correlation();

public:
    Pearson(const std::vector<float>& x_values, const std::vector<float>& y_values);
    float Get_Coefficient();
};