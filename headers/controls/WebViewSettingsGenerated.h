#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class WebViewSettingsGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@WebViewSettingsGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIndexedDBEnabled@WebViewSettingsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsIndexedDBEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsJavaScriptEnabled@WebViewSettingsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsJavaScriptEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsIndexedDBEnabled@WebViewSettingsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsIndexedDBEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsJavaScriptEnabled@WebViewSettingsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsJavaScriptEnabled(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewSettingsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewSettingsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WebViewSettingsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewSettingsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
