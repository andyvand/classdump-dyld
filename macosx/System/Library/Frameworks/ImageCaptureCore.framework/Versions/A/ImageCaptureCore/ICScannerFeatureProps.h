/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ICScannerFeatureProps : NSObject {

	unsigned long long _type;
	NSString* _internalName;
	NSString* _humanReadableName;
	NSString* _tooltip;

}

@property (assign) unsigned long long type;                   //@synthesize type=_type - In the implementation block
@property (retain) NSString * internalName;                   //@synthesize internalName=_internalName - In the implementation block
@property (retain) NSString * humanReadableName;              //@synthesize humanReadableName=_humanReadableName - In the implementation block
@property (retain) NSString * tooltip;                        //@synthesize tooltip=_tooltip - In the implementation block
-(void)setInternalName:(NSString *)arg1 ;
-(void)setTooltip:(NSString *)arg1 ;
-(NSString *)humanReadableName;
-(void)setHumanReadableName:(NSString *)arg1 ;
-(NSString *)internalName;
-(NSString *)tooltip;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
@end

