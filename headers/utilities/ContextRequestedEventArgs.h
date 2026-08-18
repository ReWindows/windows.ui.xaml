#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class ContextRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPosition@ContextRequestedEventArgs@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUPoint@Foundation@6@PEAE@Z
    virtual long TryGetPosition(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@ContextRequestedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@ContextRequestedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ContextRequestedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@ContextRequestedEventArgs@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ContextRequestedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ContextRequestedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ContextRequestedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPositionImpl@ContextRequestedEventArgs@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUPoint@Foundation@6@PEAE@Z
    long TryGetPositionImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *, unsigned char *);
};
} // namespace DirectUI
