/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOSimpleTileRequester.h>
#import <GeoServices/NSURLConnectionDelegate.h>

@class NSString;

@interface GEOVoltaireSimpleTileRequester : GEOSimpleTileRequester <NSURLConnectionDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(unsigned)tileEditionForKey:(GEOTileKey*)arg1 ;
-(id)urlForTileKey:(GEOTileKey*)arg1 ;
-(id)localizationURLForTileKey:(GEOTileKey*)arg1 ;
-(id)_localizationURLForTileKey:(GEOTileKey*)arg1 ;
@end

