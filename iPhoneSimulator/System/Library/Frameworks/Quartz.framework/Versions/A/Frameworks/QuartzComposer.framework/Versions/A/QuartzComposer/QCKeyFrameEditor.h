/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSView, NSTextField, QCKeyFrameEditorWindow;

@interface QCKeyFrameEditor : NSObject {

	NSView* view;
	NSTextField* tField;
	NSTextField* vField;
	QCKeyFrameEditorWindow* _window;

}
-(void)dealloc;
-(void)cancel:(id)arg1 ;
-(void)awakeFromNib;
-(char)runEditorForTimeLine:(id)arg1 atKeyFrame:(long long)arg2 forTimeLine:(long long)arg3 controlType:(int)arg4 inView:(id)arg5 atPoint:(CGPoint)arg6 ;
-(void)done:(id)arg1 ;
@end

