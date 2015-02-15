/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOVoltaireMultiTileDownloader.h>

@interface GEOVoltaire3DMultiTileDownloader : GEOVoltaireMultiTileDownloader
-(id)_urlForTileKey:(GEOTileKey*)arg1 ;
-(id)_localizationURLIfNecessaryForTileKey:(GEOTileKey*)arg1 ;
-(GEOTileKey)_tileKeyForURL:(id)arg1 edition:(unsigned*)arg2 isLocalized:(char*)arg3 ;
-(id)_baseURLStringForTileKey:(GEOTileKey*)arg1 ;
@end

