#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CTimelineMarker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTimelineMarker@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInternal@CTimelineMarker@@SAJPEAPEAV1@PEAVCCoreServices@@NAEBVxstring_ptr@@2@Z
    static long CreateInternal(CTimelineMarker * *, CCoreServices *, double, xstring_ptr const &, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInternal@CTimelineMarker@@SAJPEAPEAV1@PEAVCCoreServices@@PEAV1@@Z
    static long CreateInternal(CTimelineMarker * *, CCoreServices *, CTimelineMarker *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTimelineMarker@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CTimelineMarker@@UEAAJXZ
    virtual long InitInstance();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTimelineMarker@@MEAA@XZ
    virtual ~CTimelineMarker();
};
