/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/Versions/A/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMCommonCore/IMCommonCore-Structs.h>
@class NSData;

@interface SFUDataRepresentation : NSObject {

	char mHasHash;
	unsigned mHash;
	char mHasSha1Hash;
	NSData* mSha1Hash;

}
-(id)bufferedInputStream;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
-(char)hasSameLocationAs:(id)arg1 ;
-(long long)encodedLength;
-(CGDataProviderRef)cgDataProvider;
-(xmlTextReaderRef)xmlReaderForGzippedDataWithInputStream:(id*)arg1 ;
-(unsigned)uint32Hash;
-(xmlDoc*)xmlDocument;
-(xmlTextReaderRef)xmlReader;
-(xmlTextReaderRef)xmlReaderForGzippedData;
-(unsigned long long)readIntoData:(id)arg1 ;
-(id)sha1Hash;
-(long long)dataLength;
-(char)isReadable;
-(char)isEncrypted;
-(id)inputStream;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
@end

