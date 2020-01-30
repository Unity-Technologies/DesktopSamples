#pragma once
class Preferences
{
public:
    Preferences();
    ~Preferences();

    int GetMonitorSelection();
    void SetMonitorSelection(int monitor);

    int GetWidth();
    void SetWidth(int width);

    int GetHeight();
    void SetHeight(int height);

    int GetGraphicsQualityIndex();
    void SetGraphicsQualityIndex(int graphicsQuality);

    bool GetFullscreen();
    void SetFullscreen(bool fullscreen);

    bool GetStereo3d();
    void SetStereo3d(bool stereo3d);


private:
    int m_monitor;
    int m_width;
    int m_height;
    int m_graphicsQuality;
    bool m_fullscreenMode;
    bool m_stereo3d;
};

