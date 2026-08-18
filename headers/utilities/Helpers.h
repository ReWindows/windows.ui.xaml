#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace InkingExperiences {
class Helpers {
public:
    class SegmentBoundingBoxLess;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoRectsOverlap@Helpers@InkingExperiences@@YA_NAEBURect@Foundation@Windows@@0@Z
    bool DoRectsOverlap(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcherQueueForCurrentThread@Helpers@InkingExperiences@@YAJPEAPEAUIDispatcherQueue@System@Windows@@@Z
    long GetDispatcherQueueForCurrentThread(::Windows::System::IDispatcherQueue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInkAnalysisInputScopeFromCoreTextInputScope@Helpers@InkingExperiences@@YA?AW4InkAnalysisInputScope@Analysis@Internal@Inking@Input@UI@Windows@@W4CoreTextInputScope@Core@Text@89@@Z
    int GetInkAnalysisInputScopeFromCoreTextInputScope(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeId@Helpers@InkingExperiences@@YAIPEAUIInkStroke@Inking@Input@UI@Windows@@@Z
    unsigned int GetStrokeId(::Windows::UI::Input::Inking::IInkStroke *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDispatcherQueueForCurrentThread@Helpers@InkingExperiences@@YA_NAEBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@Z
    bool IsDispatcherQueueForCurrentThread(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStrokeColor@Helpers@InkingExperiences@@YAXPEAUIInkStroke@Inking@Input@UI@Windows@@AEBUColor@67@@Z
    void SetStrokeColor(::Windows::UI::Input::Inking::IInkStroke *, ::Windows::UI::Color const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnionRectNoEmpty@Helpers@InkingExperiences@@YA?AURect@Foundation@Windows@@AEBU345@0@Z
    WindissectOpaque UnionRectNoEmpty(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace InkingExperiences
