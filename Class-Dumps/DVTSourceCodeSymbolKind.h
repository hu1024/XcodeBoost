//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying.h"

@class NSArray, NSString;

@interface DVTSourceCodeSymbolKind : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_localizedDescription;
    NSArray *_conformedToSymbolKindIdentifiers;
    NSArray *_conformedToSymbolKinds;
    NSArray *_allConformingSymbolKinds;
    BOOL _navigationPrefersDefinition;
}

+ (id)sourceCodeSymbolKinds;
+ (id)sourceCodeSymbolKindForIdentifier:(id)arg1;
+ (id)_sourceCodeSymbolKindForExtension:(id)arg1;
+ (void)initialize;
+ (id)classMethodTemplateSymbolKind;
+ (id)instanceMethodTemplateSymbolKind;
+ (id)functionTemplateSymbolKind;
+ (id)classTemplateSymbolKind;
+ (id)namespaceSymbolKind;
+ (id)ibOutletCollectionPropertySymbolKind;
+ (id)ibOutletCollectionVariableSymbolKind;
+ (id)ibOutletCollectionSymbolKind;
+ (id)ibOutletPropertySymbolKind;
+ (id)ibOutletVariableSymbolKind;
+ (id)ibOutletSymbolKind;
+ (id)ibActionMethodSymbolKind;
+ (id)testMethodSymbolKind;
+ (id)globalVariableSymbolKind;
+ (id)localVariableSymbolKind;
+ (id)unionSymbolKind;
+ (id)typedefSymbolKind;
+ (id)structSymbolKind;
+ (id)protocolSymbolKind;
+ (id)propertySymbolKind;
+ (id)parameterSymbolKind;
+ (id)macroSymbolKind;
+ (id)classVariableSymbolKind;
+ (id)instanceVariableSymbolKind;
+ (id)instanceMethodSymbolKind;
+ (id)functionSymbolKind;
+ (id)fieldSymbolKind;
+ (id)enumConstantSymbolKind;
+ (id)enumSymbolKind;
+ (id)classSymbolKind;
+ (id)classMethodSymbolKind;
+ (id)categorySymbolKind;
+ (id)builtinTypeSymbolKind;
+ (id)memberContainerSymbolKind;
+ (id)memberSymbolKind;
+ (id)callableSymbolKind;
+ (id)globalSymbolKind;
+ (id)containerSymbolKind;
@property(readonly) BOOL navigationPrefersDefinition; // @synthesize navigationPrefersDefinition=_navigationPrefersDefinition;
@property(readonly, copy) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)conformsToSymbolKind:(id)arg1;
@property(readonly, getter=isContainer) BOOL container;
@property(readonly, copy) NSArray *allConformingSymbolKinds;
@property(readonly, copy) NSArray *conformedToSymbolKinds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithSourceCodeSymbolKindExtension:(id)arg1;

@end

