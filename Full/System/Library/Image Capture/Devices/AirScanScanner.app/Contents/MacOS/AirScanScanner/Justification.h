/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Image Capture/Devices/AirScanScanner.app/Contents/MacOS/AirScanScanner
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface Justification : NSObject {

	NSString* _XImagePosition;
	NSString* _YImagePosition;

}

@property (nonatomic,retain) NSString * XImagePosition;              //@synthesize XImagePosition=_XImagePosition - In the implementation block
@property (nonatomic,retain) NSString * YImagePosition;              //@synthesize YImagePosition=_YImagePosition - In the implementation block
-(id)initWithXML:(id)arg1 ;
-(NSString *)XImagePosition;
-(NSString *)YImagePosition;
-(id)feederXAlignment;
-(id)feederYAlignment;
-(void)addICASettingsTo:(id)arg1 ;
-(void)setXImagePosition:(NSString *)arg1 ;
-(void)setYImagePosition:(NSString *)arg1 ;
-(id)description;
@end
