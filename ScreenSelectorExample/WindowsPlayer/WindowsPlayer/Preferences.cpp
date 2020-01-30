#include "PrecompiledHeader.h"
#include "Preferences.h"


Preferences::Preferences()
{
}


Preferences::~Preferences()
{
}

int Preferences::GetMonitorSelection()
{
    return m_monitor;
}

void Preferences::SetMonitorSelection(int monitor)
{
    m_monitor = monitor;
}

int Preferences::GetWidth()
{
    return m_width;
}

void Preferences::SetWidth(int width)
{
    m_width = width;
}

int Preferences::GetHeight()
{
    return m_height;
}

void Preferences::SetHeight(int height)
{
    m_height = height;
}

int Preferences::GetGraphicsQualityIndex()
{
    return m_graphicsQuality;
}

void Preferences::SetGraphicsQualityIndex(int graphicsQuality)
{
    m_graphicsQuality = graphicsQuality;
}

bool Preferences::GetFullscreen()
{
    return m_fullscreenMode;
}

void Preferences::SetFullscreen(bool fullscreenMode)
{
    m_fullscreenMode = fullscreenMode;
}

bool Preferences::GetStereo3d()
{
    return m_stereo3d;
}

void Preferences::SetStereo3d(bool stereo3d)
{
    m_stereo3d = stereo3d;
}