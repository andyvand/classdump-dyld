/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOVoltaireTileRequester.h>

@interface GEOVoltaire3DTileRequester : GEOVoltaireTileRequester
+(unsigned char)tileProviderIdentifier;
+(Class)multiDownloaderClass;
+(Class)simpleRequesterClass;
+(GEOTileKey)patchTileKey:(GEOTileKey*)arg1 ;
+(id)queryStringFromKey:(const GEOTileKey*)arg1 manifestConfiguration:(id)arg2 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(id)multiTileURLStringForTileKey:(GEOTileKey*)arg1 useStatusCodes:(char*)arg2 ;
@end

