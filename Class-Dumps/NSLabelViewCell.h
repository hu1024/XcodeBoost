//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@interface NSLabelViewCell : NSActionCell
{
    long long _selectedParts;
    long long _hoveredPart;
    unsigned long long _imagePosition;
    BOOL _allowsMultipleSelection;
    long long _focusedPart;
}

@property BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property unsigned long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property long long hoveredPart; // @synthesize hoveredPart=_hoveredPart;
@property long long focusedPart; // @dynamic focusedPart;
- (void)performClick:(id)arg1;
@property(readonly) long long numParts; // @dynamic numParts;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)mouseExited:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)mouseEntered:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)_handleMouseMovedForEvent:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_currentLabelName;
- (id)_nameForLabelPart:(long long)arg1;
- (long long)_partAtPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2;
- (void)_drawPart:(long long)arg1 withFrame:(struct CGRect)arg2;
- (void)_drawBackgroundForPartRect:(struct CGRect)arg1 isPressedOrHovered:(BOOL)arg2;
- (struct CGRect)_boundsForLabel:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)_labelAttributes;
- (struct CGRect)part:(long long)arg1 boundsWithFrame:(struct CGRect)arg2;
- (BOOL)_isHoveredPart:(long long)arg1;
@property long long diskLabelValues; // @dynamic diskLabelValues;
- (void)_valueChanged:(id)arg1;
- (void)_deselectPart:(long long)arg1;
- (void)_selectPart:(long long)arg1;
- (BOOL)_isSelectedPart:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_commonInit;
- (void)accessibilityPerformAction:(id)arg1 forChild:(id)arg2;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (struct CGRect)_rectForPart:(long long)arg1;
- (void)accessibilitySetFocus:(id)arg1 forChild:(id)arg2;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityDescriptionOfChild:(id)arg1;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsVisibleChildrenAttributeSettable;
- (id)accessibilityVisibleChildrenAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end

