//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSScriptCoercionHandler.h>

@interface NSScriptCoercionHandler (NSAppKitCoercions)
+ (id)coerceTextStorage:(id)arg1 toData:(Class)arg2;
+ (id)coerceData:(id)arg1 toTextStorage:(Class)arg2;
+ (id)coerceTextStorage:(id)arg1 toString:(Class)arg2;
+ (id)coerceString:(id)arg1 toTextStorage:(Class)arg2;
+ (id)coerceColor:(id)arg1 toData:(Class)arg2;
+ (id)coerceData:(id)arg1 toColor:(Class)arg2;
+ (id)coerceColor:(id)arg1 toArray:(Class)arg2;
+ (id)coerceArray:(id)arg1 toColor:(Class)arg2;
+ (id)coerceColor:(id)arg1 toString:(Class)arg2;
+ (id)coerceString:(id)arg1 toColor:(Class)arg2;
- (void)_setUpAppKitCoercions;
@end

