//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface APSMessage : NSObject <NSCoding>
{
    NSMutableDictionary *_plist;
}

- (id)dictionaryRepresentation;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(nonatomic) unsigned long long identifier;
@property(retain, nonatomic) NSDictionary *userInfo;
@property(retain, nonatomic) NSString *topic;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTopic:(id)arg1 userInfo:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

