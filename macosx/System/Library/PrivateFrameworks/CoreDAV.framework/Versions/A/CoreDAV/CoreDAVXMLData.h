/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreDAV/CoreDAV-Structs.h>
@class NSData;

@interface CoreDAVXMLData : NSObject {

	char _shouldAddFormattingSpaces;
	xmlTextWriterRef _writer;
	xmlDoc* _doc;
	char _docHasEnded;
	CFDictionaryRef _seenURIsToPrefixes;
	CFDictionaryRef _seenURIsToDepth;
	CFArrayRef _elementStack;

}

@property (assign,nonatomic) char shouldAddFormattingSpaces;              //@synthesize shouldAddFormattingSpaces=_shouldAddFormattingSpaces - In the implementation block
@property (nonatomic,readonly) NSData * data; 
+(char)string:(id)arg1 isEqualToXmlCharString:(const char*)arg2 ;
-(id)init;
-(void)dealloc;
-(NSData *)data;
-(void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 ;
-(void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContent:(id)arg3 withAttributeNamesAndValues:(id)arg4 ;
-(void)endElement:(id)arg1 inNamespace:(id)arg2 ;
-(void)setShouldAddFormattingSpaces:(char)arg1 ;
-(const char*)_prefixForNameSpace:(const char*)arg1 ;
-(void)_startElement:(id)arg1 inNamespace:(id)arg2 ;
-(void)_startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 attributes:(_va_list_tag*)arg4 ;
-(char)shouldAddFormattingSpaces;
-(void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributes:(id)arg3 ;
-(void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContentAsCDATA:(id)arg3 withAttributeNamesAndValues:(id)arg4 ;
@end

