//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFWeakReference : NSObject
{
    id _object;
    unsigned long long _objectAddress;
}

+ (id)weakReferenceWithObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) id object;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

