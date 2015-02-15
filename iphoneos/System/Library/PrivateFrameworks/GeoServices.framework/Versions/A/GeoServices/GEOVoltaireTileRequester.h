/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileRequester.h>
#import <GeoServices/GEOVoltaireMultiTileDownloaderDelegate.h>
#import <GeoServices/GEOTileRequesterDelegate.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>

@class NSMutableArray, NSThread, NSTimer, GEOVoltaireSimpleTileRequester, NSString;

@interface GEOVoltaireTileRequester : GEOTileRequester <GEOVoltaireMultiTileDownloaderDelegate, GEOTileRequesterDelegate, GEOResourceManifestTileGroupObserver> {

	NSMutableArray* _activeDownloads;
	NSThread* _startThread;
	NSTimer* _activeTileGroupTimeoutTimer;
	NSMutableArray* _errors;
	GEOVoltaireSimpleTileRequester* _simpleRequester;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned char)tileProviderIdentifier;
+(unsigned long long)expiringTilesetsCount;
+(SCD_Struct_GE51*)newExpiringTilesets;
+(char)skipNetworkForKeysWhenPreloading:(id)arg1 ;
+(Class)multiDownloaderClass;
+(Class)simpleRequesterClass;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)tileRequester:(id)arg1 receivedError:(id)arg2 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 etag:(id)arg5 forKey:(GEOTileKey)arg6 userInfo:(id)arg7 ;
-(void)tileRequesterFinished:(id)arg1 ;
-(void)_startWithTileKeys:(id)arg1 ;
-(void)_failedToReceiveActiveTileGroup:(id)arg1 ;
-(id)multiTileURLStringForTileKey:(GEOTileKey*)arg1 useStatusCodes:(char*)arg2 ;
-(void)tryFinish;
-(void)tileDownloadFinished:(id)arg1 ;
-(void)tileDownload:(id)arg1 didReceiveData:(id)arg2 edition:(unsigned)arg3 forKey:(GEOTileKey)arg4 ;
-(void)tileDownload:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(void)start;
-(void)cancel;
-(void)cleanup;
@end
