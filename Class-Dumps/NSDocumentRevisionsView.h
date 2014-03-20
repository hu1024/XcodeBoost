//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, NSArray, NSDocumentRevisionsButtonGroup, NSDocumentRevisionsController, NSDocumentRevisionsLabel, NSDocumentRevisionsPlaceholderView, NSDocumentRevisionsProgressIndicator, NSMapTable, NSMutableArray, NSMutableIndexSet, NSWindow;

__attribute__((visibility("hidden")))
@interface NSDocumentRevisionsView : NSView
{
    NSDocumentRevisionsController *_controller;
    NSMutableArray *_revisions;
    unsigned long long _currentRevisionIndex;
    unsigned long long _requestedRevisionIndex;
    long long _animating;
    struct CGRect *_revisionLayerBounds;
    NSMutableArray *_revisionLayers;
    NSMutableArray *_revisionUpdates;
    NSMutableIndexSet *_validRevisionSnapshotIndexes;
    NSMutableIndexSet *_versionLoadFailedRevisionIndexes;
    struct CGRect _originalFrame;
    struct CGRect _baseRevisionFrame;
    BOOL _fullTwoUpLayout;
    struct CGRect _focusedRevisionFrame;
    struct CGRect _focusedOriginalFrame;
    double _windowScaleFactor;
    BOOL _topLayerHidden;
    CALayer *_screenShotLayer;
    NSMapTable *_transitionAnimations;
    BOOL _transitoryLayersVisible;
    BOOL _isStartTransition;
    NSArray *_layerStackAnimations;
    NSDocumentRevisionsLabel *_originalDocumentLabel;
    NSDocumentRevisionsLabel *_revisionDocumentLabel;
    NSView *_buttonAndLabelContainer;
    NSDocumentRevisionsButtonGroup *_buttonGroup;
    NSDocumentRevisionsPlaceholderView *_placeholderView;
    NSDocumentRevisionsPlaceholderView *_versionLoadFailedPlaceholderView;
    NSWindow *_timelineWindow;
    BOOL _timelineHidden;
    NSDocumentRevisionsProgressIndicator *_progressIndicator;
    CDUnknownBlockType _goToAnimationContinuer;
}

+ (Class)_remoteViewClass;
@property(readonly) struct CGRect focusedRevisionFrame; // @synthesize focusedRevisionFrame=_focusedRevisionFrame;
@property(readonly) struct CGRect focusedOriginalFrame; // @synthesize focusedOriginalFrame=_focusedOriginalFrame;
@property(readonly) BOOL fullTwoUpLayout; // @synthesize fullTwoUpLayout=_fullTwoUpLayout;
@property(readonly) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(readonly) struct CGRect revisionFrame; // @synthesize revisionFrame=_baseRevisionFrame;
@property unsigned long long currentRevisionIndex; // @synthesize currentRevisionIndex=_currentRevisionIndex;
- (id)accessibilityChildrenAttribute;
- (void)updateControls;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)shouldUnfocusWindowWithMouseDownAtWindowPoint:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_controlsEnabled;
- (void)_updatePlaceholderView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_handleInsertionOfRevisions:(id)arg1 atIndexes:(id)arg2;
- (void)_handleRemovalOfRevisionsAtIndexes:(id)arg1;
- (void)_animationToIndexCompleted:(unsigned long long)arg1;
- (void)_goToRevisionWithIdentifier:(id)arg1;
- (void)goToRevisionAtIndex:(unsigned long long)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (void)_goToRevisionAtIndex:(unsigned long long)arg1 continuingPreviousAnimation:(BOOL)arg2 thenContinue:(CDUnknownBlockType)arg3;
- (double)_perStepAnimationDurationForDistance:(unsigned long long)arg1;
- (void)transitionAnimationCompleted;
- (void)performTransitionAnimation;
- (void)cancelRevertAnimation;
- (void)_resetTransitoryState;
- (void)prepareForFinishAnimationWithOutcome:(long long)arg1;
- (void)prepareForStartAnimation;
- (void)_prepareRevisionLayers;
- (void)_setupPlaceholderView;
- (void)setFullScreenShot:(id)arg1;
- (void)_setupFullScreenShot;
- (void)_commitTransitoryAnimations;
- (void)hideTransitoryLayers;
- (void)showTransitoryLayers;
- (void)_whenRevisionUpdatesAreAllowedDo:(CDUnknownBlockType)arg1;
- (void)_animationDidEnd;
- (void)_animationWillStart;
- (struct CGRect)_unfocusedFrameForOriginalDocumentWindow:(BOOL)arg1 state:(int)arg2;
- (void)layoutWithOriginalDocumentWindow:(id)arg1 originalVisibleFrame:(struct CGRect)arg2;
- (void)_animateControlsForWindowFocusState:(int)arg1;
- (void)_layoutUI;
- (void)_updateLabelsWithRevision:(id)arg1;
- (void)_createUI;
- (void)_takeDownTimelineWindow;
- (BOOL)_isTimelineHidden;
- (void)_setTimelineHidden:(BOOL)arg1;
- (void)_setTimelineSelectedItemWithVersionID:(id)arg1;
- (void)_updateTimeline;
- (void)_displayTimelineWindowForTransitionAnimation:(BOOL)arg1;
- (void)_createTimelineWindow;
- (void)_displayWindowForRevisionAtIndex:(unsigned long long)arg1;
- (void)_replaceLiveWindowWithLayer;
- (void)_replaceTopLayerWithWindow:(id)arg1;
- (void)_setLayerAtIndex:(unsigned long long)arg1 hidden:(BOOL)arg2;
- (void)requestAndSetImageForVersion:(id)arg1 wait:(BOOL)arg2;
- (void)_invalidateSnapshotForRevisionAtIndex:(unsigned long long)arg1;
- (void)setSnapshot:(id)arg1 forRevisionAtIndex:(unsigned long long)arg2;
- (id)_snapshotOfPlaceholderView:(id)arg1;
- (id)_versionLoadFailedPlaceholderView;
- (void)_createRevisionLayers;
- (void)_setImage:(id)arg1 forLayersAtIndexes:(id)arg2;
- (void)_animateLayerAtIndex:(unsigned long long)arg1 fromPosition:(long long)arg2 toPosition:(long long)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_commitAnimation:(id)arg1 toLayer:(id)arg2;
- (void)_computeRevisionLayerFrames;
- (void)_calculateLayerBoundsWithBaseBounds:(struct CGRect)arg1;
- (struct CGRect)_calculateLayerBoundsAtZ:(unsigned long long)arg1 withBaseBounds:(struct CGRect)arg2;
- (double)_stackOffsetAtZ:(unsigned long long)arg1;
- (id)_animationParametersFromIndex:(long long)arg1 toIndex:(long long)arg2 forLayerAtIndex:(unsigned long long)arg3;
- (id)_animationParametersAtIndex:(long long)arg1 forLayerAtIndex:(unsigned long long)arg2;
- (double)_alphaValueAtIndex:(long long)arg1;
- (struct CGRect)_layerBoundsAtPosition:(long long)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (unsigned int)_CAViewFlags;

@end

