#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class HitTestGeometrySink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddArc@HitTestGeometrySink@@UEAAXAEBUXPOINTF@@AEBUXSIZEF@@MII@Z
    virtual void AddArc(XPOINTF const &, XSIZEF const &, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBezier@HitTestGeometrySink@@UEAAXAEBUXPOINTF@@00@Z
    virtual void AddBezier(XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBeziers@HitTestGeometrySink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddBeziers(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLine@HitTestGeometrySink@@UEAAXAEBUXPOINTF@@@Z
    virtual void AddLine(XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLines@HitTestGeometrySink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddLines(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBezier@HitTestGeometrySink@@UEAAXAEBUXPOINTF@@0@Z
    virtual void AddQuadraticBezier(XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBeziers@HitTestGeometrySink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddQuadraticBeziers(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFigure@HitTestGeometrySink@@UEAAXAEBUXPOINTF@@I@Z
    virtual void BeginFigure(XPOINTF const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@HitTestGeometrySink@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFigure@HitTestGeometrySink@@UEAAXI@Z
    virtual void EndFigure(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFillMode@HitTestGeometrySink@@UEAAXW4Value@GeometryFillMode@@@Z
    virtual void SetFillMode(int);
};
