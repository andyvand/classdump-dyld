/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData;

@interface PFZipLocalFileHeader : NSObject {

	unsigned short _versionNeededToExtract;
	unsigned short _generalPurposeBit;
	unsigned short _compressionMethod;
	unsigned short _lastModTime;
	unsigned short _lastModDate;
	unsigned _crc32;
	unsigned _compressedSize;
	unsigned _uncompressedSize;
	unsigned short _filenameLength;
	unsigned short _extraFieldLength;
	NSString* _filename;
	NSData* _extraFieldData;

}

@property (assign,nonatomic) unsigned short versionNeededToExtract;              //@synthesize versionNeededToExtract=_versionNeededToExtract - In the implementation block
@property (assign,nonatomic) unsigned short generalPurposeBit;                   //@synthesize generalPurposeBit=_generalPurposeBit - In the implementation block
@property (assign,nonatomic) unsigned short compressionMethod;                   //@synthesize compressionMethod=_compressionMethod - In the implementation block
@property (assign,nonatomic) unsigned short lastModTime;                         //@synthesize lastModTime=_lastModTime - In the implementation block
@property (assign,nonatomic) unsigned short lastModDate;                         //@synthesize lastModDate=_lastModDate - In the implementation block
@property (assign,nonatomic) unsigned crc32;                                     //@synthesize crc32=_crc32 - In the implementation block
@property (assign,nonatomic) unsigned compressedSize;                            //@synthesize compressedSize=_compressedSize - In the implementation block
@property (assign,nonatomic) unsigned uncompressedSize;                          //@synthesize uncompressedSize=_uncompressedSize - In the implementation block
@property (nonatomic,readonly) unsigned short filenameLength;                    //@synthesize filenameLength=_filenameLength - In the implementation block
@property (nonatomic,readonly) unsigned short extraFieldLength;                  //@synthesize extraFieldLength=_extraFieldLength - In the implementation block
@property (nonatomic,retain) NSString * filename;                                //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) NSData * extraFieldData;                            //@synthesize extraFieldData=_extraFieldData - In the implementation block
@property (nonatomic,readonly) unsigned totalHeaderLength; 
-(unsigned long long)loadFromBytes:(const char*)arg1 offset:(unsigned long long)arg2 ;
-(unsigned)crc32;
-(unsigned)uncompressedSize;
-(unsigned)compressedSize;
-(unsigned)totalHeaderLength;
-(unsigned short)compressionMethod;
-(void)setExtraFieldData:(NSData *)arg1 ;
-(unsigned long long)loadFromData:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)appendToData:(id)arg1 ;
-(unsigned short)versionNeededToExtract;
-(void)setVersionNeededToExtract:(unsigned short)arg1 ;
-(unsigned short)generalPurposeBit;
-(void)setGeneralPurposeBit:(unsigned short)arg1 ;
-(void)setCompressionMethod:(unsigned short)arg1 ;
-(unsigned short)lastModTime;
-(void)setLastModTime:(unsigned short)arg1 ;
-(unsigned short)lastModDate;
-(void)setLastModDate:(unsigned short)arg1 ;
-(void)setCrc32:(unsigned)arg1 ;
-(void)setCompressedSize:(unsigned)arg1 ;
-(void)setUncompressedSize:(unsigned)arg1 ;
-(unsigned short)filenameLength;
-(unsigned short)extraFieldLength;
-(NSData *)extraFieldData;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
@end

