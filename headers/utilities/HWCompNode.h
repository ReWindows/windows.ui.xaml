#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class HWCompNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearVisualContent@HWCompNode@@UEAAXXZ
    virtual void ClearVisualContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueRemove@HWCompNode@@UEAAJI@Z
    virtual long EnqueueRemove(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@HWCompNode@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCVisual@HWCompNode@@UEBA?AV?$xref_ptr@UIVisual@Composition@UI@Windows@@@@XZ
    virtual WindissectOpaque GetWUCVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCVisualInMainTree@HWCompNode@@UEBA?AV?$xref_ptr@UIVisual@Composition@UI@Windows@@@@XZ
    virtual WindissectOpaque GetWUCVisualInMainTree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHitTestVisibleContent@HWCompNode@@QEBA_NXZ
    bool HasHitTestVisibleContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWinRT@HWCompNode@@UEBA_NXZ
    virtual bool IsWinRT() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@HWCompNode@@UEAAJI@Z
    virtual long Remove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFullScreenCounter@HWCompNode@@QEAAXH@Z
    void UpdateFullScreenCounter(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTree@HWCompNode@@QEAAJPEAVDCompTreeHost@@PEAI_N2@Z
    long UpdateTree(DCompTreeHost *, unsigned int *, bool, bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendTransform@HWCompNode@@KAJPEAUIDCompVisual@DCompHelpers@@PEAV?$xvector@PEAUIDCompVisual@DCompHelpers@@@@@Z
    static long AppendTransform(WindissectOpaque *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWCompNode@@IEAA@PEAVCCoreServices@@PEAVCompositorTreeHost@@I@Z
    HWCompNode(CCoreServices *, CompositorTreeHost *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWCompNode@@MEAA@XZ
    virtual ~HWCompNode();
};
