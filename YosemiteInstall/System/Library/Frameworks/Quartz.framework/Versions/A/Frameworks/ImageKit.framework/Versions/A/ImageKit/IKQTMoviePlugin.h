/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKMediaPlugin.h>

@interface IKQTMoviePlugin : IKMediaPlugin {

	CGImageRef _quickTimeIcon;

}
-(void)stopPlayer:(id)arg1 ;
-(char)supportsPlaying;
-(id)playerViewWithFrame:(CGRect)arg1 forRepresentationInstance:(id)arg2 forCell:(id)arg3 ;
-(void)startPlayer:(id)arg1 ;
-(CGImageRef)imageForRepresentationInstance:(id)arg1 forCell:(id)arg2 ;
-(id)_convertInstanceIfNeeded:(id)arg1 ;
-(id)_posterForMovie:(id)arg1 ;
-(id)__imageForRepresentationInstance:(id)arg1 forCell:(id)arg2 ;
-(void)dealloc;
@end

