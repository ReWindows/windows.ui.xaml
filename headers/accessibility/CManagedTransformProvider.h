#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CManagedTransformProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedTransformProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedTransformProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsITransformProvider2@CManagedTransformProvider@@UEAAJPEAH@Z
    virtual long IsITransformProvider2(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Move@CManagedTransformProvider@@UEAAJMM@Z
    virtual long Move(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CManagedTransformProvider@@UEAAJMM@Z
    virtual long Resize(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotate@CManagedTransformProvider@@UEAAJM@Z
    virtual long Rotate(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Zoom@CManagedTransformProvider@@UEAAJM@Z
    virtual long Zoom(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomByUnit@CManagedTransformProvider@@UEAAJW4ZoomUnit@UIAXcp@@@Z
    virtual long ZoomByUnit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanMove@CManagedTransformProvider@@UEAAJPEAH@Z
    virtual long get_CanMove(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanResize@CManagedTransformProvider@@UEAAJPEAH@Z
    virtual long get_CanResize(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanRotate@CManagedTransformProvider@@UEAAJPEAH@Z
    virtual long get_CanRotate(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanZoom@CManagedTransformProvider@@UEAAJPEAH@Z
    virtual long get_CanZoom(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomLevel@CManagedTransformProvider@@UEAAJPEAN@Z
    virtual long get_ZoomLevel(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomMaximum@CManagedTransformProvider@@UEAAJPEAN@Z
    virtual long get_ZoomMaximum(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomMinimum@CManagedTransformProvider@@UEAAJPEAN@Z
    virtual long get_ZoomMinimum(double *);
};
