/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOResourceManager : NSObject {

	unsigned _tileGroupIdentifier;

}
+(id)sharedManagerForTileGroupIdentifier:(unsigned)arg1 ;
+(id)sharedManager;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
-(id)initWithTileGroupIdentifier:(unsigned)arg1 ;
-(id)allResourceNames;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
-(char)isDevResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
@end

