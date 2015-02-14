/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/NSXMLParserDelegate.h>

@class NSXMLParser, IMXMLParserContext, IMXMLParserFrame, NSMutableArray, NSString;

@interface IMXMLParser : NSObject <NSXMLParserDelegate> {

	NSXMLParser* _parser;
	IMXMLParserContext* _context;
	IMXMLParserFrame* _topFrame;
	NSMutableArray* _otherFrames;
	TidyDoc* _tidyDoc;
	CFDictionaryRef _framespace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(char)parseContext:(id)arg1 ;
-(void)_teardownTidy;
-(void)_setupTidy;
-(id)_newDataByTidyingData:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
@end

