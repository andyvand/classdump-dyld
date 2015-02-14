/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HIToolbox/HIToolbox-Structs.h>
#import <HIToolbox/PluginReaderGenericModule.h>

@class NSMutableDictionary;

@interface PluginReaderDATFileModule : PluginReaderGenericModule {

	DumpFileHeaderStruct _fileHeader;
	char* _keyToken;
	char* _dataToken;
	_sFILE* _file;
	char* _keyList;
	NSMutableDictionary* _dictionary;
	char _parseOnlyForBasicProperties;

}
-(char)parse;
-(id)initForBasicPropertiesWithFile:(id)arg1 ;
-(char)parseForBasicProperties;
-(void)writePluginInformationIntoDictionary;
-(char)_isWhitespace:(unsigned short)arg1 ;
-(int)_goThroughWhitespace:(id)arg1 forPosition:(int)arg2 ;
-(int)_fillToken:(char*)arg1 withString:(id)arg2 position:(int)arg3 ;
-(id)_getRestOfFile;
-(int)_getNextKeyAndDataToken:(id)arg1 forPosition:(int)arg2 ;
-(void)_parseHeader;
-(char)_processHeader;
-(void)_parseHashTable;
-(id)initWithFileName:(id)arg1 ;
-(char)_parseFile;
@end

