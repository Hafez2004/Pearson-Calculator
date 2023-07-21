#include "Pearson.h"
using namespace std;
Pearson::Pearson(const vector<float>& x_values, const vector<float>& y_values)
    : x_values_(x_values)
    , y_values_(y_values)
    , correlation_coefficient_(0.0f)
{
    Calculate_Correlation();
}

void Pearson::Calculate_Correlation()
{
    // Calculate the mean of x and y values
    float x_mean = 0.0f;
    float y_mean = 0.0f;

    for (size_t i = 0; i < x_values_.size(); i++)
    {
        x_mean += x_values_[i];
        y_mean += y_values_[i];
    }

    x_mean /= x_values_.size();
    y_mean /= y_values_.size();

    // Calculate the covariance and standard deviation of x and y values
    float covariance = 0.0f;
    float x_stddev = 0.0f;
    float y_stddev = 0.0f;

    for (size_t i = 0; i < x_values_.size(); i++)
    {
        float x_diff = x_values_[i] - x_mean;
        float y_diff = y_values_[i] - y_mean;

        covariance += x_diff * y_diff;
        x_stddev += x_diff * x_diff;
        y_stddev += y_diff * y_diff;
    }

    covariance /= x_values_.size();
    x_stddev /= x_values_.size();
    y_stddev /= y_values_.size();

    // Calculate the correlation coefficient
    correlation_coefficient_ = covariance / (sqrt(x_stddev) * sqrt(y_stddev));
}

float Pearson::Get_Coefficient()
{
    return correlation_coefficient_;
}