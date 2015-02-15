/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IKMetadataHandler : NSObject
+(id)sharedMetadataHandler;
-(id)processMetaData:(id)arg1 ;
-(id)stringForGPSValue:(double)arg1 isLongitude:(char)arg2 ;
-(id)localizedDate:(id)arg1 format:(id)arg2 ;
-(id)localizedTime:(id)arg1 format:(id)arg2 useUTC:(char)arg3 ;
-(id)localizedDateTime:(id)arg1 ;
-(void)forInfoKey:(id)arg1 addKey:(id)arg2 fromDictionary:(id)arg3 toArray:(id)arg4 ;
-(id)processSubInfo:(id)arg1 forKey:(id)arg2 ;
@end

