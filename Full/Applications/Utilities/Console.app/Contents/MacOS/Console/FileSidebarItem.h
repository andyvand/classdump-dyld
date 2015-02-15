/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:14:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Console.app/Contents/MacOS/Console
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Console/Console-Structs.h>
#import <Console/SidebarItem.h>

@class NSDate;

@interface FileSidebarItem : SidebarItem {

	unsigned long long _stringEncoding;
	char _isCompressed;
	char _isProblemReport;
	char _isASLDatabase;
	char _exists;
	unsigned long long _uncompressedSize;
	stat _savedStats;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	unsigned long long _fileSize;

}

@property (retain) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSDate * modificationDate;                //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign) unsigned long long fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
+(id)fileSidebarItemWithPath:(id)arg1 ;
+(id)problemReportExtensions;
+(id)compressedFileExtensions;
+(id)ASLFileExtensions;
+(id)problemReportImage;
+(id)logFileImage;
+(id)bz2LogFileImage;
+(id)gzLogFileImage;
+(id)fileSidebarItemWithURL:(id)arg1 ;
-(char)isCompressed;
-(char)isProblemReport;
-(char)isASLDatabase;
-(void)fileSystemNodeChanged:(id)arg1 ;
-(char)isExpectedOnDisk;
-(void)updateAttributesWithURL:(id)arg1 ;
-(char)convertASLDatabaseToPlainText:(id)arg1 ;
-(unsigned long long)stringEncoding;
-(void)setStringEncoding:(unsigned long long)arg1 ;
-(unsigned long long)uncompressedSize;
-(char)exists;
-(void)setFileSize:(unsigned long long)arg1 ;
-(unsigned long long)size;
-(id)initWithPath:(id)arg1 ;
-(NSDate *)modificationDate;
-(id)initWithURL:(id)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)fileHandleForReading;
-(unsigned long long)fileSize;
-(void)setModificationDate:(NSDate *)arg1 ;
@end
