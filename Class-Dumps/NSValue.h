//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface NSValue : NSObject <NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithRange:(struct _NSRange)arg1;
+ (id)valueWithRect:(struct CGRect)arg1;
+ (id)valueWithSize:(struct CGSize)arg1;
+ (id)valueWithPoint:(struct CGPoint)arg1;
+ (id)valueWithPointer:(const void *)arg1;
+ (id)valueWithNonretainedObject:(id)arg1;
+ (id)valueWithBytes:(const void *)arg1 objCType:(const char *)arg2;
+ (id)value:(const void *)arg1 withObjCType:(const char *)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (struct _NSRange)rangeValue;
- (struct CGRect)rectValue;
- (struct CGSize)sizeValue;
- (struct CGPoint)pointValue;
- (void *)pointerValue;
- (id)nonretainedObjectValue;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const char *)objCType;
- (void)getValue:(void *)arg1;
- (id)init;
- (BOOL)isNSValue__;
- (id)replacementObjectForPortCoder:(id)arg1;

@end

