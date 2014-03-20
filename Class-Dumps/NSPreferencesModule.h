//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSPreferencesModule.h"

@class NSBox;

@interface NSPreferencesModule : NSObject <NSPreferencesModule>
{
    NSBox *_preferencesView;
    struct CGSize _minSize;
    BOOL _hasChanges;
    void *_reserved;
}

+ (id)sharedInstance;
- (BOOL)isResizable;
- (BOOL)preferencesWindowShouldClose;
- (BOOL)moduleCanBeRemoved;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (void)setMinSize:(struct CGSize)arg1;
- (struct CGSize)minSize;
- (void)didChange;
- (void)initializeFromDefaults;
- (void)willBeDisplayed;
- (void)saveChanges;
- (BOOL)hasChangesPending;
- (id)titleForIdentifier:(id)arg1;
- (id)imageForPreferenceNamed:(id)arg1;
- (id)viewForPreferenceNamed:(id)arg1;
- (void)setPreferencesView:(id)arg1;
- (id)preferencesNibName;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end

