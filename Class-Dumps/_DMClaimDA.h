//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _DMClaimDA : NSObject
{
    struct __DASession *_givenDASession;
}

- (int)stopClaiming;
- (int)startClaimingMountable;
- (int)startClaimingUnrecognized;
- (void)dealloc;
- (id)initWithSession:(struct __DASession *)arg1;

@end

