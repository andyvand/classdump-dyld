/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/NSXMLParserDelegate.h>

@class NSMutableString, NSMutableDictionary;

@interface MobileActivationNSXMLParserDelegate : NSObject <NSXMLParserDelegate> {

	int _state;
	bool _renderHTML;
	NSMutableString* _currentPlist;
	NSMutableDictionary* _activationTicket;
	bool _recertifying;

}
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)dealloc;
-(id)init;
-(id)stringForState:(int)arg1 ;
-(id)activationTicket:(id*)arg1 andRenderHTML:(bool*)arg2 ;
-(id)flattenedDictString:(id)arg1 ;
-(void)appendClosingTagForElementName:(id)arg1 ;
-(void)appendOpeningTagForElementName:(id)arg1 andAttributes:(id)arg2 ;
-(void)setRecertifying:(bool)arg1 ;
-(id)activationTicket:(id*)arg1 ;
@end
