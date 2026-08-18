#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 32 member(s).
class CDMViewport {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddClipContent@CDMViewport@@QEAAJPEAVCUIElement@@W4XDMContentType@@PEAPEAVCDMContent@@@Z
    long AddClipContent(CUIElement *, int, CDMContent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddConfiguration@CDMViewport@@QEAAJW4XDMConfigurations@@@Z
    long AddConfiguration(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddContent@CDMViewport@@QEAAJPEAVCUIElement@@W4XDMContentType@@PEAPEAVCDMContent@@@Z
    long AddContent(CUIElement *, int, CDMContent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearClipContents@CDMViewport@@QEAAJXZ
    long ClearClipContents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContents@CDMViewport@@QEAAJXZ
    long ClearContents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearQueuedInteractionTypes@CDMViewport@@QEAAXXZ
    void ClearQueuedInteractionTypes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDMViewport@@SAJPEAPEAV1@PEAVCUIElement@@1@Z
    static long Create(CDMViewport * *, CUIElement *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeclareOldViewportForCompositor@CDMViewport@@QEAAXXZ
    void DeclareOldViewportForCompositor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivatedConfiguration@CDMViewport@@QEBA?AW4XDMConfigurations@@XZ
    int GetActivatedConfiguration() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipContent@CDMViewport@@QEAAJIPEAPEAVCDMContent@@@Z
    long GetClipContent(unsigned int, CDMContent * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipContentElementNoRef@CDMViewport@@QEAAJIPEAPEAVCUIElement@@@Z
    long GetClipContentElementNoRef(unsigned int, CUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipContentNoRef@CDMViewport@@QEAAJPEAVCUIElement@@PEAPEAVCDMContent@@PEAI@Z
    long GetClipContentNoRef(CUIElement *, CDMContent * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipContentsCount@CDMViewport@@QEBAIXZ
    unsigned int GetClipContentsCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContent@CDMViewport@@QEAAJIPEAPEAVCDMContent@@@Z
    long GetContent(unsigned int, CDMContent * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentElementNoRef@CDMViewport@@QEAAJIPEAPEAVCUIElement@@@Z
    long GetContentElementNoRef(unsigned int, CUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentNoRef@CDMViewport@@QEAAJPEAVCUIElement@@PEAPEAVCDMContent@@PEAI@Z
    long GetContentNoRef(CUIElement *, CDMContent * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentsCount@CDMViewport@@QEBAIXZ
    unsigned int GetContentsCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentStatus@CDMViewport@@QEAAJAEAW4XDMViewportStatus@@@Z
    long GetCurrentStatus(int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOldStatus@CDMViewport@@QEAAJAEAW4XDMViewportStatus@@@Z
    long GetOldStatus(int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@CDMViewport@@QEAAJIAEAW4XDMViewportStatus@@@Z
    long GetStatus(unsigned int, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveClipContent@CDMViewport@@QEAAJPEAVCUIElement@@PEAPEAVCDMContent@@@Z
    long RemoveClipContent(CUIElement *, CDMContent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveConfiguration@CDMViewport@@QEAAJW4XDMConfigurations@@@Z
    long RemoveConfiguration(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveContent@CDMViewport@@QEAAJPEAVCUIElement@@PEAPEAVCDMContent@@@Z
    long RemoveContent(CUIElement *, CDMContent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCurrentStatus@CDMViewport@@QEAAJXZ
    long RemoveCurrentStatus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentOffsets@CDMViewport@@QEAAXMMPEAI@Z
    void SetContentOffsets(float, float, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetManipulatedElement@CDMViewport@@QEAAJPEAVCUIElement@@@Z
    long SetManipulatedElement(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@CDMViewport@@QEAAXW4DirectManipulationState@@@Z
    void SetState(int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDMViewport@@AEAA@PEAVCUIElement@@0@Z
    CDMViewport(CUIElement *, CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfigurationIndex@CDMViewport@@AEAAJW4XDMConfigurations@@AEAH@Z
    long GetConfigurationIndex(int, int &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDMViewport@@EEAA@XZ
    virtual ~CDMViewport();
};
