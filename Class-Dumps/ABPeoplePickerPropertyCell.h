//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface ABPeoplePickerPropertyCell : NSTextFieldCell
{
    NSIndexSet *_selectedSubrowIndexes;
}

+ (void)ABPeoplePickerPropertyCell_initializeImages;
@property(copy, nonatomic) NSIndexSet *selectedSubrowIndexes; // @synthesize selectedSubrowIndexes=_selectedSubrowIndexes;
- (id)tooltipText;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawSelection:(struct CGRect)arg1 selected:(BOOL)arg2 inView:(id)arg3 withRoundedLeftEdges:(int)arg4;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (double)heightOfSubrowWithCountOfRows:(long long)arg1 inTableView:(id)arg2;
- (void)drawHighlightWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawHighlightWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

