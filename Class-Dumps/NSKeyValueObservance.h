//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSWeakCallback.h>

@class NSKeyValueProperty, NSObject, NSPointerArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservance : NSWeakCallback
{
    int _retainCountMinusOne;
    NSObject *_observer;
    NSKeyValueProperty *_property;
    unsigned long long _options;
    void *_context;
    NSObject *_originalObservable;
    unsigned long long _cachedUnrotatedHashComponent;
    BOOL _cachedIsShareable;
    NSPointerArray *_observationInfos;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4 originalObservable:(id)arg5;

@end

