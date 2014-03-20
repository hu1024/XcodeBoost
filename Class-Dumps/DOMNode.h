//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMObject.h>

#import "DOMEventTarget.h"

@class DOMDocument, DOMElement, DOMNamedNodeMap, DOMNodeList, NSString;

@interface DOMNode : DOMObject <DOMEventTarget>
{
}

+ (id)_nodeFromJSWrapper:(struct OpaqueJSValue *)arg1;
- (BOOL)dispatchEvent:(id)arg1;
- (void)removeEventListener:(id)arg1:(id)arg2:(BOOL)arg3;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (void)addEventListener:(id)arg1:(id)arg2:(BOOL)arg3;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (void)inspect;
- (BOOL)contains:(id)arg1;
- (unsigned short)compareDocumentPosition:(id)arg1;
- (id)lookupNamespaceURI:(id)arg1;
- (BOOL)isDefaultNamespace:(id)arg1;
- (id)lookupPrefix:(id)arg1;
- (BOOL)isEqualNode:(id)arg1;
- (BOOL)isSameNode:(id)arg1;
- (BOOL)hasAttributes;
- (BOOL)isSupported:(id)arg1:(id)arg2;
- (BOOL)isSupported:(id)arg1 version:(id)arg2;
- (void)normalize;
- (id)cloneNode:(BOOL)arg1;
- (BOOL)hasChildNodes;
- (id)appendChild:(id)arg1;
- (id)removeChild:(id)arg1;
- (id)replaceChild:(id)arg1:(id)arg2;
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;
- (id)insertBefore:(id)arg1:(id)arg2;
- (id)insertBefore:(id)arg1 refChild:(id)arg2;
@property(readonly) BOOL isContentEditable;
@property(readonly) DOMElement *parentElement;
@property(copy) NSString *textContent;
@property(readonly) NSString *baseURI;
@property(readonly) DOMNamedNodeMap *attributes;
@property(readonly) NSString *localName;
@property(copy) NSString *prefix;
@property(readonly) NSString *namespaceURI;
@property(readonly) DOMDocument *ownerDocument;
@property(readonly) DOMNode *nextSibling;
@property(readonly) DOMNode *previousSibling;
@property(readonly) DOMNode *lastChild;
@property(readonly) DOMNode *firstChild;
@property(readonly) DOMNodeList *childNodes;
@property(readonly) DOMNode *parentNode;
@property(readonly) unsigned short nodeType;
@property(copy) NSString *nodeValue;
@property(readonly) NSString *nodeName;
- (void)finalize;
- (void)dealloc;
- (struct RootObject *)_rootObject;
- (id)description;
- (id)lineBoxRects;
- (struct CGRect)boundingBox;
- (id)textRects;
- (id)renderedImage;

@end

