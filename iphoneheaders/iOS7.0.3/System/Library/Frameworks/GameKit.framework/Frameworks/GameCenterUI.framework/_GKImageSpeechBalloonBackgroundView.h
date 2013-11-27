/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UIImageView.h>

@class UIImage;

@interface _GKImageSpeechBalloonBackgroundView : UIImageView {

	unsigned char _tipDirection;
	UIImage* _templateImage;

}

@property (assign,nonatomic) unsigned char tipDirection;              //@synthesize tipDirection=_tipDirection - In the implementation block
@property (nonatomic,retain) UIImage * templateImage;                 //@synthesize templateImage=_templateImage - In the implementation block
-(unsigned char)tipDirection;
-(void)setTipDirection:(unsigned char)arg1 ;
-(void)setTemplateImage:(id)arg1 ;
-(id)templateImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)tintColorDidChange;
-(void)updateImage;
-(void)updateTransform;
@end
