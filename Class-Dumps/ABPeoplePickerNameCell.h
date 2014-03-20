//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

__attribute__((visibility("hidden")))
@interface ABPeoplePickerNameCell : NSTextFieldCell
{
    int _roundedEdges;
    unsigned long long _iconType;
    BOOL _disableHighlight;
}

+ (unsigned long long)defaultFocusRingType;
+ (void)initialize;
@property(nonatomic) unsigned long long iconType; // @synthesize iconType=_iconType;
@property(nonatomic) int roundedEdges; // @synthesize roundedEdges=_roundedEdges;
@property(nonatomic) BOOL disableHighlight; // @synthesize disableHighlight=_disableHighlight;
- (id)cellFont;
- (id)cellLabel;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (unsigned long long)focusRingType;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawHighlightWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawHighlightWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)attributedStringValue;
- (id)stringValue;
- (id)accessibilityValueAttribute;

@end

