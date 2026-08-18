#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 101 member(s).
class CImageSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCallback@CImageSource@@QEAAJPEAVCBitmapImageReportCallback@@@Z
    long AddCallback(CBitmapImageReportCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CImageSource@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForLostHardwareResources@CImageSource@@UEAA_NXZ
    virtual bool CheckForLostHardwareResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CImageSource@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementForCachedTemplateExpansion@CImageSource@@UEAAXPEAPEAVCDependencyObject@@@Z
    virtual void CloneElementForCachedTemplateExpansion(CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CImageSource@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CImageSource@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreationComplete@CImageSource@@UEAAJXZ
    virtual long CreationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAndUpdateHardwareResources@CImageSource@@UEAAJPEAVHWTextureManager@@PEAVCWindowRenderTarget@@PEAVSurfaceCache@@@Z
    virtual long EnsureAndUpdateHardwareResources(HWTextureManager *, CWindowRenderTarget *, SurfaceCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheIdentifier@CImageSource@@QEAAJAEBVImageDecodeParams@@PEAVxstring_ptr@@@Z
    long GetCacheIdentifier(ImageDecodeParams const &, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheIdentifier@CImageSource@@QEAAJKKW4PixelFormat@@PEAVxstring_ptr@@@Z
    long GetCacheIdentifier(unsigned long, unsigned long, int, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CImageSource@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDescription(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@CImageSource@@UEBAIXZ
    virtual unsigned int GetHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID2D1SvgDocument@CImageSource@@UEAAJPEAUID2D1DeviceContext5@@AEAV?$ComPtr@UID2D1SvgDocument@@@WRL@Microsoft@@PEAI2@Z
    virtual long GetID2D1SvgDocument(ID2D1DeviceContext5*, WindissectOpaque &, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutHeight@CImageSource@@UEAAIXZ
    virtual unsigned int GetLayoutHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutWidth@CImageSource@@UEAAIXZ
    virtual unsigned int GetLayoutWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelHeight@CImageSource@@UEBAHXZ
    virtual int GetPixelHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelWidth@CImageSource@@UEBAHXZ
    virtual int GetPixelWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareSurfaceForPrinting@CImageSource@@UEAAJAEAV?$xref_ptr@UIPALSurface@@@@@Z
    virtual long GetSoftwareSurfaceForPrinting(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CImageSource@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetTitle(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CImageSource@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CImageSource@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@CImageSource@@UEBAIXZ
    virtual unsigned int GetWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDimensions@CImageSource@@UEAAIXZ
    virtual unsigned int HasDimensions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRetainedSize@CImageSource@@UEAA_NXZ
    virtual bool HasRetainedSize();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsFiringEvents@CImageSource@@UEAAHXZ
    virtual int IsFiringEvents();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CImageSource@@UEAAIXZ
    virtual unsigned int IsOpaque();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSourceSetAndEqualTo@CImageSource@@QEAA_NPEAV1@@Z
    bool IsSourceSetAndEqualTo(CImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStreamImageAvailable@CImageSource@@QEAAJPEAUIImageAvailableResponse@@@Z
    long OnStreamImageAvailable(IImageAvailableResponse *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CImageSource@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelHeight@CImageSource@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long PixelHeight(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelWidth@CImageSource@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long PixelWidth(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueRequestDecode@CImageSource@@UEAAJII_N@Z
    virtual long QueueRequestDecode(unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalkCore@CImageSource@@UEAA_NW4EReferenceTrackerWalkType@DirectUI@@_N1@Z
    virtual bool ReferenceTrackerWalkCore(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadImage@CImageSource@@UEAAJ_N0@Z
    virtual long ReloadImage(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadOnResourceInvalidation@CImageSource@@QEAAJW4ResourceInvalidationReason@@@Z
    long ReloadOnResourceInvalidation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadReleasedSoftwareImage@CImageSource@@UEAAJXZ
    virtual long ReloadReleasedSoftwareImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCallback@CImageSource@@QEAAXPEAVCBitmapImageReportCallback@@@Z
    void RemoveCallback(CBitmapImageReportCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDimensionsNotify@CImageSource@@QEAAXPEAUIPALImageDimensionsNotify@@@Z
    void RemoveDimensionsNotify(IPALImageDimensionsNotify *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CImageSource@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestDecode@CImageSource@@UEAAJII_N@Z
    virtual long RequestDecode(unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeAnimation@CImageSource@@QEAAJXZ
    long ResumeAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@CImageSource@@QEAAJIPEAEPEAVICoreAsyncAction@@@Z
    long SetSource(unsigned int, unsigned char *, ICoreAsyncAction *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CImageSource@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRequestDecode@CImageSource@@UEAAIXZ
    virtual unsigned int ShouldRequestDecode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceImageRequestDecodeEtw@CImageSource@@SAXPEAV1@II@Z
    static void TraceImageRequestDecodeEtw(CImageSource *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceImageSourceRelationEtw@CImageSource@@SAJPEAVCDependencyObject@@@Z
    static long TraceImageSourceRelationEtw(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUseCachedHardwareResources@CImageSource@@QEAAJAEBVImageDecodeParams@@PEAVSurfaceCache@@PEAI@Z
    long TryUseCachedHardwareResources(ImageDecodeParams const &, SurfaceCache *, unsigned int *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImageSource@@IEAA@PEAVCCoreServices@@@Z
    CImageSource(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteAsyncAction@CImageSource@@IEAAXJ@Z
    void CompleteAsyncAction(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeStream@CImageSource@@IEAAJAEBV?$xref_ptr@UIImageAvailableCallback@@@@_N1@Z
    long DecodeStream(WindissectOpaque const &, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeStreamWithSize@CImageSource@@IEAAJAEBV?$xref_ptr@UIImageAvailableCallback@@@@IIII_N1@Z
    long DecodeStreamWithSize(WindissectOpaque const &, unsigned int, unsigned int, unsigned int, unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectImageOperation@CImageSource@@IEAAXXZ
    void DisconnectImageOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CImageSource@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireDimensionsNotify@CImageSource@@IEAAJII@Z
    long FireDimensionsNotify(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageFailed@CImageSource@@IEAAJI@Z
    long FireImageFailed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageOpened@CImageSource@@IEAAJXZ
    long FireImageOpened();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireInternalDownloadEvent@CImageSource@@IEAAJXZ
    long FireInternalDownloadEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirePublicDownloadEvent@CImageSource@@IEAAJXZ
    long FirePublicDownloadEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoPlay@CImageSource@@MEAAJAEA_N@Z
    virtual long GetAutoPlay(bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecodeHeight@CImageSource@@MEAAIXZ
    virtual unsigned int GetDecodeHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecodeType@CImageSource@@MEBA?AW4DecodePixelType@DirectUI@@XZ
    virtual int GetDecodeType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecodeWidth@CImageSource@@MEAAIXZ
    virtual unsigned int GetDecodeWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMetadataAvailable@CImageSource@@IEBA_NXZ
    bool IsMetadataAvailable() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CImageSource@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkHandledCallbackEvents@CImageSource@@MEAAJXZ
    virtual long MarkHandledCallbackEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDownloadImageAvailable@CImageSource@@IEAAJPEAUIImageAvailableResponse@@@Z
    long OnDownloadImageAvailable(IImageAvailableResponse *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDownloadImageAvailableImpl@CImageSource@@MEAAJPEAUIImageAvailableResponse@@@Z
    virtual long OnDownloadImageAvailableImpl(IImageAvailableResponse *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageAvailableCommon@CImageSource@@IEAAJPEAUIImageAvailableResponse@@@Z
    long OnImageAvailableCommon(IImageAvailableResponse *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareDecode@CImageSource@@MEAAJ_N@Z
    virtual long PrepareDecode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareDecodeParams@CImageSource@@IEAAJIIW4PixelFormat@@_N1AEAV?$xref_ptr@VImageDecodeParams@@@@@Z
    long PrepareDecodeParams(unsigned int, unsigned int, int, bool, bool, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedecodeEncodedImage@CImageSource@@IEAAJI@Z
    long RedecodeEncodedImage(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForCleanupOnLeave@CImageSource@@MEAAXXZ
    virtual void RegisterForCleanupOnLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMeasure@CImageSource@@IEAAJXZ
    long RequestMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCallbackEvents@CImageSource@@MEAAJXZ
    virtual long ResetCallbackEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetForSourceChange@CImageSource@@MEAAJ_N00@Z
    virtual long ResetForSourceChange(bool, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirty@CImageSource@@IEAAJXZ
    long SetDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageCache@CImageSource@@IEAAJV?$xref_ptr@VImageCache@@@@@Z
    long SetImageCache(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupImageSource@CImageSource@@IEAAJ_NPEAVCREATEPARAMETERS@@@Z
    long SetupImageSource(bool, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldContinueAsyncAction@CImageSource@@IEAA_NXZ
    bool ShouldContinueAsyncAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDecodeToRenderSize@CImageSource@@MEAAIXZ
    virtual unsigned int ShouldDecodeToRenderSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldKeepSoftwareSurfaces@CImageSource@@MEAA_NXZ
    virtual bool ShouldKeepSoftwareSurfaces();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerReloadImage@CImageSource@@IEAAJ_N00@Z
    long TriggerReloadImage(bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForCleanupOnEnter@CImageSource@@MEAAXXZ
    virtual void UnregisterForCleanupOnEnter();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageSource@@MEAA@XZ
    virtual ~CImageSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCachedHardwareResources@CImageSource@@AEAAJKKW4PixelFormat@@PEA_N@Z
    long CheckCachedHardwareResources(unsigned long, unsigned long, int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeToRenderSize@CImageSource@@AEAAJII_N@Z
    long DecodeToRenderSize(unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAbsoluteUri@CImageSource@@AEAAJXZ
    long EnsureAbsoluteUri();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEstimatedSurfaceCommitSize@CImageSource@@AEBA_KXZ
    uint64_t GetEstimatedSurfaceCommitSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLogicalDecodeSize@CImageSource@@AEBAIXZ
    unsigned int HasLogicalDecodeSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimatedBitmap@CImageSource@@AEAA_NXZ
    bool IsAnimatedBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHdrChanged@CImageSource@@AEAAJXZ
    long OnHdrChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageViewUpdated@CImageSource@@EEAAJAEAVImageViewBase@@@Z
    virtual long OnImageViewUpdated(ImageViewBase &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUriSourceChanged@CImageSource@@AEAAJ_N@Z
    long OnUriSourceChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithReloadManager@CImageSource@@AEAAJXZ
    long RegisterWithReloadManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldReloadOnResourceInvalidation@CImageSource@@AEAAJW4ResourceInvalidationReason@@PEA_N@Z
    long ShouldReloadOnResourceInvalidation(int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWithReloadManager@CImageSource@@AEAAJXZ
    long UnregisterWithReloadManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDecodeSize@CImageSource@@AEAAJXZ
    long UpdateDecodeSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHardwareCacheIfAvailable@CImageSource@@AEAAJXZ
    long UpdateHardwareCacheIfAvailable();
};
