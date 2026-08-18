#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
class HWCompTreeNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearVisualContent@HWCompTreeNode@@UEAAXXZ
    virtual void ClearVisualContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueRemove@HWCompTreeNode@@UEAAJI@Z
    virtual long EnqueueRemove(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreSubgraphNode@HWCompTreeNode@@QEAAXPEAV1@PEAPEAVHWCompRenderDataNode@@@Z
    void GetPreSubgraphNode(HWCompTreeNode *, HWCompRenderDataNode * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@HWCompTreeNode@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHitTestVisibleContentInSubtree@HWCompTreeNode@@UEBA_NXZ
    virtual bool HasHitTestVisibleContentInSubtree() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChild@HWCompTreeNode@@QEAAJPEAVDCompTreeHost@@PEAVHWCompNode@@1PEAVCUIElement@@@Z
    long InsertChild(DCompTreeHost *, HWCompNode *, HWCompNode *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildAtBeginning@HWCompTreeNode@@QEAAJPEAVDCompTreeHost@@PEAVHWCompNode@@@Z
    long InsertChildAtBeginning(DCompTreeHost *, HWCompNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@HWCompTreeNode@@UEAAJI@Z
    virtual long Remove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@HWCompTreeNode@@QEAAJPEAVHWCompNode@@@Z
    long RemoveChild(HWCompNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveForReparenting@HWCompTreeNode@@QEAAJXZ
    long RemoveForReparenting();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentNode@HWCompTreeNode@@QEAAJPEAVHWCompLeafNode@@_NPEAVDCompTreeHost@@@Z
    long SetContentNode(HWCompLeafNode *, bool, DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTreeChildren@HWCompTreeNode@@UEAAJPEAVDCompTreeHost@@PEAI_N2@Z
    virtual long UpdateTreeChildren(DCompTreeHost *, unsigned int *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTreeRoot@HWCompTreeNode@@QEAAJPEAVDCompTreeHost@@_N@Z
    long UpdateTreeRoot(DCompTreeHost *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTreeVirtual@HWCompTreeNode@@UEAAJPEAVDCompTreeHost@@PEAI_N2@Z
    virtual long UpdateTreeVirtual(DCompTreeHost *, unsigned int *, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWCompTreeNode@@UEAA@XZ
    virtual ~HWCompTreeNode();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisual@HWCompTreeNode@@IEAAJPEAVDCompTreeHost@@PEAUIDCompVisual@DCompHelpers@@1PEAPEAU34@@Z
    long CreateVisual(DCompTreeHost *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRedirectionWalkParent@HWCompTreeNode@@MEAAPEAV1@XZ
    virtual HWCompTreeNode * GetRedirectionWalkParent();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWCompTreeNode@@IEAA@PEAVCCoreServices@@PEAVCompositorTreeHost@@II@Z
    HWCompTreeNode(CCoreServices *, CompositorTreeHost *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVisual@HWCompTreeNode@@IEAAJPEAUIDCompVisual@DCompHelpers@@00@Z
    long InsertVisual(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateDirtyFlag@HWCompTreeNode@@MEAAXW4Value@DirtyFlags@@@Z
    virtual void NWPropagateDirtyFlag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCompNode@HWCompTreeNode@@IEAAJPEAVCDependencyObject@@@Z
    long RemoveCompNode(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDManipData@HWCompTreeNode@@IEAAJPEAVCUIElement@@@Z
    long UpdateDManipData(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDManipHitTestVisual@HWCompTreeNode@@MEAAXPEAVDCompTreeHost@@@Z
    virtual void UpdateDManipHitTestVisual(DCompTreeHost *);
};
