//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString, NSValue;

@protocol IMTSMSupport
- (unsigned int)deadKeyState;
- (NSString *)currentInputSourceBundleID;
- (NSDictionary *)attributesForCharacterIndex:(unsigned long long)arg1;
- (void)setMarkedText:(id)arg1 selectionRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3 validFlags:(unsigned long long)arg4;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2 validFlags:(unsigned long long)arg3;

@optional
- (BOOL)isDictationHiliteCapableInputContext;
- (BOOL)isTextPlaceholderAwareInputContext;
- (BOOL)isBottomLineInputContext;
- (NSValue *)markedRangeValue;
- (void)commitPendingInlineSession;
- (void)hidePalettesAtInsertionPoint;
- (void)inputSessionDoneSleep;
- (BOOL)isPaletteTerminated:(NSString *)arg1;
- (void)terminatePalette:(NSString *)arg1;
- (unsigned long long)keyboardType;
@end

