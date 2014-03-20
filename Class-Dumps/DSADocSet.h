//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DSADocSet_FastTokenCache, DSANode, DSATermManager, DSATokenIndex, NSArray, NSDictionary, NSManagedObject, NSManagedObjectContext, NSMapTable, NSMutableDictionary, NSPersistentStoreCoordinator, NSString, NSURL;

@interface DSADocSet : NSObject
{
    struct __CFBundle *_docSetBundle;
    NSString *_localization;
    BOOL _isLegacy;
    BOOL _isValid;
    int _modelVersion;
    NSURL *_documentsURL;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSMutableDictionary *_indexesByName;
    DSATokenIndex *_mainTokenIndex;
    DSATokenIndex *_backgroundTokenIndex;
    NSManagedObject *_docSetMO;
    DSANode *_rootNode;
    NSArray *_apiLanguageMOs;
    NSDictionary *_nodesByPath;
    NSMutableDictionary *_nodesByID;
    NSArray *_availabilityArchitectures;
    NSMutableDictionary *_nodeByUUID;
    struct dispatch_group_s *_tocLoadGroup;
    NSMapTable *_nodeTermLists;
    DSATermManager *_termManager;
    BOOL _searchTermsLoaded;
    DSADocSet_FastTokenCache *_fastTokenCache;
}

+ (BOOL)isTokenDeprecated:(id)arg1;
+ (id)resolvedURL:(id)arg1 forDocSets:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
+ (id)_resolveAbsoluteFileURL:(id)arg1 forDocSets:(id)arg2 resolvedWithDocSet:(id *)arg3;
+ (id)_resolveRelativeURL:(id)arg1 forDocSets:(id)arg2 resolvedWithDocSet:(id *)arg3;
+ (id)_resolveRemoteURL:(id)arg1 forDocSets:(id)arg2 resolvedWithDocSet:(id *)arg3;
+ (void)cancelTokenSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
+ (BOOL)searchForTokens:(id)arg1 inDocSets:(id)arg2 withSortDescriptors:(id)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
+ (void)cancelTextSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
+ (BOOL)searchForText:(id)arg1 inDocSets:(id)arg2 withMatchType:(unsigned long long)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
+ (id)docSetForManagedObject:(id)arg1;
+ (int)defaultModelVersion;
+ (int)versionForModel:(id)arg1;
+ (id)modelPathForVersion:(int)arg1;
+ (id)modelForVersion:(int)arg1;
+ (id)_URLForModelInBundle:(struct __CFBundle *)arg1 withLocalization:(id)arg2;
+ (id)_URLForStoreInBundle:(struct __CFBundle *)arg1 withLocalization:(id)arg2;
+ (id)_docSetForCoordinator:(id)arg1;
+ (void)_setDocSet:(id)arg1 forCoordinator:(id)arg2;
@property(retain) DSADocSet_FastTokenCache *fastTokenCache; // @synthesize fastTokenCache=_fastTokenCache;
- (void).cxx_destruct;
- (id)tokenCacheURL;
- (BOOL)hasTokenWithScope:(id)arg1;
- (id)tokensMatchingString:(id)arg1 withMatchType:(unsigned long long)arg2;
- (void)loadTokenCache;
- (void)serializeFastTokenCache:(id)arg1 toPath:(id)arg2;
@property(readonly) BOOL hasTokenCache;
- (void)buildTokenCache;
- (id)allNodes;
- (id)allTokens;
- (id)nodeForURL:(id)arg1;
- (id)bookNodeForURL:(id)arg1;
- (id)_nodeForLookupString:(id)arg1 URLisFileURL:(BOOL)arg2 URLPointsIntoDocSet:(BOOL)arg3;
- (void)_setupNodesByPath;
- (void)_saveCachedNodePaths;
- (void)_loadCachedNodePaths;
- (BOOL)_shouldLoadNodePathCache:(id)arg1;
- (id)_pathForCachedNodePaths;
- (id)availabilityArchitectures;
- (id)apiLanguages;
- (id)_apiLanguageMOs;
- (id)releaseNoteInformation;
- (id)nodesWithDocumentType:(unsigned long long)arg1;
- (id)nodes;
- (id)nodesWithUUIDPattern:(id)arg1;
- (id)nodeWithUUID:(id)arg1;
- (id)searchTermsForNodes:(id)arg1;
- (id)searchTermsForNodeID:(id)arg1 waitForCache:(BOOL)arg2;
- (id)nodesWithIDNumbers:(id)arg1;
- (id)nodeWithIDNumber:(id)arg1;
- (id)nodeWithID:(long long)arg1;
- (void)_setObjectIDSForNodes:(id)arg1;
- (void)_setObjectID:(id)arg1 forNodeID:(id)arg2;
- (id)_objectIDForNodeID:(id)arg1;
- (void)_startLoadingTOCInfo;
- (id)termManager;
- (id)sharedBackgroundAPIIndex;
- (id)sharedAPIIndex;
- (id)apiIndexForUpdating:(BOOL)arg1;
- (id)fullTextIndexForUpdating:(BOOL)arg1;
- (id)_indexNamed:(id)arg1 forUpdating:(BOOL)arg2;
- (id)textIndexURL;
- (double)offsetIntervalForUpdateCheck;
@property(readonly) BOOL requiresUpdateForContent;
- (id)certificateIssuer;
- (id)certificateSigner;
- (id)fallbackURLs;
- (id)fallbackURL;
- (id)documentsURL;
- (id)docSetURL;
- (CDStruct_6df46f26)maximumSupportedXcodeVersion;
- (CDStruct_6df46f26)minimumSupportedXcodeVersion;
- (CDStruct_6df46f26)platformVersion;
- (id)platformFamily;
- (CDStruct_6df46f26)configurationVersion;
- (long long)compare:(id)arg1;
- (CDStruct_6df46f26)version;
- (id)identifier;
- (id)localizedName;
- (id)feedURL;
- (id)localizedFeedName;
@property(readonly) NSString *publisherIdentifier;
@property(readonly) NSString *localizedPublisherName;
@property(readonly) NSString *localizedDescription;
- (BOOL)isLegacyPackage;
- (id)nodeAtNamedPath:(id)arg1;
- (id)rootNode;
- (id)tokenFileURLs;
- (id)localization;
- (id)_objectForInfoKey:(id)arg1;
- (void)_resetBundle;
- (id)bundle;
- (void)_dump;
- (id)_dumpStr;
- (id)description;
- (void)deleteDiskCaches;
- (void)dealloc;
- (void)invalidate;
@property(readonly) BOOL isValid;
- (id)initWithDocRootDirectory:(id)arg1 withXML:(id)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithBundle:(struct __CFBundle *)arg1 withPersistentStoreURL:(id)arg2 modelVersion:(int)arg3 forLocalization:(id)arg4 error:(id *)arg5;
- (id)initWithDocRootDirectory:(id)arg1 forLocalization:(id)arg2 error:(id *)arg3;
- (id)initWithBundle:(struct __CFBundle *)arg1 withXML:(id)arg2 withPersistentStoreCoordinator:(id)arg3 modelVersion:(int)arg4 forLocalization:(id)arg5 error:(id *)arg6;
- (id)searchForTokens:(id)arg1 inNodes:(id)arg2;
- (BOOL)containsTokens:(id)arg1;
- (void)cancelTextSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
- (BOOL)searchForText:(id)arg1 inNodes:(id)arg2 withMatchType:(unsigned long long)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
- (id)searchForText:(id)arg1 inNodes:(id)arg2 withMatchType:(unsigned long long)arg3;
- (int)modelVersion;
- (BOOL)saveChanges:(id *)arg1;
- (BOOL)migrateDataToURL:(id)arg1 copyModel:(BOOL)arg2 error:(id *)arg3;
- (void)_writeCachedNodeInfo;
- (void)_removePersistentStores;
- (id)persistentStoreURL;
- (id)managedObjectContext;
- (id)persistentStoreCoordinator;
- (id)managedObjectModel;
- (id)urlForNode:(id)arg1 localizingPath:(BOOL)arg2;
- (id)localizedPathsForNode:(id)arg1 inBundle:(id)arg2;
- (id)_localizedPathForNode:(id)arg1 inBundle:(id)arg2 forLocalization:(id)arg3;
- (id)_localizedPathInBundle:(id)arg1 forFile:(id)arg2 forLocalization:(id)arg3;
- (id)tokenXMLForToken:(id)arg1;
- (id)urlForTokenXML:(id)arg1;
- (id)urlForToken:(id)arg1;
- (id)urlForNode:(id)arg1;

@end

