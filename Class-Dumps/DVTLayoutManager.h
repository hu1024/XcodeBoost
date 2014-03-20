//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTFoldingLayoutManager.h>

#import "DVTAnnotationManagerDelegate.h"

@class DVTMapTable, DVTPointerArray, NSArray, NSMutableArray, NSMutableSet, NSSet;

@interface DVTLayoutManager : DVTFoldingLayoutManager <DVTAnnotationManagerDelegate>
{
    NSMutableArray *_annotations;
    DVTPointerArray *_lastDeletedAnnotations;
    DVTMapTable *_messageBubblesForAnnotations;
    NSMutableSet *_accessoryAnnotations;
    NSArray *_sortedAccessoryAnnotations;
    struct _DVTLayoutManagerFlags _lmFlags2;
}

+ (void)initialize;
@property(readonly) NSSet *accessoryAnnotations; // @synthesize accessoryAnnotations=_accessoryAnnotations;
@property(readonly) NSArray *annotations; // @synthesize annotations=_annotations;
- (void).cxx_destruct;
- (struct _NSRange)rangeForCharacterRange:(struct _NSRange)arg1 withContextLines:(long long)arg2 proposedHeight:(double *)arg3 contentLines:(unsigned long long *)arg4 totalLines:(unsigned long long *)arg5;
- (void)drawUnderlineForGlyphRange:(struct _NSRange)arg1 underlineType:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(struct CGRect)arg4 lineFragmentGlyphRange:(struct _NSRange)arg5 containerOrigin:(struct CGPoint)arg6;
- (void)drawBackgroundForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)fillBackgroundRectArray:(struct CGRect *)arg1 count:(unsigned long long)arg2 forCharacterRange:(struct _NSRange)arg3 color:(id)arg4;
- (void)textStorage:(id)arg1 didUpdateLineRange:(struct _NSRange)arg2 changeInLength:(long long)arg3 replacedCharacterRangeEndsOnLineTerminator:(BOOL)arg4 entireFirstLineReplaced:(BOOL)arg5;
- (void)textStorageDidEndEditing:(id)arg1;
- (void)textStorage:(id)arg1 willReplaceCharactersInRange:(struct _NSRange)arg2 withString:(id)arg3 changeInLength:(long long)arg4;
- (void)foldingManager:(id)arg1 didUnfoldRange:(struct _NSRange)arg2;
- (void)foldingManager:(id)arg1 didFoldRange:(struct _NSRange)arg2;
- (void)didRemoveAnnotations:(id)arg1;
- (void)didInsertAnnotations:(id)arg1;
- (void)hideMessageBubblesInRange:(struct _NSRange)arg1;
- (void)showMessageBubblesInRange:(struct _NSRange)arg1;
@property(getter=isAnnotationAdjustmentEnabled) BOOL annotationAdjustmentEnabled;
@property(nonatomic) BOOL severeBubbleAnnotationsMiniaturized;
- (id)messageBubbleViewForAnnotation:(id)arg1;
- (id)accessoryAnnotationsInRange:(struct _NSRange)arg1;
- (void)messageBubbleAnnotation:(id)arg1 needsBubble:(BOOL)arg2;
- (void)removeAnnotationsInRange:(struct _NSRange)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)_removeAnnotationsAtIndexes:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (id)annotationsInRange:(struct _NSRange)arg1;
- (void)_mergeBubbleViewsAtParagraphIndex:(unsigned long long)arg1;
- (id)_annotationIndexesInParagraphRange:(struct _NSRange)arg1 suggestedIndex:(unsigned long long *)arg2;
- (void)_removeBubbleViewFromAnnotation:(id)arg1;
- (void)_addBubbleViewToAnnotation:(id)arg1 annotationsInRange:(id)arg2;
- (void)_assertAnnotationIntegrity;
- (void)_updateMessageBubbleVisibilityForAnnotation:(id)arg1;
- (void)invalidateDisplayForCharacterRange:(struct _NSRange)arg1;
- (void)_invalidateLayoutForMessageBubblesInCharacterRange:(struct _NSRange)arg1;
- (unsigned long long)layoutOptions;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_layoutManagerCommonInit;

@end

