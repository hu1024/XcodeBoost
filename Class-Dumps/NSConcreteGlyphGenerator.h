//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSGlyphGenerator.h>

@interface NSConcreteGlyphGenerator : NSGlyphGenerator
{
    char *bidiTypes;
    char *bidiLevels;
}

+ (id)sharedGlyphGenerator;
- (void)generateGlyphsForGlyphStorage:(id)arg1 desiredNumberOfCharacters:(unsigned long long)arg2 glyphIndex:(unsigned long long *)arg3 characterIndex:(unsigned long long *)arg4;

@end

