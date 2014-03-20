//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CNObservable.h"

@interface CNObservable : NSObject <CNObservable>
{
}

+ (id)observableWithBlock:(CDUnknownBlockType)arg1;
+ (id)observableOnNotificationCenter:(id)arg1 withName:(id)arg2 object:(id)arg3;
+ (id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2;
+ (id)observableForKeyPath:(id)arg1 ofObject:(id)arg2 withOptions:(unsigned long long)arg3;
- (id)subscribe:(id)arg1;
- (id)allObjects:(id *)arg1;
- (id)subscribeOn:(id)arg1;

@end

