//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface DDTypeInhabitant : NSObject
{
    unsigned long long _hash;
    NSArray *_names;
}

+ (id)emptyInhabitant;
+ (id)inhabitantWithName:(id)arg1;
- (id)description;
- (id)typeInhabitantByJoining:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithNames:(id)arg1;
- (id)init;

@end

