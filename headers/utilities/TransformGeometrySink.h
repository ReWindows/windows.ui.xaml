#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class TransformGeometrySink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddArc@TransformGeometrySink@@UEAAXAEBUXPOINTF@@AEBUXSIZEF@@MII@Z
    virtual void AddArc(XPOINTF const &, XSIZEF const &, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBezier@TransformGeometrySink@@UEAAXAEBUXPOINTF@@00@Z
    virtual void AddBezier(XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBeziers@TransformGeometrySink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddBeziers(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLine@TransformGeometrySink@@UEAAXAEBUXPOINTF@@@Z
    virtual void AddLine(XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLines@TransformGeometrySink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddLines(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBezier@TransformGeometrySink@@UEAAXAEBUXPOINTF@@0@Z
    virtual void AddQuadraticBezier(XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBeziers@TransformGeometrySink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddQuadraticBeziers(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFigure@TransformGeometrySink@@UEAAXAEBUXPOINTF@@I@Z
    virtual void BeginFigure(XPOINTF const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@TransformGeometrySink@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFigure@TransformGeometrySink@@UEAAXI@Z
    virtual void EndFigure(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFillMode@TransformGeometrySink@@UEAAXW4Value@GeometryFillMode@@@Z
    virtual void SetFillMode(int);
};
