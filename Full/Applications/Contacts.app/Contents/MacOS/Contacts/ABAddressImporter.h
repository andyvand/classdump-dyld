/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@class NSString, NSMutableArray, NSPipe;

@interface ABAddressImporter : NSObject {

	NSString* _inputPath;
	_sFILE* _inputStream;
	NSMutableArray* _rows;
	NSString* _delimiterString;
	NSString* _escapeString;
	NSPipe* _conversionBuffer;
	unsigned _encoding;
	struct {
		unsigned firstRowContainsHeaderNames : 1;
		unsigned reserved : 30;
	}  _importerFlags;

}
+(id)commaSeparatedImporterWithPath:(id)arg1 encoding:(unsigned long long)arg2 ;
+(id)tabDelimitedImporterWithPath:(id)arg1 encoding:(unsigned long long)arg2 ;
+(id)importerWithPath:(id)arg1 encoding:(unsigned long long)arg2 ;
-(char)firstRowContainsHeaderNames;
-(id)rowDataAtIndex:(unsigned long long)arg1 ;
-(id)initWithPath:(id)arg1 delimiterString:(id)arg2 escapeString:(id)arg3 encoding:(unsigned long long)arg4 ;
-(void)setDelimiterString:(id)arg1 ;
-(void)setEscapeString:(id)arg1 ;
-(unsigned)detectEncodingForPath:(id)arg1 withDelimiterHint:(id)arg2 ;
-(char)verifyData;
-(char)importSomeData;
-(id)delimiterString;
-(id)escapeString;
-(id)initWithPath:(id)arg1 encoding:(unsigned long long)arg2 ;
-(void)setFirstRowContainsHeaderNames:(char)arg1 ;
-(void)importAllData;
-(id)headerRow;
-(void)finalize;
-(void)dealloc;
-(id)path;
-(unsigned long long)numberOfRows;
-(unsigned long long)numberOfColumns;
@end

