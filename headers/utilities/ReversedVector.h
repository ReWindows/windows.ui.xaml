#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 42 member(s).
class ReversedVector {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ReversedVector@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@ReversedVector@@UEAAJPEAUIInspectable@@@Z
    virtual long Append(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ReversedVector@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@ReversedVector@@UEAAJPEAPEAU?$IIterator@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@ReversedVector@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetAt(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ReversedVector@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ReversedVector@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ReversedVector@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@ReversedVector@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@ReversedVector@@UEAAJPEAUIInspectable@@PEAIPEAE@Z
    virtual long IndexOf(IInspectable *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@ReversedVector@@UEAAJIPEAUIInspectable@@@Z
    virtual long InsertAt(unsigned int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBoundTo@ReversedVector@@QEBA_NPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    bool IsBoundTo(WindissectOpaque *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ReversedVector@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ReversedVector@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@ReversedVector@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@ReversedVector@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ReversedVector@@QEAA@XZ
    ReversedVector();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@ReversedVector@@UEAAJIPEAUIInspectable@@@Z
    virtual long SetAt(unsigned int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@ReversedVector@@QEAAJPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    long SetSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VectorChanged@ReversedVector@@UEAAJPEAU?$VectorChangedEventHandler@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VectorChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@ReversedVector@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VectorChanged@ReversedVector@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VectorChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReversedVector@@UEAA@XZ
    virtual ~ReversedVector();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInnerVectorChanged@ReversedVector@@AEAAJPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@345@@Z
    long OnInnerVectorChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformIndex@ReversedVector@@AEAAII@Z
    unsigned int TransformIndex(unsigned int);
};
