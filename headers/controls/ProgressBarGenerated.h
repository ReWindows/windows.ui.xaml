#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class ProgressBarGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ProgressBarGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIndeterminate@ProgressBarGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsIndeterminate(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowError@ProgressBarGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_ShowError(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowPaused@ProgressBarGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_ShowPaused(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TemplateSettings@ProgressBarGenerated@DirectUI@@UEAAJPEAPEAUIProgressBarTemplateSettings@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_TemplateSettings(::Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsIndeterminate@ProgressBarGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsIndeterminate(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShowError@ProgressBarGenerated@DirectUI@@UEAAJE@Z
    virtual long put_ShowError(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShowPaused@ProgressBarGenerated@DirectUI@@UEAAJE@Z
    virtual long put_ShowPaused(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ProgressBarGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ProgressBarGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ProgressBarGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ProgressBarGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
