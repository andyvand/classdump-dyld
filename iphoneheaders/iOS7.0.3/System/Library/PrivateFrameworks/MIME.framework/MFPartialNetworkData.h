/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData;

@interface MFPartialNetworkData : NSObject {

	NSMutableData* _rawData;
	NSMutableData* _unixData;

}
-(void)dealloc;
-(id)rawData;
-(id)copyDataWithUnixLineEndings;
-(void)appendRawData:(id)arg1 ;
-(void)setRawData:(id)arg1 ;
-(unsigned)rawDataLength;
-(id)dataWithUnixLineEndings;
-(void)purgeCaches;
@end
