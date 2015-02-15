/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, GEORegionalResourceTileData, GEOResourceManifestConfiguration;

@interface _GEORegionalResourcesTileLoader : NSObject {

	NSMutableArray* _pendingDownloads;
	GEORegionalResourceTileData* _tile;
	/*^block*/id _finishedHandler;
	/*^block*/id _errorHandler;
	char _canceled;
	GEOResourceManifestConfiguration* _manifestConfiguration;

}
-(void)_loadNextResource;
-(void)loadResourcesForTileKey:(const GEOTileKey*)arg1 manifestConfiguration:(id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(id)_destinationPathForResource:(id)arg1 ;
-(char)_loadRegionalResourceFromFilesystemIfPossible:(id)arg1 resourceChecksum:(id)arg2 ;
-(void)_addDownloadForName:(id)arg1 ofType:(long long)arg2 baseURLString:(id)arg3 expectedChecksum:(id)arg4 ;
-(void)dealloc;
-(void)cancel;
@end

