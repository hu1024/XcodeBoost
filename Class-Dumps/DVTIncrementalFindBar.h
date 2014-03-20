//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTFindBar.h>

@class DVTDocumentLocation, DVTFindResult, DVTTextFinder;

@interface DVTIncrementalFindBar : DVTFindBar
{
    DVTTextFinder *_finder;
    DVTFindResult *_currentResult;
    DVTDocumentLocation *_findAnchor;
    struct _DVTIncrementalFindBarFlags _ifbflags;
}

@property(copy) DVTDocumentLocation *_findAnchor; // @synthesize _findAnchor;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)_finder;
- (void)_tellDelegateAboutFoundResults:(id)arg1;
- (void)_tellDelegateAboutCurrentResult:(id)arg1;
- (void)updateStatusInformingDelegate:(BOOL)arg1;
- (void)clearResults;
- (void)_resetFindAnchor;
- (void)invalidateResultsAndUpdate:(BOOL)arg1;
- (BOOL)supportsCaseInsensitiveMatch;
- (BOOL)supportsTextMatchStyle:(int)arg1;
- (BOOL)supportsFindBarMode:(unsigned long long)arg1;
- (BOOL)supportsFindBarType:(unsigned long long)arg1;
@property(retain, nonatomic) id findObject;
- (void)findBarLostFocus;
- (void)performFindHighlightingFirstResult:(BOOL)arg1 informDelegate:(BOOL)arg2;
- (void)replaceAllInSelection:(id)arg1;
- (void)replaceAll:(id)arg1;
- (void)_replaceAllInSelection:(BOOL)arg1;
- (void)replaceAndFindPrevious:(id)arg1;
- (void)replaceAndFindNext:(id)arg1;
- (void)replace:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)_showWrapOrEndOfFileBezel:(BOOL)arg1 reverse:(BOOL)arg2;
- (void)_findBackwardsFrom:(id)arg1;
- (void)selectFindField:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

