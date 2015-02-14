/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PFZipEndOfCentralDirectoryRecord : NSObject {

	unsigned short _numberOfDisk;
	unsigned short _diskWhereCentralDirectoryStarts;
	unsigned short _numberOfCentralDirectoryRecordsOnThisDisk;
	unsigned short _totalNumberOfCentralDirectoryRecords;
	unsigned _byteSizeOfCentralDirectory;
	unsigned _centralDirectoryOffset;
	unsigned short _commentLength;
	NSString* _comment;

}

@property (assign,nonatomic) unsigned short numberOfDisk;                                           //@synthesize numberOfDisk=_numberOfDisk - In the implementation block
@property (assign,nonatomic) unsigned short diskWhereCentralDirectoryStarts;                        //@synthesize diskWhereCentralDirectoryStarts=_diskWhereCentralDirectoryStarts - In the implementation block
@property (assign,nonatomic) unsigned short numberOfCentralDirectoryRecordsOnThisDisk;              //@synthesize numberOfCentralDirectoryRecordsOnThisDisk=_numberOfCentralDirectoryRecordsOnThisDisk - In the implementation block
@property (assign,nonatomic) unsigned short totalNumberOfCentralDirectoryRecords;                   //@synthesize totalNumberOfCentralDirectoryRecords=_totalNumberOfCentralDirectoryRecords - In the implementation block
@property (assign,nonatomic) unsigned byteSizeOfCentralDirectory;                                   //@synthesize byteSizeOfCentralDirectory=_byteSizeOfCentralDirectory - In the implementation block
@property (assign,nonatomic) unsigned centralDirectoryOffset;                                       //@synthesize centralDirectoryOffset=_centralDirectoryOffset - In the implementation block
@property (nonatomic,readonly) unsigned short commentLength;                                        //@synthesize commentLength=_commentLength - In the implementation block
@property (nonatomic,retain) NSString * comment;                                                    //@synthesize comment=_comment - In the implementation block
-(unsigned long long)loadFromBytes:(const char*)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)loadFromData:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)appendToData:(id)arg1 ;
-(unsigned short)numberOfDisk;
-(void)setNumberOfDisk:(unsigned short)arg1 ;
-(unsigned short)diskWhereCentralDirectoryStarts;
-(void)setDiskWhereCentralDirectoryStarts:(unsigned short)arg1 ;
-(unsigned short)numberOfCentralDirectoryRecordsOnThisDisk;
-(void)setNumberOfCentralDirectoryRecordsOnThisDisk:(unsigned short)arg1 ;
-(unsigned short)totalNumberOfCentralDirectoryRecords;
-(void)setTotalNumberOfCentralDirectoryRecords:(unsigned short)arg1 ;
-(unsigned)byteSizeOfCentralDirectory;
-(void)setByteSizeOfCentralDirectory:(unsigned)arg1 ;
-(unsigned)centralDirectoryOffset;
-(void)setCentralDirectoryOffset:(unsigned)arg1 ;
-(unsigned short)commentLength;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
@end

