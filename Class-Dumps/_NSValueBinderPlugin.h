//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSBinderPlugin.h>

#import "_NSValueBinderPlugin.h"

@class NSIndexPath;

@interface _NSValueBinderPlugin : _NSBinderPlugin <_NSValueBinderPlugin>
{
    struct __valueBinderPluginFlags {
        unsigned int _isActionCellPlugin:1;
        unsigned int _isFormatterPlugin:1;
        unsigned int _isObjectValueInvalidationCapable:1;
        unsigned int _reservedValueBinderPlugin:29;
    } _valueBinderPluginFlags;
    unsigned long long _affectedIndex;
    NSIndexPath *_affectedIndexPath;
    Class _valueClass;
}

+ (BOOL)isUsableWithObject:(id)arg1;
- (BOOL)applyObjectValue:(id *)arg1 forBinding:(id)arg2 operation:(int *)arg3 needToRunAlert:(char *)arg4 error:(id *)arg5;
- (BOOL)shouldAlwaysUpdateDisplayValue;
- (BOOL)shouldProvideSortDescriptor:(id)arg1 optionsAdvertisingOnly:(BOOL)arg2;
- (BOOL)isObjectTableColumnDataCell:(id)arg1;
- (id)formatterOfObject:(id)arg1;
- (id)formattedValueInObject:(id)arg1 errorEncountered:(char *)arg2 error:(id *)arg3;
- (id)shownValueInObject:(id)arg1;
- (void)showValue:(id)arg1 inObject:(id)arg2;
- (BOOL)shouldIgnoreAction:(id)arg1;
- (id)editingBinderForControl:(id)arg1;
- (void)actionHasEnded:(id)arg1 sender:(id)arg2;
- (void)actionHasBegun:(id)arg1 sender:(id)arg2;
- (void)_actionHasBegun:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_actionHasBegun:(id)arg1 atIndexPath:(id)arg2;
- (void)editingWasAborted:(id)arg1;
- (void)editingHasEnded:(id)arg1;
- (void)editingHasBegun:(id)arg1;
- (id)binderReferenceObjectValue;
- (struct __NSKeyValueCodingControllerModeType)editedMode:(id)arg1 forEditingOrAction:(BOOL)arg2;
- (void)connectionWasBroken:(id)arg1;
- (void)connectionWasEstablished:(id)arg1;
- (id)objectMechanismsRequired;
- (BOOL)needsAction;
- (BOOL)needsDelegate;
- (BOOL)prefersEnabledOverEditable:(id)arg1;
- (BOOL)conditionalBehaviorOffByDefault:(id)arg1;
- (Class)valueClass:(id)arg1 forBinding:(id)arg2;
- (Class)valueClass:(id)arg1;
- (Class)_valueClass:(id)arg1;
- (BOOL)isBooleanValueBindingForObject:(id)arg1;
- (BOOL)updateCellOrControl:(id)arg1 forMaxValue:(id)arg2;
- (BOOL)updateCellOrControl:(id)arg1 forMinValue:(id)arg2;
- (void)storeMin:(BOOL)arg1 andMax:(BOOL)arg2 ofObject:(id)arg3;
- (BOOL)canSupportMinAndMaxForObject:(id)arg1;
- (BOOL)canIgnoreSettingMinAndMaxForObject:(id)arg1;
- (unsigned long long)allowedValueBindingMask;
- (id)viewForObject:(id)arg1;
- (void)invalidateObjectValueInObject:(id)arg1;
- (id)objectValueInvalidationCapableObjectForObject:(id)arg1;
- (void)dealloc;
- (id)initWithBinder:(id)arg1 object:(id)arg2;

@end

