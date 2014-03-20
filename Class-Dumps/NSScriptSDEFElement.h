//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSScriptSDEFElement : NSObject
{
    NSString *_name;
    NSDictionary *_attributes;
    NSMutableDictionary *_descriptionsPerSubelementName;
}

- (id)description;
- (id)oneOrMoreDescriptionsForSubelementName:(id)arg1;
- (id)zeroOrMoreDescriptionsForSubelementName:(id)arg1;
- (id)descriptionForOptionalSubelementName:(id)arg1;
- (id)valueForRequiredAttributeKey:(id)arg1;
- (id)valueForOptionalAttributeKey:(id)arg1;
- (id)attributes;
- (id)name;
- (void)addDescription:(id)arg1 forSubelementName:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 attributes:(id)arg2;

@end

