/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKDOMDocument, NSArray;

@interface WKDOMNode : NSObject {

	RefPtr<WebCore::Node>* _impl;

}

@property (readonly) WKDOMDocument * document; 
@property (readonly) WKDOMNode * parentNode; 
@property (readonly) WKDOMNode * firstChild; 
@property (readonly) WKDOMNode * lastChild; 
@property (readonly) WKDOMNode * previousSibling; 
@property (readonly) WKDOMNode * nextSibling; 
@property (readonly) NSArray * textRects; 
-(char)dd_searchForLinkEndNode:(id)arg1 ;
-(void)removeChild:(id)arg1 ;
-(WKDOMNode *)firstChild;
-(WKDOMNode *)lastChild;
-(WKDOMNode *)previousSibling;
-(WKDOMNode *)nextSibling;
-(void)appendChild:(id)arg1 ;
-(id)_initWithImpl:(Node*)arg1 ;
-(void)insertNode:(id)arg1 before:(id)arg2 ;
-(OpaqueWKBundleNodeHandleRef)_copyBundleNodeHandleRef;
-(void)dealloc;
-(WKDOMDocument *)document;
-(WKDOMNode *)parentNode;
-(NSArray *)textRects;
@end

