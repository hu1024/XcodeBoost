//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding.h"

@class NSString;

@interface CAValueFunction : NSObject <NSCoding>
{
    NSString *_string;
    void *_impl;
}

+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (void)CAMLParserStartElement:(id)arg1;
+ (id)functionWithName:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (BOOL)apply:(const double *)arg1 result:(double *)arg2 parameterFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (BOOL)apply:(const double *)arg1 result:(double *)arg2;
- (unsigned long long)outputCount;
- (unsigned long long)inputCount;
@property(readonly) NSString *name;
- (void)finalize;
- (void)dealloc;
- (id)_initWithName:(int)arg1;

@end

