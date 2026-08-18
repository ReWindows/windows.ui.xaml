#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class TransformGroup {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TransformGroup@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Children@TransformGroup@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVTransform@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Children(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@TransformGroup@DirectUI@@UEAAJPEAUMatrix@Media@Xaml@UI@Windows@@@Z
    virtual long get_Value(::Windows::UI::Xaml::Media::Matrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Children@TransformGroup@DirectUI@@UEAAJPEAU?$IVector@PEAVTransform@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_Children(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TransformGroup@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TransformGroup@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TransformGroup@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TransformGroup@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
