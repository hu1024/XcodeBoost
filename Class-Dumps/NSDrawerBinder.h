//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewStateBinder.h>

@interface NSDrawerBinder : NSViewStateBinder
{
    struct __drawerBinderFlags {
        unsigned int _visibleStateHasBeenSet:1;
        unsigned int _expectedVisibleState:1;
        unsigned int _reservedDrawerBinder:30;
    } _drawerBinderFlags;
}

+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)bindingsForObject:(id)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;
- (void)drawer:(id)arg1 didChangeToState:(BOOL)arg2;
- (void)_updateObject:(id)arg1 observedController:(id)arg2 observedKeyPath:(id)arg3 context:(void *)arg4;
- (void)_updateDrawer:(id)arg1 withVisibilityState:(id)arg2;
- (BOOL)shouldProcessObservations;
- (void)_connectionWasEstablished;
- (BOOL)_isBooleanBinding:(id)arg1;
- (Class)valueClassForBinding:(id)arg1;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_init;

@end

