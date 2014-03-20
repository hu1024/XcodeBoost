//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSPredicateOperator.h>

@interface NSEqualityPredicateOperator : NSPredicateOperator
{
    BOOL _negate;
    unsigned long long _options;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)_setOptions:(unsigned long long)arg1;
- (unsigned long long)options;
- (void)setNegation:(BOOL)arg1;
- (BOOL)isNegation;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(BOOL)arg3 options:(unsigned long long)arg4;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(BOOL)arg3;

@end

