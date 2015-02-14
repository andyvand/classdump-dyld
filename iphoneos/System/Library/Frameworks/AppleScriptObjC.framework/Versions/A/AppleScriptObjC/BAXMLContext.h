/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppleScriptObjC.framework/Versions/A/AppleScriptObjC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleScriptObjC/NSXMLParserDelegate.h>

@class BAMetadataManager, NSString, BAFunctionSignature, NSMutableDictionary;

@interface BAXMLContext : NSObject <NSXMLParserDelegate> {

	BAMetadataManager* _m;
	NSString* _currentClass;
	NSString* _currentMethod;
	NSString* _currentProtocol;
	NSString* _currentFunction;
	unsigned long long _currentArgDepth;
	BAFunctionSignature* _currentSignature;
	NSMutableDictionary* _retvals;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(id)initWithManager:(id)arg1 ;
-(void)dealloc;
@end

