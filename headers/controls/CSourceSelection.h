#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class CSourceSelection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectSource@CSourceSelection@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIPlayToSource@PlayTo@Media@5@@Z
    long SelectSource(::Windows::UI::Xaml::IDependencyObject *, ::Windows::Media::PlayTo::IPlayToSource * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSourceSelection@@QEAA@XZ
    ~CSourceSelection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMediaElement@CSourceSelection@@AEAAJPEAUIMediaElement@Controls@Xaml@UI@Windows@@@Z
    long HandleMediaElement(::Windows::UI::Xaml::Controls::IMediaElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WalkVisualTree@CSourceSelection@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long WalkVisualTree(::Windows::UI::Xaml::IDependencyObject *);
};
