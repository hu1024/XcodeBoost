//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSScriptCoercionHandler : NSObject
{
    id _coercers;
}

+ (id)sharedCoercionHandler;
- (void)registerCoercer:(id)arg1 selector:(SEL)arg2 toConvertFromClass:(Class)arg3 toClass:(Class)arg4;
- (id)coerceValue:(id)arg1 toClass:(Class)arg2;
- (id)_findCoercerFromClass:(Class)arg1 toClass:(Class)arg2;
- (void)dealloc;
- (id)init;
- (void)_setUpFoundationCoercions;

@end

