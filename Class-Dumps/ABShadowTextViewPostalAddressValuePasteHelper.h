//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAddressDatumView;

__attribute__((visibility("hidden")))
@interface ABShadowTextViewPostalAddressValuePasteHelper : NSObject
{
    ABAddressDatumView *_datumView;
}

+ (BOOL)pasteString:(id)arg1 intoAddressDatumView:(id)arg2;
- (void)setValue:(id)arg1 onFieldWithTag:(long long)arg2;
- (void)setAddress:(id)arg1;
- (void)dealloc;
- (id)initWithAddressDatumView:(id)arg1;

@end

