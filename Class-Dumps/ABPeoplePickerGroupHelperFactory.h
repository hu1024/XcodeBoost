//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABGroupHelperFactory.h"

@class ABPeoplePickerScope;

__attribute__((visibility("hidden")))
@interface ABPeoplePickerGroupHelperFactory : NSObject <ABGroupHelperFactory>
{
    ABPeoplePickerScope *_pickerScope;
}

- (id)makeSectionSelectHelperWithIdentifier:(id)arg1;
- (id)makeImportFilesHelper:(id)arg1 showImportConfirmation:(BOOL)arg2;
- (id)makeEditSmartGroupHelper:(id)arg1;
- (id)makeCreateSmartGroupFromSearchHelper;
- (id)makeCreateSmartGroupHelper;
- (id)makeSearchingSelectHelper:(id)arg1;
- (id)makeBrowsingSelectHelper:(id)arg1;
- (id)makeDragHelper:(id)arg1;
- (id)makeDropHelper:(id)arg1;
- (id)makeDeleteHelper:(id)arg1;
- (id)makeRenameHelper:(id)arg1;
- (id)makeCreateHelper:(id)arg1;
- (id)makePasteHelper:(id)arg1;
- (id)makeCutHelper:(id)arg1;
- (id)makeCopyHelper:(id)arg1;
- (void)dealloc;
- (id)initWithPickerScope:(id)arg1;

@end

