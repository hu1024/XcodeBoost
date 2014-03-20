//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IADataPluginDelegate.h"

@class IAAccountSetupResult, IADataPlugin, IAProvider, NSDictionary, NSError, NSString, NSXPCConnection;

@interface IAAccountCreator : NSObject <IADataPluginDelegate>
{
    NSDictionary *_settings;
    IADataPlugin *_plugin;
    IAAccountSetupResult *_result;
    IAProvider *_provider;
    NSError *_error;
    NSString *_appleID;
    NSString *_createdUID;
    BOOL _waiting;
    NSString *_providerID;
    NSString *_pluginID;
    NSString *_token;
    BOOL _continueThroughError;
    BOOL _continueWithoutSSL;
    NSXPCConnection *_connection;
    id <IAXPCProtocol> _agent;
    struct dispatch_queue_s *_replyQueue;
}

+ (id)_possibleAppleIDForSettings:(id)arg1;
+ (id)_createIChatAccountWithSettings:(id)arg1 providerID:(id)arg2 error:(id *)arg3;
+ (id)_createAddressBookAccountWithSettings:(id)arg1 providerID:(id)arg2 error:(id *)arg3;
+ (id)_createRemindersAccountWithSettings:(id)arg1 providerID:(id)arg2 error:(id *)arg3;
+ (id)_createICalAccountWithSettings:(id)arg1 providerID:(id)arg2 error:(id *)arg3;
+ (id)_createNotesAccountWithSettings:(id)arg1 providerID:(id)arg2 error:(id *)arg3;
+ (id)_createMailAccountWithSettings:(id)arg1 providerID:(id)arg2 error:(id *)arg3;
+ (id)inputForSettings:(id)arg1 pluginID:(id)arg2;
+ (id)createAccountForApp:(id)arg1 settings:(id)arg2 providerID:(id)arg3 error:(id *)arg4;
+ (id)accountCreatorWithSettings:(id)arg1 pluginID:(id)arg2 providerID:(id)arg3;
@property BOOL continueWithoutSSL; // @synthesize continueWithoutSSL=_continueWithoutSSL;
@property BOOL continueThroughError; // @synthesize continueThroughError=_continueThroughError;
@property(retain) NSString *token; // @synthesize token=_token;
@property(retain) NSString *pluginID; // @synthesize pluginID=_pluginID;
@property(retain) NSString *providerID; // @synthesize providerID=_providerID;
@property(retain) NSDictionary *settings; // @synthesize settings=_settings;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSString *createdUID; // @synthesize createdUID=_createdUID;
@property(retain) NSString *appleID; // @synthesize appleID=_appleID;
@property(retain) IAProvider *provider; // @synthesize provider=_provider;
- (void)plugin:(id)arg1 aosAccountMigrationFinished:(id)arg2;
- (BOOL)plugin:(id)arg1 handleCertificateError:(id)arg2;
- (void)plugin:(id)arg1 didChangeAccountUID:(id)arg2;
- (void)plugin:(id)arg1 didDeleteAccountUID:(id)arg2;
- (void)plugin:(id)arg1 didCreateAccountUID:(id)arg2;
- (void)plugin:(id)arg1 accountSetupDidFinish:(id)arg2 withResult:(id)arg3;
- (void)setResult:(id)arg1;
- (void)plugin:(id)arg1 accountSetupDidFail:(id)arg2 withError:(id)arg3;
- (void)plugin:(id)arg1 accountSetupUpdate:(id)arg2 withStatus:(long long)arg3;
- (id)_digForAccountType;
- (void)timeout:(id)arg1;
- (BOOL)_createForOSXServer:(id)arg1;
- (id)_exchangeAutodiscoverForSettings:(id)arg1;
- (BOOL)_createForExchange:(id)arg1;
- (BOOL)create;
- (id)_serverAddressForService:(id)arg1;
- (BOOL)_warnAboutMigrationSyncIfNecessary;
- (id)input;
- (void)dealloc;
- (void)createAccountWithReply:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1 plugin:(id)arg2;

@end

