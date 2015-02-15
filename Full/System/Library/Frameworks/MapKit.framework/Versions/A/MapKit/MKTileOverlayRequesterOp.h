/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class MKTileOverlayRequester, NSData;

@interface MKTileOverlayRequesterOp : NSObject {

	GEOTileKey _key;
	MKTileOverlayRequester* _delegate;
	NSData* _data;

}

@property (assign,nonatomic) GEOTileKey key;                                        //@synthesize key=_key - In the implementation block
@property (assign,nonatomic,__weak) MKTileOverlayRequester * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
-(void)setDelegate:(MKTileOverlayRequester *)arg1 ;
-(void)start;
-(void)cancel;
-(GEOTileKey)key;
-(MKTileOverlayRequester *)delegate;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setKey:(GEOTileKey)arg1 ;
@end

