//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)_setAttributedDictionaryClass:(Class)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateAttributesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToAttributedString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)length;
- (id)attributedStringByWeaklyAddingAttributes:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1 replacingCharactersInRanges:(const struct _NSRange *)arg2 numberOfRanges:(long long)arg3 withString:(id)arg4;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (BOOL)scriptingContains:(id)arg1;
- (BOOL)scriptingEndsWith:(id)arg1;
- (BOOL)scriptingBeginsWith:(id)arg1;
- (BOOL)scriptingIsGreaterThan:(id)arg1;
- (BOOL)scriptingIsGreaterThanOrEqualTo:(id)arg1;
- (BOOL)scriptingIsLessThan:(id)arg1;
- (BOOL)scriptingIsLessThanOrEqualTo:(id)arg1;
- (BOOL)scriptingIsEqualTo:(id)arg1;
- (BOOL)_attributesAreEqualToAttributesInAttributedString:(id)arg1;
- (id)_createAttributedSubstringWithRange:(struct _NSRange)arg1;
- (unsigned long long)_cfTypeID;
- (id)replacementObjectForPortCoder:(id)arg1;

@end

