/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSError, NSMutableArray, NSData, NSSet, NSURL;

@interface NSXMLParser : NSObject {

	id _reserved0;
	id _delegate;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	xmlSAXHandler* _saxHandler;
	xmlParserCtxt* _parserContext;
	unsigned long long _parserFlags;
	NSError* _error;
	NSMutableArray* _namespaces;
	CFDictionaryRef _slowStringMap;
	char _delegateAborted;
	char _haveDetectedEncoding;
	NSData* _bomChunk;
	unsigned long long _chunkSize;
	NSSet* _allowedEntityURLs;
	NSURL* _url;
	unsigned long long _externalEntityResolvingPolicy;

}

@property (assign) id<NSXMLParserDelegate> delegate; 
@property (assign) char shouldProcessNamespaces; 
@property (assign) char shouldReportNamespacePrefixes; 
@property (assign) unsigned long long externalEntityResolvingPolicy; 
@property (copy) NSSet * allowedExternalEntityURLs; 
@property (copy,readonly) NSError * parserError; 
@property (assign) char shouldResolveExternalEntities; 
+(void)setCurrentParser:(id)arg1 ;
+(id)currentParser;
-(id)initWithStream:(id)arg1 ;
-(void)setShouldResolveExternalEntities:(char)arg1 ;
-(char)parse;
-(long long)lineNumber;
-(void)abortParsing;
-(id)publicID;
-(id)systemID;
-(void)_initializeSAX2Callbacks;
-(id)initForIncrementalParsing;
-(unsigned long long)externalEntityResolvingPolicy;
-(NSSet *)allowedExternalEntityURLs;
-(void)_setExpandedParserError:(id)arg1 ;
-(void)_setParserError:(long long)arg1 ;
-(char)shouldResolveExternalEntities;
-(char)parseData:(id)arg1 ;
-(char)_handleParseResult:(long long)arg1 ;
-(char)finishIncrementalParse;
-(char)parseFromStream;
-(void)setShouldProcessNamespaces:(char)arg1 ;
-(void)setShouldReportNamespacePrefixes:(char)arg1 ;
-(void)setAllowedExternalEntityURLs:(NSSet *)arg1 ;
-(void)setExternalEntityResolvingPolicy:(unsigned long long)arg1 ;
-(xmlParserInput*)_xmlExternalEntityWithURL:(const char*)arg1 identifier:(const char*)arg2 context:(xmlParserCtxt*)arg3 originalLoaderFunction:(/*function pointer*/void*)arg4 ;
-(char)shouldProcessNamespaces;
-(char)shouldReportNamespacePrefixes;
-(void)setShouldContinueAfterFatalError:(char)arg1 ;
-(char)shouldContinueAfterFatalError;
-(NSError *)parserError;
-(long long)columnNumber;
-(void)_pushNamespaces:(id)arg1 ;
-(void)_popNamespaces;
-(void)setDelegate:(id<NSXMLParserDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id<NSXMLParserDelegate>)delegate;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
@end

