/**
 *  median.hpp
 *   
 *  Contains class definition for MedianFilter
 *
 *  Created by Jinay Patel
 *  License - GPL v2
 */
 
#ifndef __MEDIAN_HPP__
#define __MEDIAN_HPP__

#include <iostream>
#include <stdint.h>

class MedianFilter
{
    private:
        size_t kernel[2];
    
    public:
        MedianFilter();
        MedianFilter(size_t ksize);
        int Median(const uint8_t *input, uint8_t *output, int width, int height);
};

#endif //__MEDIAN_HPP__