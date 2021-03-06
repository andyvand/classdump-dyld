/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CUIPSDLayer : NSObject {

	double _opacity;
	int _blendMode;
	NSString* _name;

}

@property (assign,nonatomic) double opacity;               //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setOpacity:(double)arg1 ;
-(double)opacity;
@end

