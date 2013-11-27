/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUStreamReadChannel.h>
#import <OfficeImport/SFUInputStream.h>

@interface TSPDatabaseInputStream : NSObject <TSUStreamReadChannel, SFUInputStream> {

	sqlite3_blobRef _blob;
	int _offset;
	int _length;

}
-(void)readWithQueue:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)initWithBlob:(sqlite3_blobRef)arg1 ;
-(void)dealloc;
-(long long)offset;
-(void)close;
-(BOOL)canSeek;
-(void)seekToOffset:(long long)arg1 ;
-(unsigned long)readToBuffer:(char*)arg1 size:(unsigned long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
@end
