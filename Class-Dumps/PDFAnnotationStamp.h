//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PDFKit/PDFAnnotation.h>

#import "NSCopying.h"

@class PDFAnnotationStampPrivateVars;

@interface PDFAnnotationStamp : PDFAnnotation <NSCopying>
{
    PDFAnnotationStampPrivateVars *_pdfPriv2;
}

- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addNameToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)drawWithBox:(int)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)isMarkupAnnotation;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)secondaryInit;
- (void)commonInit;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;

@end

