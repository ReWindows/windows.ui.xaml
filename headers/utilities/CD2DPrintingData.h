#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CD2DPrintingData {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDPIScale@CD2DPrintingData@@UEAAMXZ
    virtual float GetDPIScale();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDocumentPackageTargetNoRef@CD2DPrintingData@@UEAAPEAXXZ
    virtual void * GetDocumentPackageTargetNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDocumentSettingsNoRef@CD2DPrintingData@@UEAAPEAXXZ
    virtual void * GetDocumentSettingsNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPageSize@CD2DPrintingData@@UEAAJHAEAUXSIZEF@@@Z
    virtual long GetPageSize(int, XSIZEF &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviewPackageTargetNoRef@CD2DPrintingData@@UEAAPEAXXZ
    virtual void * GetPreviewPackageTargetNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviewPaneSize@CD2DPrintingData@@UEAAJIAEAUXSIZEF@@@Z
    virtual long GetPreviewPaneSize(unsigned int, XSIZEF &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDPIScale@CD2DPrintingData@@UEAAXM@Z
    virtual void SetDPIScale(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDocumentPackageTarget@CD2DPrintingData@@UEAAJPEAX@Z
    virtual long SetDocumentPackageTarget(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDocumentSettings@CD2DPrintingData@@UEAAJPEAX@Z
    virtual long SetDocumentSettings(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreviewPackageTarget@CD2DPrintingData@@UEAAJPEAX@Z
    virtual long SetPreviewPackageTarget(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreviewPaneSize@CD2DPrintingData@@UEAAJIUXSIZEF@@@Z
    virtual long SetPreviewPaneSize(unsigned int, XSIZEF);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DPrintingData@@MEAA@XZ
    virtual ~CD2DPrintingData();
};
