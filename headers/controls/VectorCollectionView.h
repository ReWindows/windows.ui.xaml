#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class VectorCollectionView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@VectorCollectionView@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long Append(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@VectorCollectionView@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@VectorCollectionView@DirectUI@@SAJPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAPEAUICollectionView@Data@Xaml@UI@6@@Z
    static long CreateInstance(WindissectOpaque *, ::Windows::UI::Xaml::Data::ICollectionView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@VectorCollectionView@DirectUI@@UEAAJPEAPEAU?$IIterator@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@VectorCollectionView@DirectUI@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetAt(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@VectorCollectionView@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@VectorCollectionView@DirectUI@@UEAAJPEAUIInspectable@@PEAIPEAE@Z
    virtual long IndexOf(IInspectable *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@VectorCollectionView@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long InsertAt(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMoreItemsAsyncImpl@VectorCollectionView@DirectUI@@UEAAJIPEAPEAU?$IAsyncOperation@ULoadMoreItemsResult@Data@Xaml@UI@Windows@@@Foundation@Windows@@@Z
    virtual long LoadMoreItemsAsyncImpl(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@VectorCollectionView@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@VectorCollectionView@DirectUI@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@VectorCollectionView@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long SetAt(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasMoreItemsImpl@VectorCollectionView@DirectUI@@UEAAJPEAE@Z
    virtual long get_HasMoreItemsImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@VectorCollectionView@DirectUI@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@VectorCollectionView@DirectUI@@IEAAJPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    long SetSource(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VectorCollectionView@DirectUI@@IEAA@XZ
    VectorCollectionView();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VectorCollectionView@DirectUI@@MEAA@XZ
    virtual ~VectorCollectionView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceVectorChanged@VectorCollectionView@DirectUI@@AEAAJPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIInspectable@@@Z
    long OnSourceVectorChanged(WindissectOpaque *, IInspectable *);
};
} // namespace DirectUI
