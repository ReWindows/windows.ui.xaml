#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class WebViewBrushGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@WebViewBrushGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Redraw@WebViewBrushGenerated@DirectUI@@UEAAJXZ
    virtual long Redraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@WebViewBrushGenerated@DirectUI@@UEAAJPEAUIWebView@Controls@Xaml@UI@Windows@@@Z
    virtual long SetSource(::Windows::UI::Xaml::Controls::IWebView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceName@WebViewBrushGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SourceName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourceName@WebViewBrushGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_SourceName(HSTRING__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewBrushGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewBrushGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WebViewBrushGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewBrushGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
