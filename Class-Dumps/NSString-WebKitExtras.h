//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (WebKitExtras)
+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)arg1;
+ (unsigned long long)_web_encodingForResource:(char **)arg1;
- (id)_webkit_fixedCarbonPOSIXPath;
- (id)_webkit_stringByCollapsingWhitespaceCharacters;
- (id)_webkit_stringByCollapsingNonPrintingCharacters;
- (id)_webkit_stringByTrimmingWhitespace;
- (id)_webkit_filenameByFixingIllegalCharacters;
- (BOOL)_webkit_hasCaseInsensitiveSubstring:(id)arg1;
- (BOOL)_webkit_hasCaseInsensitiveSuffix:(id)arg1;
- (BOOL)_webkit_hasCaseInsensitivePrefix:(id)arg1;
- (BOOL)_webkit_isCaseInsensitiveEqualToString:(id)arg1;
- (id)_web_stringByStrippingReturnCharacters;
- (id)_web_stringByAbbreviatingWithTildeInPath;
- (float)_web_widthWithFont:(id)arg1;
- (void)_web_drawDoubledAtPoint:(struct CGPoint)arg1 withTopColor:(id)arg2 bottomColor:(id)arg3 font:(id)arg4;
- (void)_web_drawAtPoint:(struct CGPoint)arg1 font:(id)arg2 textColor:(id)arg3 allowingFontSmoothing:(BOOL)arg4;
- (void)_web_drawAtPoint:(struct CGPoint)arg1 font:(id)arg2 textColor:(id)arg3;
@end

