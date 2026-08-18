#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class GeneralTransform {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@GeneralTransform@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformBounds@GeneralTransform@DirectUI@@UEAAJURect@Foundation@Windows@@PEAU345@@Z
    virtual long TransformBounds(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformBoundsCore@GeneralTransform@DirectUI@@UEAAJURect@Foundation@Windows@@PEAU345@@Z
    virtual long TransformBoundsCore(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformPoint@GeneralTransform@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAU345@@Z
    virtual long TransformPoint(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryTransform@GeneralTransform@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAU345@PEAE@Z
    virtual long TryTransform(WindissectOpaque, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryTransformCore@GeneralTransform@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAU345@PEAE@Z
    virtual long TryTransformCore(WindissectOpaque, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Inverse@GeneralTransform@DirectUI@@UEAAJPEAPEAUIGeneralTransform@Media@Xaml@UI@Windows@@@Z
    virtual long get_Inverse(::Windows::UI::Xaml::Media::IGeneralTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InverseCore@GeneralTransform@DirectUI@@UEAAJPEAPEAUIGeneralTransform@Media@Xaml@UI@Windows@@@Z
    virtual long get_InverseCore(::Windows::UI::Xaml::Media::IGeneralTransform * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GeneralTransform@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GeneralTransform@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@GeneralTransform@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GeneralTransform@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
