/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iTunes.app/Contents/Frameworks/iPodUpdater.framework/iPodUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iPodUpdater/iPodUpdater-Structs.h>
@class NSDictionary;

@interface FirmwareController : NSObject {

	NSDictionary* _firmwareList;

}
+(id)userVisibleStringFromNumVersion:(NumVersion)arg1 ;
+(id)userVisibleStringFromBuildIDNumber:(id)arg1 ;
+(NumVersion)numVersionForBuildID:(id)arg1 ;
+(unsigned char)decimalFromBCD:(unsigned char)arg1 ;
+(long long)compareThisVersion:(unsigned)arg1 to:(unsigned)arg2 ;
+(void)cleanupTempFiles;
+(id)defaultController;
-(char)firmwareAvailableForPod:(id)arg1 ;
-(id)updateVersionForPod:(id)arg1 ;
-(id)makeFilenameForFirmware:(id)arg1 ;
-(id)allAvailableFirmwares;
-(id)init;
-(void)dealloc;
@end

