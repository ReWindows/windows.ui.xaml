#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
class CUIATransformProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIATransformProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIATransformProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Move@CUIATransformProviderWrapper@@UEAAJNN@Z
    virtual long Move(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveImpl@CUIATransformProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long MoveImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIATransformProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIATransformProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CUIATransformProviderWrapper@@UEAAJNN@Z
    virtual long Resize(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeImpl@CUIATransformProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long ResizeImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotate@CUIATransformProviderWrapper@@UEAAJN@Z
    virtual long Rotate(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RotateImpl@CUIATransformProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long RotateImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Zoom@CUIATransformProviderWrapper@@UEAAJN@Z
    virtual long Zoom(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomByUnit@CUIATransformProviderWrapper@@UEAAJW4ZoomUnit@@@Z
    virtual long ZoomByUnit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomImpl@CUIATransformProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long ZoomImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanMove@CUIATransformProviderWrapper@@UEAAJPEAH@Z
    virtual long get_CanMove(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanResize@CUIATransformProviderWrapper@@UEAAJPEAH@Z
    virtual long get_CanResize(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanRotate@CUIATransformProviderWrapper@@UEAAJPEAH@Z
    virtual long get_CanRotate(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanZoom@CUIATransformProviderWrapper@@UEAAJPEAH@Z
    virtual long get_CanZoom(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomLevel@CUIATransformProviderWrapper@@UEAAJPEAN@Z
    virtual long get_ZoomLevel(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomMaximum@CUIATransformProviderWrapper@@UEAAJPEAN@Z
    virtual long get_ZoomMaximum(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomMinimum@CUIATransformProviderWrapper@@UEAAJPEAN@Z
    virtual long get_ZoomMinimum(double *);
};
