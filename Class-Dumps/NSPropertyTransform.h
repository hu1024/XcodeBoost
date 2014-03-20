//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExpression, NSString;

__attribute__((visibility("hidden")))
@interface NSPropertyTransform : NSObject
{
    NSExpression *_valueExpression;
    NSString *_propertyName;
    NSPropertyTransform *_prerequisiteTransform;
    BOOL _replaceMissingValueOnly;
}

@property BOOL replaceMissingValueOnly; // @synthesize replaceMissingValueOnly=_replaceMissingValueOnly;
@property(retain, nonatomic) NSPropertyTransform *prerequisiteTransform; // @synthesize prerequisiteTransform=_prerequisiteTransform;
@property(retain, nonatomic) NSExpression *valueExpression; // @synthesize valueExpression=_valueExpression;
@property(retain, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPropertyName:(id)arg1 valueExpression:(id)arg2;

@end

