//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ABActionAutovalidatorCacheEntry : NSObject
{
    BOOL _validation;
    unsigned long long _hitCount;
}

@property(readonly, nonatomic) unsigned long long hitCount; // @synthesize hitCount=_hitCount;
- (id)description;
- (BOOL)validateMenuItem:(id)arg1 withTarget:(id)arg2;
- (id)init;
- (id)initWithValidation:(BOOL)arg1;

@end

