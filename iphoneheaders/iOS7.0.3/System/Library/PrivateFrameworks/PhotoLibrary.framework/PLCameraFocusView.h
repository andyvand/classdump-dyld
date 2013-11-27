/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, CAKeyframeAnimation;

@interface PLCameraFocusView : UIView {

	NSArray* _images;
	CAKeyframeAnimation* _contentsAnimation;
	CAKeyframeAnimation* _boundsAnimation;
	double _animationStartTime;
	BOOL _fadingOut;

}
-(void)_fadeOut;
-(void)dealloc;
-(id)init;
-(void)stopAnimating;
-(void)startAnimating;
-(double)fadeOutDuration;
-(double)fadeInDuration;
-(void)_loadImagesWithImageSize:(CGSize*)arg1 ;
-(id)nameForLightImage;
-(id)nameForDarkImage;
-(id)_createContentsAnimation;
-(id)_createBoundsAnimation;
-(void)_fadeOutDidFinish;
-(void)focusDidEnd;
@end
