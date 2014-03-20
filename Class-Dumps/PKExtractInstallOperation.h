//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKInstallOperation.h>

@class PKPackageSpecifier, PKPayloadCopier;

@interface PKExtractInstallOperation : PKInstallOperation
{
    unsigned long long _payloadBytesCompleted;
    unsigned long long _totalPayloadSize;
    PKPackageSpecifier *_currentPackageSpecifier;
    PKPayloadCopier *_activeExtractor;
    struct dispatch_queue_s *_updateQueue;
}

- (void)cancel;
- (void)main;
- (BOOL)_extractPayloadForPackageSpecifier:(id)arg1 error:(id *)arg2;
- (BOOL)_extractScriptsForPackageSpecifier:(id)arg1 error:(id *)arg2;
- (BOOL)_extractBomForPackageSpecifier:(id)arg1 error:(id *)arg2;
- (id)_activeExtractor;
- (void)_setActiveExtractor:(id)arg1;
- (id)messageTracerComment;
- (id)messageTracerDomain;
- (id)currentPackageSpecifier;
- (int)installState;
- (double)estimatedTimeRemaining;
- (void)finalize;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3;

@end

