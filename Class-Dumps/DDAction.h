//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DDAction : NSObject
{
    NSString *_name;
    NSString *_actionUTI;
    int _type;
    BOOL _alternate;
    BOOL _isDefault;
    BOOL _isImmediate;
    BOOL _hasDynamicName;
}

+ (id)actionForDictionary:(id)arg1 inBundle:(id)arg2;
@property BOOL isImmediate; // @synthesize isImmediate=_isImmediate;
@property BOOL isDefault; // @synthesize isDefault=_isDefault;
@property BOOL alternate; // @synthesize alternate=_alternate;
@property(readonly) NSString *actionUTI; // @synthesize actionUTI=_actionUTI;
- (id)menuItem;
- (BOOL)runForURL:(id)arg1 context:(id)arg2;
- (BOOL)runForTextCheckingResult:(id)arg1 context:(id)arg2;
- (BOOL)runForResult:(struct __DDResult *)arg1 context:(id)arg2;
- (BOOL)runForTopLevelMatch:(id)arg1;
@property(readonly) int type;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithDict:(id)arg1;

@end

