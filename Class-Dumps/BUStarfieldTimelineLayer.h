//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface BUStarfieldTimelineLayer : CALayer
{
    void *_reserved[3];
}

- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
@property(nonatomic) id <BUStarfieldTimelineDelegate> timelineDelegate;
@property(nonatomic) id <BUStarfieldTimelineDataSource> timelineDataSource;
- (void)reloadData;
- (void)handleReloadData;
- (void)scrollWheel:(id)arg1 atLocation:(struct CGPoint)arg2 byDelta:(struct CGSize)arg3;
- (BOOL)mouseDragged:(id)arg1 toLocation:(struct CGPoint)arg2;
- (void)mouseMoved:(id)arg1 toLocation:(struct CGPoint)arg2;
- (BOOL)mouseUp:(id)arg1 atLocation:(struct CGPoint)arg2;
- (BOOL)mouseDown:(id)arg1 atLocation:(struct CGPoint)arg2;
- (void)notifyItemWasSelected:(id)arg1;
@property(retain, nonatomic) id <BUStarfieldTimelineItem> selectedItem;
- (struct TTimelineControl *)timelineControl;
- (void)finalize;
- (void)dealloc;
- (void)aboutToTearDown;
- (id)init;
- (void)tearDownPrivateData;
- (struct BUTimelinePrivate *)privateData;

@end

