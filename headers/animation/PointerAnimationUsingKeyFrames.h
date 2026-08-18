#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class PointerAnimationUsingKeyFrames {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PointerAnimationUsingKeyFrames@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeToObject@PointerAnimationUsingKeyFrames@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long SetRelativeToObject(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeToObjectName@PointerAnimationUsingKeyFrames@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long SetRelativeToObjectName(HSTRING__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PointerAnimationUsingKeyFrames@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
