//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PDFKit/PDFAction.h>

#import "NSCopying.h"

@class PDFActionURLPrivateVars;

@interface PDFActionURL : PDFAction <NSCopying>
{
    PDFActionURLPrivateVars *_pdfPriv2;
}

- (id)description;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;
- (id)toolTip;
- (struct __CFDictionary *)createDictionaryRef;
- (void)commonInit;
- (id)finishInitWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2;
- (void)lazyInit;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;

@end

