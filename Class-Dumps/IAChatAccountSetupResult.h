//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InternetAccounts/IAAccountSetupResult.h>

@class IMAccount, NSError;

@interface IAChatAccountSetupResult : IAAccountSetupResult
{
    IMAccount *_accountObject;
    BOOL _isExistingAccount;
    NSError *_error;
}

@property BOOL isExistingAccount; // @synthesize isExistingAccount=_isExistingAccount;
@property(retain) NSError *setupError; // @synthesize setupError=_error;
@property(retain) IMAccount *accountObject; // @synthesize accountObject=_accountObject;
- (void)dealloc;

@end

