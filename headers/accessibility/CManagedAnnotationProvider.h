#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CManagedAnnotationProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedAnnotationProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedAnnotationProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnnotationTypeId@CManagedAnnotationProvider@@UEAAJPEAH@Z
    virtual long get_AnnotationTypeId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnnotationTypeName@CManagedAnnotationProvider@@UEAAJPEAVxstring_ptr@@@Z
    virtual long get_AnnotationTypeName(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Author@CManagedAnnotationProvider@@UEAAJPEAVxstring_ptr@@@Z
    virtual long get_Author(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DateTime@CManagedAnnotationProvider@@UEAAJPEAVxstring_ptr@@@Z
    virtual long get_DateTime(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Target@CManagedAnnotationProvider@@UEAAJPEAPEAVCAutomationPeer@@@Z
    virtual long get_Target(CAutomationPeer * *);
};
