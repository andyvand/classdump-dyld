/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:24:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SFUZipOutputEntry : NSObject {

	NSString* name;
	unsigned long long utf8NameLength;
	char isCompressed;
	char isEncrypted;
	unsigned time;
	unsigned long long compressedSize;
	unsigned long long uncompressedSize;
	unsigned long long offset;
	unsigned long long compressedDataOffset;
	unsigned crc;
	char isWrittenDirectlyToFile;
	char is64Bit;

}
-(long long)compareByOffset:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end

