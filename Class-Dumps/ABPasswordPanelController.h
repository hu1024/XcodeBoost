//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSPanel, NSSecureTextField, NSString, NSTextField;

@interface ABPasswordPanelController : NSObject
{
    NSPanel *_passwordPanel;
    NSTextField *_passwordPanelDescriptionTextField;
    NSTextField *_passwordPanelReasonTextField;
    NSSecureTextField *_passwordTextField;
    NSButton *_rememberPasswordInKeychainButton;
    NSString *_accountDescription;
    NSString *_accountTypeDescription;
    NSString *_host;
    NSString *_username;
    BOOL _alwaysSavePassword;
    CDUnknownBlockType _completionHandler;
}

@property(retain) NSString *username; // @synthesize username=_username;
@property(retain) NSString *host; // @synthesize host=_host;
@property(retain) NSString *accountTypeDescription; // @synthesize accountTypeDescription=_accountTypeDescription;
@property(retain) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property BOOL alwaysSavePassword; // @synthesize alwaysSavePassword=_alwaysSavePassword;
- (void)passwordSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)help:(id)arg1;
- (void)cancel:(id)arg1;
- (void)changePassword:(id)arg1;
- (void)dealloc;
- (id)localizedReason;
- (id)localizedDescription;
@property(readonly) unsigned long long persistence;
@property(readonly) NSString *password;
- (void)setPasswordPanelReason:(id)arg1;
- (id)passwordPanelReason;
- (void)setPasswordPanelDescription:(id)arg1;
- (id)passwordPanelDescription;
- (id)init;

@end

