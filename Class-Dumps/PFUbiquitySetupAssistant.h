//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSURL, PFUbiquityBaseline, PFUbiquityContainerIdentifier, PFUbiquityKnowledgeVector, PFUbiquityLocation, PFUbiquityMigrationAssistant, PFUbiquityMigrationManager, PFUbiquityPeerReceipt, PFUbiquityPeerState, PFUbiquityStoreMetadata, PFUbiquitySwitchboardEntry, _PFUbiquityStack;

__attribute__((visibility("hidden")))
@interface PFUbiquitySetupAssistant : NSObject
{
    NSMutableDictionary *_options;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    NSString *_storeType;
    NSURL *_storeURL;
    NSURL *_actualStoreFileURL;
    NSMutableDictionary *_storeMetadataDict;
    BOOL _needsMetadataWrite;
    PFUbiquityKnowledgeVector *_storeKV;
    BOOL _ubiquityEnabled;
    id <NSObject><NSCopying><NSCoding> _ubiquityIdentityToken;
    NSURL *_ubiquityRootURL;
    NSString *_ubiquityRootSubpath;
    NSString *_ubiquityName;
    NSString *_ubiquityContainerIdentifier;
    NSString *_localPeerID;
    NSString *_modelVersionHash;
    NSString *_previousModelVersionHash;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeerState *_localPeerState;
    PFUbiquityKnowledgeVector *_metaKV;
    PFUbiquityBaseline *_baseline;
    BOOL _baselineFileExistsInCloud;
    BOOL _hasUploadingBaseline;
    BOOL _monitorUploadingBaselineAsync;
    BOOL _didBaselineCopy;
    PFUbiquityKnowledgeVector *_baselineKV;
    BOOL _votedOffIsland;
    BOOL _reapUbiquitousLogs;
    BOOL _respondToBaselineRoll;
    BOOL _storeFileExists;
    BOOL _storeFileIsReadOnly;
    BOOL _hasStoreMetadataFile;
    BOOL _hasStoreMetadataEntry;
    BOOL _hasContainerUUID;
    BOOL _hasContainerUUIDInStore;
    BOOL _needsMetadataRecovery;
    PFUbiquityPeerReceipt *_localPeerReceipt;
    PFUbiquityKnowledgeVector *_receiptKV;
    PFUbiquityContainerIdentifier *_containerIdentifier;
    NSString *_preStoreContainerUUID;
    BOOL _usedExistingUUIDMapping;
    BOOL _hasLocalTransactionLogs;
    BOOL _hasMigrationOptions;
    BOOL _didMigrateBaseline;
    BOOL _storeWasMigrated;
    PFUbiquityMigrationAssistant *_migrationAssistant;
    PFUbiquityMigrationManager *_migrationManager;
    BOOL _replayLogsSynchronously;
    BOOL _useLocalAccount;
    BOOL _seedStore;
    NSURL *_seedStoreURL;
    BOOL _haveExistingUUIDMappings;
    BOOL _abortSetup;
    PFUbiquitySwitchboardEntry *_entry;
    BOOL _gotExportNotification;
    int _sideLoadLock;
    NSMutableSet *_logLocationsExportedDuringSideLoad;
    NSMutableDictionary *_gidToRid;
    NSMutableDictionary *_entityNameToGidSet;
    struct dispatch_semaphore_s *_initialSyncSemaphore;
    int _initialSyncComplete;
    NSMutableArray *_queryLocations;
    BOOL _notifyAboutSetupProgress;
    long long _numSetupTries;
    unsigned long long _retryDelaySec;
    BOOL _failSetup;
    NSError *_failSetupError;
    BOOL _gotAccountChange;
    BOOL _cacheFilePresenterForUbiquityRoot;
}

+ (id)createBaselineFromMostRecentLocation:(id)arg1 localPeerID:(id)arg2 error:(id *)arg3;
+ (void)cleanUserDefaultsForStore:(id)arg1;
+ (void)setContainerIdentifierUUID:(id)arg1 forIdentityToken:(id)arg2 forStoreName:(id)arg3;
+ (id)createActualStoreURLForStoreURL:(id)arg1 localPeerID:(id)arg2 containerIdentifier:(id)arg3 andStoreName:(id)arg4;
+ (id)findContainerIDForToken:(id)arg1 storeName:(id)arg2 haveExistingMappings:(char *)arg3;
+ (void)removeUbiquityMetadataFromStore:(id)arg1;
+ (BOOL)ubiquityMetadataTablesPresentInStore:(id)arg1;
+ (BOOL)doBasicSanityCheckForUbiquityRootURL:(id)arg1 withError:(id *)arg2;
+ (id)createDefaultLocalPeerID;
+ (id)generateMachineUUIDString;
+ (void)initialize;
@property(nonatomic) BOOL cacheFilePresenterForUbiquityRoot; // @synthesize cacheFilePresenterForUbiquityRoot=_cacheFilePresenterForUbiquityRoot;
@property(retain, nonatomic) NSError *failSetupError; // @synthesize failSetupError=_failSetupError;
@property(nonatomic) BOOL failSetup; // @synthesize failSetup=_failSetup;
@property(nonatomic) unsigned long long retryDelaySec; // @synthesize retryDelaySec=_retryDelaySec;
@property(readonly, nonatomic) PFUbiquityKnowledgeVector *storeKV; // @synthesize storeKV=_storeKV;
@property(nonatomic) BOOL abortSetup; // @synthesize abortSetup=_abortSetup;
@property(readonly, nonatomic) NSURL *actualStoreFileURL; // @synthesize actualStoreFileURL=_actualStoreFileURL;
@property(nonatomic) BOOL storeWasMigrated; // @synthesize storeWasMigrated=_storeWasMigrated;
@property(readonly, nonatomic) BOOL useLocalAccount; // @synthesize useLocalAccount=_useLocalAccount;
@property(readonly, nonatomic) PFUbiquityContainerIdentifier *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, nonatomic) PFUbiquityLocation *localRootLocation; // @synthesize localRootLocation=_localRootLocation;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly, nonatomic) NSURL *ubiquityRootURL; // @synthesize ubiquityRootURL=_ubiquityRootURL;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly, nonatomic) BOOL needsMetadataRecovery; // @synthesize needsMetadataRecovery=_needsMetadataRecovery;
@property(readonly, nonatomic) BOOL ubiquityEnabled; // @synthesize ubiquityEnabled=_ubiquityEnabled;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
- (void)_setUbiquityRootLocation:(id)arg1 storeName:(id)arg2 localPeerID:(id)arg3 andModelVersionHash:(id)arg4;
- (void)initialSyncComplete;
- (BOOL)isInitialSyncComplete;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (void)ubiquityIdentityTokenChanged:(id)arg1;
- (id)getCurrentUbiquityIdentityToken;
- (BOOL)respondToBaselineRoll:(id *)arg1;
- (BOOL)seedStore:(id)arg1 error:(id *)arg2;
- (BOOL)pruneStagingDirectoryForStore:(id)arg1 error:(id *)arg2;
- (BOOL)checkKnowledgeVectorsAndBaselineWithStore:(id)arg1 error:(id *)arg2;
- (void)exportedLog:(id)arg1;
- (BOOL)tryToReplaceLocalStore:(id)arg1 withStoreSideLoadedByImporter:(id)arg2;
- (BOOL)rewriteTransactionLogs:(id)arg1 toMatchStore:(id)arg2 error:(id *)arg3;
- (BOOL)moveLocalLogFilesToUbiquityLocation:(id *)arg1;
- (id)createSetOfLocalLogLocations:(id *)arg1;
- (BOOL)sideLoadStore:(id)arg1 error:(id *)arg2;
- (BOOL)initializeStack:(id *)arg1;
- (BOOL)migrateMetadataRoot:(id *)arg1;
- (void)removeEntriesFromDictionary:(id)arg1 withBigramSnapshot:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inBigramManagedObjectContext:(id)arg2;
- (void)updateDictionary:(id)arg1 withBigramSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryJPManagedObjectContext:(id)arg2;
- (void)updateDictionary:(id)arg1 withPhraseLearningJPSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inLearningDictionaryManagedObjectContext:(id)arg2;
- (void)updateDictionary:(id)arg1 withPhraseLearningSnapshot:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1 withShortcutSnapshot:(id)arg2;
- (void)insertEntriesInDicitonary:(id)arg1 inUserDictionaryManagedObjectContext:(id)arg2;
- (void)updateDictionary:(id)arg1 withShortcutSnapshot:(id)arg2;
- (BOOL)detectAndFixForkedContainer:(id *)arg1;
- (BOOL)attemptMetadataRecoveryForStore:(id)arg1 error:(id *)arg2;
- (BOOL)checkAndPerformMigrationForStore:(id)arg1 error:(id *)arg2;
- (BOOL)initializeBaselineForStore:(id)arg1 error:(id *)arg2;
- (BOOL)canReadFromUbiquityRootLocation:(id *)arg1;
- (BOOL)initializeReceiptFile:(id *)arg1;
- (BOOL)initializeStoreKnowledgeVectorFromStore:(id)arg1 error:(id *)arg2;
- (BOOL)cleanUpFromFailedSetup:(id *)arg1;
- (BOOL)finishSetupForStore:(id)arg1 error:(id *)arg2;
- (void)finishSetupWithRetry:(id)arg1;
- (BOOL)initializeContainerIdentifierWithStore:(id)arg1 error:(id *)arg2;
- (BOOL)performCoordinatorPostStoreSetup:(id)arg1 error:(id *)arg2;
- (BOOL)doPostValidationInit:(id *)arg1;
- (BOOL)validateOptionsWithError:(id *)arg1;
- (id)migrationAssistant;
- (id)longDescription;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1 andStoreOptions:(id)arg2 forPersistentStoreOfType:(id)arg3 atURL:(id)arg4;
- (id)init;

@end

