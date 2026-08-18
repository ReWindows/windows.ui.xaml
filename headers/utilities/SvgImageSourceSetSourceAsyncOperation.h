#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 27 member(s).
namespace DirectUI {
class SvgImageSourceSetSourceAsyncOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreContinueAsyncAction@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAIXZ
    virtual unsigned int CoreContinueAsyncAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreFireCompletion@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAXXZ
    virtual void CoreFireCompletion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreReleaseRef@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAXXZ
    virtual void CoreReleaseRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreSetError@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAXJ@Z
    virtual void CoreSetError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreSetResults@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAJW4SvgImageSourceLoadStatus@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long CoreSetResults(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAJPEAW4SvgImageSourceLoadStatus@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long GetResults(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SvgImageSourceSetSourceAsyncOperation@DirectUI@@QEAA@XZ
    SvgImageSourceSetSourceAsyncOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@W4SvgImageSourceLoadStatus@Imaging@Media@Xaml@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@SvgImageSourceSetSourceAsyncOperation@DirectUI@@UEAAJPEAU?$IAsyncOperationCompletedHandler@W4SvgImageSourceLoadStatus@Imaging@Media@Xaml@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
};
} // namespace DirectUI
