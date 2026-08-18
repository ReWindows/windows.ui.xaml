#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class HWSolidColorBrush {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HWSolidColorBrush@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArgb@HWSolidColorBrush@@QEBAIXZ
    unsigned int GetArgb() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@HWSolidColorBrush@@UEBA?AU_D3DCOLORVALUE@@XZ
    virtual _D3DCOLORVALUE GetColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFactory@HWSolidColorBrush@@UEBAXPEAPEAUID2D1Factory@@@Z
    virtual void GetFactory(ID2D1Factory * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpacity@HWSolidColorBrush@@UEBAMXZ
    virtual float GetOpacity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@HWSolidColorBrush@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z
    virtual void GetTransform(D2D_MATRIX_3X2_F *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HWSolidColorBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HWSolidColorBrush@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@HWSolidColorBrush@@UEAAXPEBU_D3DCOLORVALUE@@@Z
    virtual void SetColor(_D3DCOLORVALUE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@HWSolidColorBrush@@UEAAXM@Z
    virtual void SetOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@HWSolidColorBrush@@UEAAXPEBUD2D_MATRIX_3X2_F@@@Z
    virtual void SetTransform(D2D_MATRIX_3X2_F const *);
};
