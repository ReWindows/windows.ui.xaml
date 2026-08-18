#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class HWStrokeStyle {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HWStrokeStyle@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDashCap@HWStrokeStyle@@UEBA?AW4D2D1_CAP_STYLE@@XZ
    virtual int GetDashCap() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDashOffset@HWStrokeStyle@@UEBAMXZ
    virtual float GetDashOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDashStyle@HWStrokeStyle@@UEBA?AW4D2D1_DASH_STYLE@@XZ
    virtual int GetDashStyle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDashes@HWStrokeStyle@@UEBAXPEAMI@Z
    virtual void GetDashes(float *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDashesCount@HWStrokeStyle@@UEBAIXZ
    virtual unsigned int GetDashesCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndCap@HWStrokeStyle@@UEBA?AW4D2D1_CAP_STYLE@@XZ
    virtual int GetEndCap() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFactory@HWStrokeStyle@@UEBAXPEAPEAUID2D1Factory@@@Z
    virtual void GetFactory(ID2D1Factory * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineJoin@HWStrokeStyle@@UEBA?AW4D2D1_LINE_JOIN@@XZ
    virtual int GetLineJoin() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMiterLimit@HWStrokeStyle@@UEBAMXZ
    virtual float GetMiterLimit() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartCap@HWStrokeStyle@@UEBA?AW4D2D1_CAP_STYLE@@XZ
    virtual int GetStartCap() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWStrokeStyle@@QEAA@PEBUD2D1_STROKE_STYLE_PROPERTIES@@@Z
    HWStrokeStyle(D2D1_STROKE_STYLE_PROPERTIES const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HWStrokeStyle@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HWStrokeStyle@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWStrokeStyle@@EEAA@XZ
    virtual ~HWStrokeStyle();
};
