//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSAccessibilityProxy.h>

#import "NSTableViewCellElement.h"

@class NSTableColumn;

@interface NSTableViewCellProxy : NSAccessibilityProxy <NSTableViewCellElement>
{
    NSTableColumn *_tableColumn;
    long long _row;
    Class _alternateParentClass;
    id _realElement;
}

+ (id)cellForRow:(long long)arg1 tableColumn:(id)arg2;
+ (id)cellForRow:(long long)arg1 column:(long long)arg2 tableView:(id)arg3;
- (id)description;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityCurrentEditor;
- (struct CGPoint)accessibilityWindowPointForShowMenu;
- (void)_accessibilityShowMenu:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (void)_accessibilityPerformAction:(id)arg1;
- (void)_accessibilityPerformAction:(id)arg1 withValue:(id)arg2;
- (void)_accessibilityPopUpButtonCellPressAction:(id)arg1;
- (id)accessibilityBoundsForRangeAttributeForParameter:(id)arg1;
- (id)accessibilitySizeAttribute;
- (id)accessibilityPositionAttribute;
- (void)accessibilitySetFocusedAttribute:(id)arg1;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (void)accessibilitySetValueAttribute:(id)arg1;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)_sendDataSourceSetObjectValue:(id)arg1;
- (id)accessibilityParentAttribute;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)realElement;
- (id)cellForProxy;
- (id)editor;
- (BOOL)isBeingEdited;
- (void)setAlternateParentClass:(Class)arg1;
- (Class)alternateParentClass;
- (long long)accessibilityColumnIndex;
- (id)tableView;
- (long long)column;
- (long long)row;
- (void)dealloc;
- (id)initWithRow:(long long)arg1 column:(long long)arg2 tableView:(id)arg3;
- (id)initWithRow:(long long)arg1 tableColumn:(id)arg2;

@end

