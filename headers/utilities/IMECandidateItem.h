#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
namespace DirectUI {
class IMECandidateItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@IMECandidateItem@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CandidateFontSize@IMECandidateItem@DirectUI@@UEAAJPEAN@Z
    virtual long get_CandidateFontSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CandidateIndex@IMECandidateItem@DirectUI@@UEAAJPEAH@Z
    virtual long get_CandidateIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CandidateMargin@IMECandidateItem@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_CandidateMargin(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CandidateString@IMECandidateItem@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CandidateString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyboardShortcut@IMECandidateItem@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_KeyboardShortcut(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Metadata@IMECandidateItem@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Metadata(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MetadataVisibility@IMECandidateItem@DirectUI@@UEAAJPEAW4Visibility@Xaml@UI@Windows@@@Z
    virtual long get_MetadataVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SecondaryFontSize@IMECandidateItem@DirectUI@@UEAAJPEAN@Z
    virtual long get_SecondaryFontSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShortcutOpacity@IMECandidateItem@DirectUI@@UEAAJPEAN@Z
    virtual long get_ShortcutOpacity(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShortcutVisibility@IMECandidateItem@DirectUI@@UEAAJPEAW4Visibility@Xaml@UI@Windows@@@Z
    virtual long get_ShortcutVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CandidateFontSize@IMECandidateItem@DirectUI@@UEAAJN@Z
    virtual long put_CandidateFontSize(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CandidateIndex@IMECandidateItem@DirectUI@@UEAAJH@Z
    virtual long put_CandidateIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CandidateMargin@IMECandidateItem@DirectUI@@UEAAJUThickness@Xaml@UI@Windows@@@Z
    virtual long put_CandidateMargin(::Windows::UI::Xaml::Thickness);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CandidateString@IMECandidateItem@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_CandidateString(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KeyboardShortcut@IMECandidateItem@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_KeyboardShortcut(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Metadata@IMECandidateItem@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Metadata(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MetadataVisibility@IMECandidateItem@DirectUI@@UEAAJW4Visibility@Xaml@UI@Windows@@@Z
    virtual long put_MetadataVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SecondaryFontSize@IMECandidateItem@DirectUI@@UEAAJN@Z
    virtual long put_SecondaryFontSize(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShortcutOpacity@IMECandidateItem@DirectUI@@UEAAJN@Z
    virtual long put_ShortcutOpacity(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShortcutVisibility@IMECandidateItem@DirectUI@@UEAAJW4Visibility@Xaml@UI@Windows@@@Z
    virtual long put_ShortcutVisibility(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@IMECandidateItem@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@IMECandidateItem@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@IMECandidateItem@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@IMECandidateItem@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
