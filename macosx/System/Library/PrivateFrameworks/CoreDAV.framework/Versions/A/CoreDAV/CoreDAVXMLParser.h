/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSXMLParser.h>
#import <CoreDAV/CoreDAVResponseBodyParser.h>

@class CoreDAVXMLElementGenerator, NSSet, NSURL, CoreDAVItem, CoreDAVErrorItem, NSString, NSError;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser> {

	CoreDAVXMLElementGenerator* _rootElementGenerator;
	CoreDAVXMLElementGenerator* _rootErrorGenerator;
	NSSet* _parseHints;
	NSURL* _baseURL;

}

@property (nonatomic,retain) NSSet * parseHints;                                             //@synthesize parseHints=_parseHints - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) CoreDAVItem * rootElement; 
@property (nonatomic,readonly) CoreDAVErrorItem * rootError; 
@property (nonatomic,retain) CoreDAVXMLElementGenerator * rootElementGenerator;              //@synthesize rootElementGenerator=_rootElementGenerator - In the implementation block
@property (nonatomic,retain) CoreDAVXMLElementGenerator * rootErrorGenerator;                //@synthesize rootErrorGenerator=_rootErrorGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSError * parserError; 
+(char)canHandleContentType:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(NSURL *)baseURL;
-(id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4 ;
-(char)processData:(id)arg1 forTask:(id)arg2 ;
-(CoreDAVItem *)rootElement;
-(void)setParseHints:(NSSet *)arg1 ;
-(CoreDAVErrorItem *)rootError;
-(NSSet *)parseHints;
-(CoreDAVXMLElementGenerator *)rootErrorGenerator;
-(void)setRootErrorGenerator:(CoreDAVXMLElementGenerator *)arg1 ;
-(void)setRootElementGenerator:(CoreDAVXMLElementGenerator *)arg1 ;
-(CoreDAVXMLElementGenerator *)rootElementGenerator;
@end

