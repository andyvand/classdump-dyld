/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCSCN_ImageSource.h>

@interface QCSCN_DelegateSource : QCSCN_ImageSource {

	id _delegate;

}

@property (nonatomic,retain) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(char)isOpaque;
-(id)textureSourceForRendererContext:(_C3DRendererContext*)arg1 ;
@end

