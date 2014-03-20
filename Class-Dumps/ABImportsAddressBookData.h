//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccount, ABAddressBook, ABDictionaryImporter, ABSimilarRecordMerger, NSMutableArray, NSOperationQueue, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ABImportsAddressBookData : NSObject
{
    ABAddressBook *_addressBook;
    ABAccount *_sourceAccount;
    ABAccount *_destinationAccount;
    ABDictionaryImporter *_importer;
    NSOperationQueue *_imageMover;
    NSURL *_sourceImagesFolder;
    NSURL *_destinationImagesFolder;
    NSMutableArray *_newRecords;
    NSString *_meCardIdentifier;
    ABSimilarRecordMerger *_merger;
    BOOL _deleteOriginalRecords;
}

+ (id)importerWithAddressBook:(id)arg1 sourceAccount:(id)arg2 destinationAccount:(id)arg3 options:(int)arg4;
+ (void)importRecordsFromAccount:(id)arg1 intoAccount:(id)arg2 addressBook:(id)arg3 options:(int)arg4;
- (void)waitForImagesToTransfer;
- (void)assignNewRecordsToGroups;
- (void)mergeNewRecordsWithPreexistingData;
- (void)setTheMeCard;
- (void)removeOriginalRecords:(id)arg1;
- (id)imageURLWithFolder:(id)arg1 identifier:(id)arg2 extension:(id)arg3;
- (void)moveImageWithSourceIdentifier:(id)arg1 toImageWithDestinationIdentifier:(id)arg2 extension:(id)arg3;
- (void)importRecord:(id)arg1;
- (id)groupsToImport;
- (id)peopleToImport;
- (id)recordsToImport;
- (void)moveRecordsIntoDestinationStore;
- (void)makeSureDestinationImagesFolderExists;
- (void)importData;
- (id)newMergerWithExistingRecords;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 sourceAccount:(id)arg2 destinationAccount:(id)arg3 options:(int)arg4;

@end

