//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (NSScripting)
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (id)copyScriptingValue:(id)arg1 forKey:(id)arg2 withProperties:(id)arg3;
- (id)_scriptingCopyWithProperties:(id)arg1 forValueForKey:(id)arg2 ofContainer:(id)arg3;
- (void)setScriptingProperties:(id)arg1;
- (id)coerceValueForScriptingProperties:(id)arg1;
- (id)scriptingProperties;
- (id)scriptingValueForSpecifier:(id)arg1;
@end

