//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSPrintOperation.h>

@class NSGraphicsContext, NSMutableData, NSPDFPanel, NSPrintInfo, NSPrintOperationPrintEventRetrofitInfo, NSPrintPanel, NSProgressPanel, NSString, NSView;

@interface NSConcretePrintOperation : NSPrintOperation
{
    NSGraphicsContext *_graphicsContext;
    long long _pageOrder;
    NSPrintPanel *_printPanel;
    id _accessoryView;
    id _thumbnailView;
    void *jobVars;
    NSView *_view;
    NSPrintInfo *_printInfo;
    struct CGRect _copyingBounds;
    BOOL _copyingToEPSNotPDF;
    NSMutableData *_copyingData;
    NSString *_copyingPath;
    NSString *_jobStyleHint;
    NSString *_jobTitle;
    NSProgressPanel *_progressPanel;
    _NSModalSession_b59c99c5 *_progressPanelAppModalSession;
    NSPDFPanel *_pdfPanel;
    struct {
        id _field1;
        id _field2;
        SEL _field3;
        void *_field4;
    } *_modalContextInfo;
    NSPrintOperationPrintEventRetrofitInfo *_printEventRetrofitInfo;
    long long _firstPageNumber;
    long long _lastPageNumber;
    double _pageScaling;
    long long _firstJobPageNumber;
    long long _lastJobPageNumber;
    long long _firstRenderPageNumber;
    long long _lastRenderPageNumber;
    long long _currentPageNumber;
    struct CGRect _currentPageBounds;
    long long _renderQuality;
    BOOL canSpawnSeparateThread;
    BOOL _showsPrintPanel;
    BOOL _showsProgressPanel;
    BOOL _isCopying;
    BOOL _didRunToCompletion;
    BOOL _paginationIsValid;
    BOOL _viewKnowsPages;
    BOOL _jobPageNumbersAreValid;
    BOOL _isLockingFocus;
    BOOL _isRenderingBorder;
    BOOL _wasCancelledByUser;
    BOOL _didAddSaveURL;
    BOOL _isResponsibleForFileCoordination;
}

- (void)cleanUpOperation;
- (BOOL)deliverResult;
- (void)destroyContext;
- (id)createContext;
- (long long)currentPage;
- (struct _NSRange)pageRange;
- (id)context;
- (void)setPrintInfo:(id)arg1;
- (id)printInfo;
- (id)view;
- (void)_progressPanel:(id)arg1 didEndAndReturn:(long long)arg2 contextInfo:(void *)arg3;
- (void)_progressPanelWasCancelled:(id)arg1 contextInfo:(void *)arg2;
- (BOOL)runOperation;
- (void)_printPanel:(id)arg1 didEndAndReturn:(long long)arg2 contextInfo:(void *)arg3;
- (void)runOperationModalForWindow:(id)arg1 delegate:(id)arg2 didRunSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)_continueModalOperationPastPrintPanel;
- (void)_continueModalOperationToTheEnd:(id)arg1;
- (void)_finishModalOperation;
- (void)_messageTraceExportAsPDFIfNecessary;
- (BOOL)_renderView;
- (void)_setPageOrderFromPrintInfo;
- (void)_createAndShowProgressPanelIfAppropriate:(BOOL)arg1;
- (void)_beginPDFPanelModalForWindow:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (id)_preparedPrintPanel;
- (long long)pageOrder;
- (void)setPageOrder:(long long)arg1;
- (BOOL)canSpawnSeparateThread;
- (void)setCanSpawnSeparateThread:(BOOL)arg1;
- (id)PDFPanel;
- (void)setPDFPanel:(id)arg1;
- (id)printPanel;
- (BOOL)_showsPreviewByDefault;
- (void)setPrintPanel:(id)arg1;
- (BOOL)showsProgressPanel;
- (void)setShowsProgressPanel:(BOOL)arg1;
- (BOOL)showsPrintPanel;
- (void)setShowsPrintPanel:(BOOL)arg1;
- (id)jobTitle;
- (void)setJobTitle:(id)arg1;
- (long long)preferredRenderingQuality;
- (void)_setPreferredRenderingQuality:(long long)arg1;
- (BOOL)isCopyingOperation;
- (void)finalize;
- (void)dealloc;
- (id)_initWithView:(id)arg1 printInfo:(id)arg2 epsNotPDF:(BOOL)arg3 bounds:(struct CGRect)arg4 data:(id)arg5 orPath:(id)arg6;
- (id)_initWithView:(id)arg1 printInfo:(id)arg2;
- (void)_setShowProgressPanel:(BOOL)arg1;
- (void)_setShowPrintPanel:(BOOL)arg1;
- (id)_thumbnailView;
- (void)_setThumbnailView:(id)arg1;
- (BOOL)_isResponsibleForFileCoordination;
- (BOOL)isEPSOperation;
- (id)baseAffineTransform;
- (void)setBaseAffineTransform:(id)arg1;
- (struct CGRect)_renderingBounds;
- (BOOL)_isRenderingBorder;
- (BOOL)_isLockingFocus;
- (void)_setLockingFocus:(BOOL)arg1;
- (struct _PrivatePrintOperationInfo *)_operationInfo;
- (BOOL)_isCancelledAfterHandlingUserEvents;
- (void)_setRenderingBorder:(BOOL)arg1;
- (double)_pageScaling;
- (struct CGRect)_currentPageBounds;
- (id)_effectiveJobTitle;
- (long long)_lastRenderPageNumber;
- (long long)_firstRenderPageNumber;
- (long long)_lastJobPageNumber;
- (long long)_firstJobPageNumber;
- (void)_validateJobPageNumbers;
- (long long)_nUpPages;
- (long long)_pageSet;
- (BOOL)_tryToSetCurrentPageNumber:(long long)arg1;
- (long long)_viewKnowsPages;
- (long long)_lastPageNumber;
- (long long)_firstPageNumber;
- (void)_invalidatePagination;
- (void)_forceKnowsPageRangeMessage;
- (void)_validatePagination;
- (BOOL)showPanels;
- (void)setShowPanels:(BOOL)arg1;
- (id)jobStyleHint;
- (void)setJobStyleHint:(id)arg1;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1;

@end

