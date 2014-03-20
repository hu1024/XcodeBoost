//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PDFKit/PDFAction.h>

#import "NSCopying.h"

@class PDFActionNamedPrivateVars;

@interface PDFActionNamed : PDFAction <NSCopying>
{
    PDFActionNamedPrivateVars *_pdfPriv2;
}

- (id)description;
- (void)setName:(long long)arg1;
- (long long)name;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(long long)arg1;
- (id)init;
- (id)toolTip;
- (void)addNameToDictionaryRef:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)createDictionaryRef;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (void)commonInit;

@end

