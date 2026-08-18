#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 32 member(s).
namespace DirectUI {
class TextAlternativesOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TextAlternativesOperation@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TextAlternativesOperation@DirectUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@TextAlternativesOperation@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long GetResults(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TextAlternativesOperation@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TextAlternativesOperation@DirectUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@TextAlternativesOperation@DirectUI@@QEAAJPEAVCTextBoxBase@@@Z
    long Init(CTextBoxBase *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TextAlternativesOperation@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TextAlternativesOperation@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextAlternativesOperation@DirectUI@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEmptyResults@TextAlternativesOperation@DirectUI@@QEAAJXZ
    long SetEmptyResults();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResults@TextAlternativesOperation@DirectUI@@QEAAXPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    void SetResults(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@TextAlternativesOperation@DirectUI@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@TextAlternativesOperation@DirectUI@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextAlternativesOperation@DirectUI@@UEAA@XZ
    virtual ~TextAlternativesOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@TextAlternativesOperation@DirectUI@@MEAAXXZ
    virtual void OnCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@TextAlternativesOperation@DirectUI@@MEAAXXZ
    virtual void OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStart@TextAlternativesOperation@DirectUI@@MEAAJXZ
    virtual long OnStart();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputLanguage@TextAlternativesOperation@DirectUI@@AEAAJPEAPEAUHSTRING__@@@Z
    long GetInputLanguage(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinguisticAlternativesAsyncImpl@TextAlternativesOperation@DirectUI@@AEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    long GetLinguisticAlternativesAsyncImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectAlternateIntoFullText@TextAlternativesOperation@DirectUI@@AEAAJPEAUHSTRING__@@PEAPEAU3@@Z
    long InjectAlternateIntoFullText(HSTRING__*, HSTRING__* *);
};
} // namespace DirectUI
