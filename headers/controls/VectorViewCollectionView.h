#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class VectorViewCollectionView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@VectorViewCollectionView@DirectUI@@SAJPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAPEAUICollectionView@Data@Xaml@UI@6@@Z
    static long CreateInstance(WindissectOpaque *, ::Windows::UI::Xaml::Data::ICollectionView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@VectorViewCollectionView@DirectUI@@UEAAJPEAPEAU?$IIterator@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@VectorViewCollectionView@DirectUI@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetAt(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@VectorViewCollectionView@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@VectorViewCollectionView@DirectUI@@UEAAJPEAUIInspectable@@PEAIPEAE@Z
    virtual long IndexOf(IInspectable *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@VectorViewCollectionView@DirectUI@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VectorViewCollectionView@DirectUI@@IEAA@XZ
    VectorViewCollectionView();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VectorViewCollectionView@DirectUI@@MEAA@XZ
    virtual ~VectorViewCollectionView();
};
} // namespace DirectUI
