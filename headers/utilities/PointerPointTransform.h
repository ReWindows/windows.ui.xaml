#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class PointerPointTransform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PointerPointTransform@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@PointerPointTransform@DirectUI@@QEAAJPEAUIGeneralTransform@Media@Xaml@UI@Windows@@PEAUPoint@Foundation@7@_N@Z
    long SetTransform(::Windows::UI::Xaml::Media::IGeneralTransform *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformBounds@PointerPointTransform@DirectUI@@UEAAJURect@Foundation@Windows@@PEAU345@@Z
    virtual long TransformBounds(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryTransform@PointerPointTransform@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAU345@PEAE@Z
    virtual long TryTransform(WindissectOpaque, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Inverse@PointerPointTransform@DirectUI@@UEAAJPEAPEAUIPointerPointTransform@Input@UI@Windows@@@Z
    virtual long get_Inverse(::Windows::UI::Input::IPointerPointTransform * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PointerPointTransform@DirectUI@@UEAA@XZ
    virtual ~PointerPointTransform();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PointerPointTransform@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PointerPointTransform@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
};
} // namespace DirectUI
