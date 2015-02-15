/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject {

	NSMutableArray* _entries;
	char _flushEverything;

}

@property (assign,nonatomic) char flushEverything;              //@synthesize flushEverything=_flushEverything - In the implementation block
-(char)flushEverything;
-(unsigned long long)tilesetCount;
-(void)tileset:(unsigned*)arg1 edition:(unsigned*)arg2 provider:(unsigned*)arg3 invalidateOnly:(char*)arg4 atIndex:(unsigned long long)arg5 ;
-(void)setFlushEverything:(char)arg1 ;
-(void)addTileset:(unsigned)arg1 edition:(unsigned)arg2 provider:(unsigned)arg3 invalidateOnly:(char)arg4 ;
-(id)init;
-(void)dealloc;
@end

