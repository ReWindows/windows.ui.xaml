#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class CaptureElementFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceProperty@CaptureElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_SourceProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StretchProperty@CaptureElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_StretchProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CaptureElementFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CaptureElementFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CaptureElementFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CaptureElementFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
