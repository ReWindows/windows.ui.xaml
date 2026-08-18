#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class Block {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Block@DirectUI@@QEAA@XZ
    Block();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Block@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LineHeight@Block@DirectUI@@UEAAJPEAN@Z
    virtual long get_LineHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LineStackingStrategy@Block@DirectUI@@UEAAJPEAW4LineStackingStrategy@Xaml@UI@Windows@@@Z
    virtual long get_LineStackingStrategy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Margin@Block@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_Margin(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextAlignment@Block@DirectUI@@UEAAJPEAW4TextAlignment@Xaml@UI@Windows@@@Z
    virtual long get_TextAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LineHeight@Block@DirectUI@@UEAAJN@Z
    virtual long put_LineHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LineStackingStrategy@Block@DirectUI@@UEAAJW4LineStackingStrategy@Xaml@UI@Windows@@@Z
    virtual long put_LineStackingStrategy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Margin@Block@DirectUI@@UEAAJUThickness@Xaml@UI@Windows@@@Z
    virtual long put_Margin(::Windows::UI::Xaml::Thickness);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextAlignment@Block@DirectUI@@UEAAJW4TextAlignment@Xaml@UI@Windows@@@Z
    virtual long put_TextAlignment(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Block@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Block@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Block@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Block@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
