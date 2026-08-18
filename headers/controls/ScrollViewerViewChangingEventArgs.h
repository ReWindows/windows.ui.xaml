#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class ScrollViewerViewChangingEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollViewerViewChangingEventArgs@DirectUI@@QEAA@XZ
    ScrollViewerViewChangingEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FinalView@ScrollViewerViewChangingEventArgs@DirectUI@@UEAAJPEAPEAUIScrollViewerView@Controls@Xaml@UI@Windows@@@Z
    virtual long get_FinalView(::Windows::UI::Xaml::Controls::IScrollViewerView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInertial@ScrollViewerViewChangingEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsInertial(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NextView@ScrollViewerViewChangingEventArgs@DirectUI@@UEAAJPEAPEAUIScrollViewerView@Controls@Xaml@UI@Windows@@@Z
    virtual long get_NextView(::Windows::UI::Xaml::Controls::IScrollViewerView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FinalView@ScrollViewerViewChangingEventArgs@DirectUI@@QEAAJPEAUIScrollViewerView@Controls@Xaml@UI@Windows@@@Z
    long put_FinalView(::Windows::UI::Xaml::Controls::IScrollViewerView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsInertial@ScrollViewerViewChangingEventArgs@DirectUI@@QEAAJE@Z
    long put_IsInertial(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NextView@ScrollViewerViewChangingEventArgs@DirectUI@@QEAAJPEAUIScrollViewerView@Controls@Xaml@UI@Windows@@@Z
    long put_NextView(::Windows::UI::Xaml::Controls::IScrollViewerView *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollViewerViewChangingEventArgs@DirectUI@@UEAA@XZ
    virtual ~ScrollViewerViewChangingEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ScrollViewerViewChangingEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ScrollViewerViewChangingEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ScrollViewerViewChangingEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ScrollViewerViewChangingEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
