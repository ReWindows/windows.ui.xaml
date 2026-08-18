#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class ParagraphGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ParagraphGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Inlines@ParagraphGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVInline@Documents@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Inlines(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextIndent@ParagraphGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_TextIndent(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextIndent@ParagraphGenerated@DirectUI@@UEAAJN@Z
    virtual long put_TextIndent(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ParagraphGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ParagraphGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ParagraphGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ParagraphGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
