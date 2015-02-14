/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOTileServerProxyDelegate;
#import <GeoServices/GeoServices-Structs.h>
@class GEOResourceManifestConfiguration, NSLocale;

@interface GEOTileServerProxy : NSObject {

	id<GEOTileServerProxyDelegate> _delegate;
	dispatch_queue_sRef _delegateQ;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;

}

@property (assign,nonatomic) id<GEOTileServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) dispatch_queue_sRef delegateQ;                        //@synthesize delegateQ=_delegateQ - In the implementation block
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 ;
-(void)setDelegateQ:(dispatch_queue_sRef)arg1 ;
-(void)loadTiles:(id)arg1 priorities:(unsigned*)arg2 options:(unsigned long long)arg3 client:(id)arg4 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(char)arg2 ;
-(void)endPreloadSession;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 ;
-(void)calculateFreeableSize;
-(void)flushPendingWrites;
-(char)skipNetworkForKeysWhenPreloading:(id)arg1 ;
-(dispatch_queue_sRef)delegateQ;
-(void)setDelegate:(id<GEOTileServerProxyDelegate>)arg1 ;
-(void)dealloc;
-(id<GEOTileServerProxyDelegate>)delegate;
-(void)close;
-(void)cancel:(const GEOTileKey*)arg1 ;
-(void)open;
@end

