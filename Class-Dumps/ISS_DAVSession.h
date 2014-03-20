//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AYGroup.h"

@class ISS_AYAddress, NSLock, NSMutableDictionary, NSString;

@interface ISS_DAVSession : NSObject <AYGroup>
{
    NSString *_scheme;
    NSString *_host;
    NSString *_originalHost;
    ISS_AYAddress *_address;
    int _port;
    BOOL _bypassProxies;
    BOOL _builtinRedirect;
    NSString *_basicAuthStr;
    NSString *_userAgent;
    NSString *_username;
    NSString *_password;
    NSString *_owner;
    unsigned int _readTimeOut;
    id _delegate;
    NSMutableDictionary *_privateInfos;
    long long _bufferSize;
    NSLock *_sessionLock;
    int _numWorkerThread;
    id <DAVAuthStore> _authStore;
    id _simpleAuthStore;
    void *_davReserved;
    NSString *_contentType;
    NSString *_trustHeaderValue;
    BOOL _useBasicAuth;
    NSString *_clientID;
    NSString *_appPrefix;
    SEL _configURLSelector;
    BOOL _didCheckForRealmHost;
    BOOL _isConfigSession;
}

+ (void)setProxiesDelegate:(id)arg1;
+ (void)setMaxWorkerThreadsPerSession:(int)arg1;
+ (void)setMaxRedirection:(int)arg1;
+ (id)sessionWithURL:(id)arg1;
+ (id)sessionWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3;
+ (void)initialize;
- (void)closeReadStream:(struct __CFReadStream **)arg1;
- (void)safeCloseReadStream:(struct __CFReadStream **)arg1 forceClose:(BOOL)arg2;
- (BOOL)openReadStream:(struct __CFReadStream *)arg1;
- (void)operationHasEnded:(id)arg1;
- (BOOL)operationShouldBeLaunchedNow:(id)arg1;
- (int)workerThreadsCount;
- (BOOL)isBypassProxies;
- (void)setBypassProxies:(BOOL)arg1;
- (id)userAgent;
- (void)setUserAgent:(id)arg1;
- (unsigned int)readTimeOut;
- (void)setReadTimeOut:(unsigned int)arg1;
- (id)lockOwner;
- (void)setLockOwner:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (BOOL)hasCredentials;
- (id)password;
- (id)username;
- (void)setUsername:(id)arg1 andPassword:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)infoForKey:(id)arg1;
- (void)setInfo:(id)arg1 forKey:(id)arg2;
- (void)clearAuthChallenge;
- (void)setAuthStore:(id)arg1;
- (BOOL)isBuiltinRedirect;
- (void)setBuiltinRedirect:(BOOL)arg1;
- (id)URLToURI:(id)arg1;
- (id)originalHost;
- (int)port;
- (id)host;
- (id)scheme;
- (BOOL)isConfigSession;
- (SEL)configURLSelector;
- (void)setConfigURLSelector:(SEL)arg1;
- (id)_applicationPrefix;
- (void)_setApplicationPrefix:(id)arg1;
- (id)_clientID;
- (void)_setClientID:(id)arg1;
- (BOOL)_useBasicAuth;
- (void)_setUseBasicAuth:(BOOL)arg1;
- (id)_contentType;
- (void)_setContentType:(id)arg1;
- (id)_trustHeaderValue;
- (void)_setTrustHeaderValue:(id)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (void)setHost:(id)arg1;
- (void)setScheme:(id)arg1 host:(id)arg2 port:(int)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3;
- (id)_keyForOriginalHost:(id)arg1;
- (void)_setRealmHost:(id)arg1 forOriginalHost:(id)arg2;
- (id)_realmHostForOriginalHost:(id)arg1;
- (void)_setDidCheckForRealmHost:(BOOL)arg1;
- (BOOL)_didCheckForRealmHost;
- (id)_DAVRequestProxyAuthentication:(struct __CFHTTPMessage *)arg1 ISS_DAVRequest:(id)arg2 requestURL:(id)arg3 usingHttps:(BOOL)arg4;
- (id)_DAVRequestAddAuthentication:(struct __CFHTTPMessage *)arg1 ISS_DAVRequest:(id)arg2 requestURL:(id)arg3;
- (void)correctBufferSizeWithSize:(long long)arg1;
- (long long)bufferSize;
- (id)getNewRequestMessage:(struct __CFHTTPMessage **)arg1 andStream:(struct __CFReadStream **)arg2 forRequest:(id)arg3;

@end

