//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying.h"

@interface _NSClassAndClassInfo : NSObject <NSCopying>
{
    Class _registryClass;
    Class _objectClass;
    unsigned long long _registryClassHash;
    unsigned long long _objectClassHash;
    unsigned long long _hash;
}

- (void)setObjectClass:(Class)arg1;
- (void)setRegistryClass:(Class)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRegistryClass:(Class)arg1 andObjectClass:(Class)arg2;

@end

