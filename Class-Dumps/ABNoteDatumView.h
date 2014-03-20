//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABDatumView.h>

#import "ABNoteTextViewDelegate.h"
#import "NSTextViewDelegate.h"

__attribute__((visibility("hidden")))
@interface ABNoteDatumView : ABDatumView <NSTextViewDelegate, ABNoteTextViewDelegate>
{
    double _lastTextHeight;
}

+ (CDUnknownBlockType)rangeComparator;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textViewDidResignFirstResponder:(id)arg1;
- (void)textViewDidBecomeFirstResponder:(id)arg1;
- (BOOL)isValidRange:(struct _NSRange)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (unsigned long long)maxInsertionPoint;
- (void)setNoteInsertionPoint:(unsigned long long)arg1;
- (unsigned long long)noteInsertionPoint;
- (BOOL)shouldAllowValueRemoval;
- (BOOL)shouldAllowValueAddition;
- (BOOL)commitEditing;
- (void)updateMultiValueControls;
- (void)queueFullLayoutIfHeightChanged;
- (void)valueViewFrameDidChange:(id)arg1;
- (double)heightForTextContentWithWidth:(double)arg1;
- (void)highlightSearchTerms:(id)arg1;
- (void)ab_layout;
- (BOOL)isFlipped;
- (void)drawDividerLine;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end

