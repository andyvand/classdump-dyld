/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class IKSlideshowElement;

@interface IKSlideshowItemLoadOperation : NSOperation {

	IKSlideshowElement* _item;
	char _display;

}
-(id)initWithItem:(id)arg1 display:(char)arg2 ;
-(void)slideshowWillStop:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)main;
-(void)cleanup;
@end

