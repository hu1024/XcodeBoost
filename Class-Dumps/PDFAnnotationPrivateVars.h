//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSDate, NSString, PDFAction, PDFAnnotationPopup, PDFBorder, PDFPage;

@interface PDFAnnotationPrivateVars : NSObject
{
    struct CGPDFDictionary *dictionary;
    struct __CFDictionary *dictionaryRef;
    PDFPage *page;
    NSString *type;
    NSString *contents;
    NSDate *modificationDate;
    NSString *textString;
    PDFBorder *border;
    NSColor *color;
    unsigned long long flags;
    struct CGRect bounds;
    PDFAction *action;
    PDFAction *downAction;
    PDFAnnotationPopup *popup;
    struct CGPDFDictionary *popupDictionary;
    struct CGPDFForm *normalAppearance;
    struct CGPDFForm *rolloverAppearance;
    struct CGPDFForm *downAppearance;
    struct CGPDFForm *normalOffAppearance;
    struct CGPDFForm *rolloverOffAppearance;
    struct CGPDFForm *downOffAppearance;
    BOOL saveAppearance;
    BOOL export;
}

@end

