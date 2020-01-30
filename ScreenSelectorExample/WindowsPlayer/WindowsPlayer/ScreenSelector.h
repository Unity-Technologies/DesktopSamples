#pragma once
#include <string>

bool DisplayScreenSelector(std::wstring& commandline);

struct Resolution
{
    int width;
    int height;
    Resolution(int w, int h)
    : width(w)
    , height(h)
    {

    }
};