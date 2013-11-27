/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBLockOverlayStylePropertiesFactory : NSObject {

	NSMutableDictionary* _deviceQualityToProperties;
	unsigned _style;

}

@property (nonatomic,readonly) unsigned style;              //@synthesize style=_style - In the implementation block
+(id)overlayPropertiesFactoryWithStyle:(unsigned)arg1 ;
-(id)propertiesWithDeviceDefaultGraphicsQuality;
-(id)propertiesWithGraphicsQuality:(int)arg1 ;
-(id)_fetchAndCachePropsForDeviceQuality:(int)arg1 ;
-(void)dealloc;
-(unsigned)style;
-(id)initWithStyle:(unsigned)arg1 ;
@end
