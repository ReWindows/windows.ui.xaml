#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
class DCompTransformConversionContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMatrixTransform@DCompTransformConversionContext@@QEAAXPEBVCMILMatrix@@PEAPEAUIDCompositionTransform@@@Z
    void CreateMatrixTransform(CMILMatrix const *, IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMatrixTransform3D@DCompTransformConversionContext@@QEAA?AV?$ComPtr@UIDCompositionMatrixTransform3D@@@WRL@Microsoft@@PEAVCMILMatrix4x4@@@Z
    WindissectOpaque CreateMatrixTransform3D(CMILMatrix4x4*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRotateTransform@DCompTransformConversionContext@@QEAAXPEAPEAUIDCompositionTransform@@@Z
    void CreateRotateTransform(IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRotateTransform3D@DCompTransformConversionContext@@QEAA?AV?$ComPtr@UIDCompositionRotateTransform3D@@@WRL@Microsoft@@XZ
    WindissectOpaque CreateRotateTransform3D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaleTransform@DCompTransformConversionContext@@QEAAXPEAPEAUIDCompositionTransform@@MM@Z
    void CreateScaleTransform(IDCompositionTransform * *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaleTransform3D@DCompTransformConversionContext@@QEAA?AV?$ComPtr@UIDCompositionScaleTransform3D@@@WRL@Microsoft@@XZ
    WindissectOpaque CreateScaleTransform3D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSkewTransform@DCompTransformConversionContext@@QEAAXPEAPEAUIDCompositionTransform@@@Z
    void CreateSkewTransform(IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransform3DGroup@DCompTransformConversionContext@@QEAAXPEAPEAUIDCompositionTransform3D@@I0@Z
    void CreateTransform3DGroup(IDCompositionTransform3D * *, unsigned int, IDCompositionTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransform3DGroup@DCompTransformConversionContext@@QEAAXPEAUIDCompositionTransform3D@@0PEAPEAU2@@Z
    void CreateTransform3DGroup(IDCompositionTransform3D *, IDCompositionTransform3D *, IDCompositionTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformGroup@DCompTransformConversionContext@@QEAAXPEAPEAUIDCompositionTransform@@I0@Z
    void CreateTransformGroup(IDCompositionTransform * *, unsigned int, IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformGroup@DCompTransformConversionContext@@QEAAXPEAUIDCompositionTransform@@0PEAPEAU2@@Z
    void CreateTransformGroup(IDCompositionTransform *, IDCompositionTransform *, IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTranslateTransform@DCompTransformConversionContext@@QEAAXPEAPEAUIDCompositionTransform@@MM@Z
    void CreateTranslateTransform(IDCompositionTransform * *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTranslateTransform3D@DCompTransformConversionContext@@QEAA?AV?$ComPtr@UIDCompositionTranslateTransform3D@@@WRL@Microsoft@@XZ
    WindissectOpaque CreateTranslateTransform3D();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DCompTransformConversionContext@@QEAA@PEAUIDCompositionDesktopDevicePartner@@@Z
    DCompTransformConversionContext(IDCompositionDesktopDevicePartner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRotateTransform@DCompTransformConversionContext@@QEAAXPEAUIDCompositionTransform@@M_NPEAUIDCompositionAnimation@@M12M12@Z
    void UpdateRotateTransform(IDCompositionTransform *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRotateTransform3D@DCompTransformConversionContext@@QEAAXPEAUIDCompositionRotateTransform3D@@M_NPEAUIDCompositionAnimation@@MMMM12M12M12@Z
    void UpdateRotateTransform3D(IDCompositionRotateTransform3D *, float, bool, IDCompositionAnimation *, float, float, float, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleTransform@DCompTransformConversionContext@@QEAAXPEAUIDCompositionTransform@@M_NPEAUIDCompositionAnimation@@M12M12M12@Z
    void UpdateScaleTransform(IDCompositionTransform *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleTransform3D@DCompTransformConversionContext@@QEAAXPEAUIDCompositionScaleTransform3D@@M_NPEAUIDCompositionAnimation@@M12M12M12M12M12@Z
    void UpdateScaleTransform3D(IDCompositionScaleTransform3D *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSkewTransform@DCompTransformConversionContext@@QEAAXPEAUIDCompositionTransform@@M_NPEAUIDCompositionAnimation@@M12M12M12@Z
    void UpdateSkewTransform(IDCompositionTransform *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTranslateTransform@DCompTransformConversionContext@@QEAAXPEAUIDCompositionTransform@@M_NPEAUIDCompositionAnimation@@M12@Z
    void UpdateTranslateTransform(IDCompositionTransform *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTranslateTransform3D@DCompTransformConversionContext@@QEAAXPEAUIDCompositionTranslateTransform3D@@M_NPEAUIDCompositionAnimation@@M12M12@Z
    void UpdateTranslateTransform3D(IDCompositionTranslateTransform3D *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *, float, bool, IDCompositionAnimation *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DCompTransformConversionContext@@QEAA@XZ
    ~DCompTransformConversionContext();
};
